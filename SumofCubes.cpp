#include <bits/stdc++.h>
using  namespace std;
bool sumOfTwoCubes(long long n);
bool sumOfTwoCubes(long long n)
{
    long long int lo = 1, hi = (long long int)cbrt(n);
    while (lo <= hi) {
        long long int curr = (lo * lo * lo + hi * hi * hi);
        if (curr == n)

            return true;
        if (curr < n)

            lo++;
        else

            hi--;
    }
    return false;
}
int main(){
    int t;
    long long num;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>num;
        if(sumOfTwoCubes(num))
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";

    }
}

