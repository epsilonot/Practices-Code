#include<bits/stdc++.h>

using namespace std;

int main(){
	int t,i,q;
	cin>>t;
	int b[t];
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		if(a[0]==a[1]){
			q=a[0];
		}
		else q=a[2];
		for(i=0;i<n;i++){
			if(a[i]!=q){
				printf("%d\n",i+1);

			}
		}
}


	return 0;
}



