#include<bits/stdc++.h>
using namespace std;
bool isPrime(int num);
int nextprime(int num)
{
    int next=num+1;
    while (true)
    {
        if (isPrime(next))
        {
            return next;
        }
        next++;
    }
}
bool isPrime(int num)
{
    if(num<=1)
    {
        return false;
    }
    for (int i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            return false;
        }
    }
    return true;
}



int main()
{
    int a,b,flag=1;
    cin>>a>>b;
    int next=nextprime(a);
    if(next==b)
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";
}

