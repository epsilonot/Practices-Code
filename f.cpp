#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int countSeatings(int A, int B, int C, int X) {
    vector<vector<vector<vector<int>>>> dp(A + 1, vector<vector<vector<int>>>(B + 1, vector<vector<int>>(C + 1, vector<int>(X + 1, 0))));

    // Base case: No students left to seat
    dp[0][0][0][0] = 1;

    // Iterate over all possible combinations of students
    for (int i = 0; i <= A; ++i) {
        for (int j = 0; j <= B; ++j) {
            for (int k = 0; k <= C; ++k) {
                for (int l = 0; l <= X; ++l) {
                    // Seats for the next student
                    for (int m = 0; m < 3; ++m) {
                        if (m == 0 && i < A)
                            dp[i + 1][j][k][l + 1] = (dp[i + 1][j][k][l + 1] + dp[i][j][k][l]) % MOD;
                        else if (m == 1 && j < B)
                            dp[i][j + 1][k][l + 1] = (dp[i][j + 1][k][l + 1] + dp[i][j][k][l]) % MOD;
                        else if (m == 2 && k < C)
                            dp[i][j][k + 1][l + 1] = (dp[i][j][k + 1][l + 1] + dp[i][j][k][l]) % MOD;
                    }
                }
            }
        }
    }

    // Sum all possible valid seatings
    int totalSeatings = 0;
    for (int i = 0; i <= A; ++i) {
        for (int j = 0; j <= B; ++j) {
            for (int k = 0; k <= C; ++k) {
                totalSeatings = (totalSeatings + dp[i][j][k][0]) % MOD;
            }
        }
    }

    return totalSeatings;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int A, B, C, X;
        cin >> A >> B >> C >> X;
        int result = countSeatings(A, B, C, X);
        cout << result << endl;
    }
    return 0;
}

