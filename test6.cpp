#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d;
    vector<int>arr;
    long long mul;
    cin>>a>>b>>c>>d;
    mul=a*b*c*d;
    for(int i=0; i<2; i++)
    {
        long long digit=mul%10;
        mul=mul/10;
        arr.push_back(digit);
    }
    reverse(arr.begin(),arr.end());
    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr[i];
    }
    arr.clear();
}
