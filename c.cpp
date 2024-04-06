#include <iostream>
#include <algorithm>
#include <string>
#include <iostream>

#include <unordered_map>

using namespace std;
long long factorial(int n);
long long factorialOfDuplicates(const string& str);
void solve(string s1, int a, int b);
long long factorialOfDuplicates(const string& str) {
    unordered_map<char, int> frequency;

    // Count frequencies of characters
    for (char ch : str) {
        frequency[ch]++;
    }

    long long result = 1;
    long long otherFactorial = 1;


    for (const auto& pair : frequency) {
        if (pair.second > 1) {

            long long charFactorial = factorial(pair.second);

            result *= charFactorial;
        } else {

            otherFactorial *= factorial(pair.second);
        }
    }


    result *= otherFactorial;

    return result;
}

long long factorial(int n) {
    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}

void solve(string s1, int a, int b) {

    string s = s1.substr((a - 1), (b - a + 1));

    int low=factorialOfDuplicates(s);
    int up=factorial(s.size());
    int result=up/low;
    cout<<result-1<<"\n";
}


int main() {
    string s1;
    int n, t;
    int a, b;
    cin >> n >> t >> s1;
    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        solve(s1, a, b);
    }
    return 0;
}
