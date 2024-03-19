#include<bits/stdc++.h>
using namespace std;
int divisor(int n)
{
    if(n%10<n%7)
    return 7-(n%7)+n;
    else
        return n-(n%7);
}
int main()
{
    int number,t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>number;
        int result=divisor(number);
        cout<<result<<"\n";
    }
}
