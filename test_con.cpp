#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

const int MOD = 1000000007;
const int MAX_N = 100005;
const int MAX_CHAR = 26;


vector<long long> factorial_mod(int n) {
    vector<long long> fact(n + 1, 1);
    for (int i = 2; i <= n; ++i) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
    return fact;
}


long long mod_inverse(long long a) {
    long long result = 1;
    long long exp = MOD - 2;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * a) % MOD;
        }
        a = (a * a) % MOD;
        exp /= 2;
    }
    return result;
}


long long permutations_with_repetitions(const vector<int>& freq, const vector<long long>& factorials) {
    vector<vector<long long>> dp(MAX_CHAR + 1, vector<long long>(MAX_N));
    for (int i = 0; i <= MAX_CHAR; ++i) {
        dp[i][0] = 1;
    }
    for (int i = 1; i <= MAX_CHAR; ++i) {
        for (int j = 1; j <= MAX_N; ++j) {
            dp[i][j] = (dp[i - 1][j] * factorials[j]) % MOD;
            if (freq[i - 1] <= j) {
                dp[i][j] = (dp[i][j] - (dp[i - 1][j - freq[i - 1]] * factorials[j - freq[i - 1]]) % MOD + MOD) % MOD;
            }
        }
    }
    return dp[MAX_CHAR][accumulate(freq.begin(), freq.end(), 0)];
}

int main() #include <iostream>
#include <vector>
#include <numeric>
using namespace std;

const int MOD = 1000000007;
const int MAX_N = 100005;
const int MAX_CHAR = 26;

// Function to calculate factorial modulo MOD
vector<long long> factorial_mod(int n) {
    vector<long long> fact(n + 1, 1);
    for (int i = 2; i <= n; ++i) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
    return fact;
}

// Function to calculate modular inverse using Fermat's little theorem
long long mod_inverse(long long a) {
    long long result = 1;
    long long exp = MOD - 2;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * a) % MOD;
        }
        a = (a * a) % MOD;
        exp /= 2;
    }
    return result;
}

// Function to calculate number of permutations with repetitions modulo MOD
long long permutations_with_repetitions(const vector<int>& freq, const vector<long long>& factorials) {
    vector<vector<long long>> dp(MAX_CHAR + 1, vector<long long>(MAX_N));
    for (int i = 0; i <= MAX_CHAR; ++i) {
        dp[i][0] = 1;
    }
    for (int i = 1; i <= MAX_CHAR; ++i) {
        for (int j = 1; j <= MAX_N; ++j) {
            dp[i][j] = (dp[i - 1][j] * factorials[j]) % MOD;
            if (freq[i - 1] <= j) {
                dp[i][j] = (dp[i][j] - (dp[i - 1][j - freq[i - 1]] * factorials[freq[i - 1]]) % MOD + MOD) % MOD;
            }
        }
    }
    return dp[MAX_CHAR][accumulate(freq.begin(), freq.end(), 0)];
}

int main() {
    int N, M;
    cin >> N >> M;
    string S;
    cin >> S;

    vector<long long> factorials = factorial_mod(N);

    vector<vector<int>> queries(M, vector<int>(2));
    for (int i = 0; i < M; ++i) {
        cin >> queries[i][0] >> queries[i][1];
    }

    for (auto& query : queries) {
        int L = query[0], R = query[1];
        vector<int> freq(26, 0);
        for (int i = L - 1; i < R; ++i) {
            ++freq[S[i] - 'a'];
        }
        cout << permutations_with_repetitions(freq, factorials)-1 << endl;
    }

    return 0;
}

