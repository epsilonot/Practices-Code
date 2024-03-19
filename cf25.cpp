/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,n,sum1=0,sum2=0;
    vector<int>arr;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    int lastelement=arr.back();
    arr.pop_back();
    int lastelement1=arr.back();
    arr.insert(arr.begin(),lastelement1);
    arr.pop_back();
    arr.push_back(lastelement);
    //cout<<lastelement<<lastelement1<<endl;


    for(int i=arr.size()-(n/2);i<arr.size();i++){
        sum1=sum1+arr[i];
        //cout<<arr[i];
    }cout<<sum1<<endl;
    if(n%2!=0){
            for(int i=0;i<=(n/2);i++){
        sum2=sum2+arr[i];
    }cout<<sum2<<endl;
    }else{
        for(int i=0;i<(n/2);i++){
        sum2=sum2+arr[i];
    }cout<<sum2<<endl;
    }
    }*/
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> cards(n);

    for (int i = 0; i < n; i++) {
        cin >> cards[i];
    }

    int left = 0;
    int right = n - 1;
    int serejaScore = 0;
    int dimaScore = 0;
    bool serejaTurn = true;

    while (left <= right) {
        if (serejaTurn) {
            if (cards[left] > cards[right]) {
                serejaScore += cards[left];
                left++;
            } else {
                serejaScore += cards[right];
                right--;
            }
        } else {
            if (cards[left] > cards[right]) {
                dimaScore += cards[left];
                left++;
            } else {
                dimaScore += cards[right];
                right--;
            }
        }

        serejaTurn = !serejaTurn;
    }

    cout << serejaScore << " " << dimaScore << endl;

    return 0;
}
