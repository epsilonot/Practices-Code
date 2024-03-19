#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

const int MAXN = 100005;

vector<int> primes;

// Sieve of Eratosthenes to generate prime numbers up to a given limit
void sieve(int limit) {
    vector<bool> isPrime(limit + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int p = 2; p * p <= limit; ++p) {
        if (isPrime[p]) {
            for (int i = p * p; i <= limit; i += p) {
                isPrime[i] = false;
            }
        }
    }

    for (int p = 2; p <= limit; ++p) {
        if (isPrime[p]) {
            primes.push_back(p);
        }
    }
}

// Function to count the prime factors of a number
int countPrimeFactors(int x) {
    int count = 0;
    for (int prime : primes) {
        while (x % prime == 0) {
            count++;
            x /= prime;
        }
        if (x == 1) break;
    }
    return count;
}

int solve(int N, int K, vector<int>& A) {
    vector<int> perfect(MAXN, 0), almostPerfect(MAXN, 0);
    int left = 0, right = 0, result = 0;

    while (right < N) {
        right++;
        int count = countPrimeFactors(A[right - 1]);

        if (perfect[count] == 0) {
            perfect[count] = 1;
        } else {
            almostPerfect[count] = 1;
        }

        while (perfect[count] || almostPerfect[count]) {
            count = countPrimeFactors(A[left]);

            if (perfect[count] == 1) {
                perfect[count] = 0;
            } else {
                almostPerfect[count] = 0;
            }

            left++;
        }

        result = max(result, right - left);
    }

    return result;
}

int main() {
    int T;
    cin >> T;

    sieve(1000);

    for (int caseNum = 1; caseNum <= T; caseNum++) {
        int N, K;
        cin >> N >> K;
        vector<int> A(N);

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int result = solve(N, K, A);
        cout << "Case " << caseNum << ": " << result << endl;
    }

    return 0;
}

