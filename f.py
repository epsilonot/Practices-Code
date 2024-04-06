MOD = 10**9 + 7

def count_seatings(A, B, C, X):
    # Initialize dp table
    dp = [[[[0] * (X + 1) for _ in range(C + 1)] for _ in range(B + 1)] for _ in range(A + 1)]

    # Base case: No students left to seat
    dp[0][0][0][0] = 1

    # Iterate over all possible combinations of students
    for i in range(A + 1):
        for j in range(B + 1):
            for k in range(C + 1):
                for l in range(X + 1):
                    # Seats for the next student
                    for m in range(3):
                        if m == 0 and i < A:
                            dp[i + 1][j][k][l + 1] = (dp[i + 1][j][k][l + 1] + dp[i][j][k][l]) % MOD
                        elif m == 1 and j < B:
                            dp[i][j + 1][k][l + 1] = (dp[i][j + 1][k][l + 1] + dp[i][j][k][l]) % MOD
                        elif m == 2 and k < C:
                            dp[i][j][k + 1][l + 1] = (dp[i][j][k + 1][l + 1] + dp[i][j][k][l]) % MOD

    # Sum all possible valid seatings
    total_seatings = 0
    for i in range(A + 1):
        for j in range(B + 1):
            for k in range(C + 1):
                total_seatings = (total_seatings + dp[i][j][k][0]) % MOD

    return total_seatings

# Input reading
t = int(input())
for _ in range(t):
    A, B, C, X = map(int, input().split())
    result = count_seatings(A, B, C, X)
    print(result)
