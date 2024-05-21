#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int w[5][5],q[5][5];
    for(int i=1;i<5;i++){
        for(int j=1;j<5;j++){
            w[i][j]=0;
        }
    }
    w[1][1]=7;
    w[2][1]=7;
    w[4][1]=4;
    w[1][2]=5;
    w[3][2]=3;
    w[4][3]=1;
    w[2][4]=2;
    cout<<"Waighted Matrix of Graph G is: \n";
    for(int i=1;i<5;i++){
        cout<<"\n";
        for(int j=1;j<5;j++){
            cout<<w[i][j]<<" ";
        }
    }
    for(int i=1;i<5;i++){
        for(int j=1;j<5;j++){
            if(w[i][j]==0)
                q[i][j]=9999;
            else
                q[i][j]=w[i][j];
        }
    }

    for(int k=1;k<5;k++){
        for(int i=1;i<5;i++){
            for(int j=1;j<5;j++){
                q[i][j]=min(q[i][j],q[i][k]+q[k][j]);
            }
        }
    }
    cout<<"Matrix Q containing the shortest path is: \n";
    for(int i=1;i<5;i++){
        cout<<"\n";
        for(int j=1;j<5;j++){
            cout<<q[i][j]<<" ";
        }
    }
}
