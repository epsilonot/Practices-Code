#include<bits/stdc++.h>
using namespace std;
int main(){
    int INFO[12];
    int LINK[12];
    int start=9;
    int ptr=start;
    INFO[3]= 15;
    INFO[4]= 20;
    INFO[6]= 32;
    INFO[7]= 56;
    INFO[9]= 33;
    INFO[10]= 86;
    INFO[11]= 17;

    //input the link array

    LINK[3]=6;
    LINK[4]=0;
    LINK[6]=11;
    LINK[7]=10;
    LINK[9]=3;
    LINK[10]=4;
    LINK[11]=7;

    cout<<"Initaial LIST : \n";
    while(ptr!=-1){
        cout<<INFO[ptr]<<"\t";
        ptr=LINK[ptr];
    }
}
