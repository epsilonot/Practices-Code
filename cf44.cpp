#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[5],sum=0;
	string s;
	for(int i=1;i<5;i++){
        cin>>a[i];
	}
	cin>>s;
	for(int i=0;i<s.size();i++){
		sum+=a[s[i]-'0'];
	}
	cout<<sum;
}
