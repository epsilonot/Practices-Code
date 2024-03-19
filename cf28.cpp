#include<bits/stdc++.h>

using namespace std;

int t,n,a[50],i,coun=0;
int main()
{
  cin >> t;
  while(t--){
    coun=1;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n-1;i++){
      if(a[i+1]-a[i]<=1)
            coun++;
    }
    if(coun==n)
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
}
