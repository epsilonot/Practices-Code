#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, a;
    vector<int> arr;

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;

        for (int j = 0; j < n; j++) {
            cin >> a;
            arr.push_back(a);
        }


        int length = 0;
        while (!arr.empty() && (arr[0] == 0 || arr[0] == 1) && (arr.back() == 0 || arr.back() == 1)) {
            arr.erase(arr.begin());
            arr.pop_back();
            length++;
        }

        cout << length << endl;
        arr.clear();
    }

    return 0;
}
