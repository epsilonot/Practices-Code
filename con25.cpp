#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q,a,sum=0;
    cin>>n>>q;
    vector<int>arr;
    vector<int> prefixSum(n+1,0);
    for(int i=0;i<n;i++){
        cin>>a;
        arr.push_back(a);
    }

    int c,d;
    for(int i=0;i<q;i++){
           // sum=0;
        cin>>c>>d;

    }
    arr.clear();
}
/*#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> arr(n);
    vector<int> prefixSum(n + 1, 0); // Initializing prefix sum array

    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Preprocessing: Calculate prefix sum
    for (int i = 0; i < n; i++) {
        prefixSum[i + 1] = prefixSum[i] + arr[i];
    }

    // Answering queries
    for (int i = 0; i < q; i++) {
        int c, d;
        cin >> c >> d;

        // Calculating sum for the given range [c, d]
        int sum = prefixSum[d] - prefixSum[c - 1];
        cout << sum << "\n";
    }

    return 0;
}
*/
