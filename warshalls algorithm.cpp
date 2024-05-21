#include <bits/stdc++.h>
using namespace std;
int AND(int a,int b);
int OR (int a,int b);
int main()
{
    int adj[5][5],path[5][5];
    int i,j;
    for(int i=1; i<=4; i++)
    {
        for(int j=1; j<=4; j++)
        {
            adj[i][j]=0;
        }
    }
    adj[2][1]=1;
    adj[3][1]=1;
    adj[2][3]=1;
    adj[4][3]=1;
    adj[1][4]=1;
    adj[2][4]=1;
    adj[3][4]=1;
    cout<<"Adjacency Matrix of Graph G is \n \n";
    for(int i=1; i<=4; i++)
    {
        cout<<"\n";
        for(int j=1; j<=4; j++)
        {
            cout<<adj[i][j];
        }
    }
    for(int i=1; i<=4; i++)
    {
        for(int j=1; j<=4; j++)
        {
            if(adj[i][j]==0)
                path[i][j]=0;
            else
                path[i][j]=1;
        }
    }
    for(int k=1; k<=4; k++)
    {
        for(int i=1; i<=4; i++)
        {
            for(int j=1; j<=4; j++)
            {
                path[i][j]=OR(AND((path[i][j]),path[i][k] ),path[k][j]);
            }
        }
    }
    cout<<"\n\n Path Matrix of Graph G is : \n\n";
    for(int i=1; i<=4; i++)
    {
        cout<<"\n";
        for(int j=1; j<=4; j++)
        {
            cout<<path[i][j];
        }
    }

}
int AND (int a,int b)
{
    if(a==1 && b==1)
        return(1);
    else
        return(0);
}
int OR (int a,int b)
{
    if(a==0 && b==0)
        return(0);
    else
        return(1);
}
