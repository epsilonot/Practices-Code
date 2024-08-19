#include <bits/stdc++.h>
using namespace std;
void print_arr(int arr[20]);
int finda(int I);
int item;
int info[20];int link[20];
int start,avail;
int main(){
    int info[20],link[20];
    cout<<"list: \n";
    for(int i=0;i<20;i++){
        printf("INFO[%d] = ",i);
        cin>>info[i];
    }
    for(int i=0;i<20;i++){
        printf("LINK[%d] = ",i);
        cin>>link[i];
    }
    cout<<"\n Enter the item to be inserted: ";
    cin>>item;
    start=11,avail=15;
    int result=finda(item);
    //print_arr(info);
    //cout<<"\n";
    //print_arr(link);
}
void print_arr (int arr[20]){
    for(int i=0;i<20;i++){
        cout<<arr[i]<<" ";
    }
}
int finda(int I){
    int loc,save,po;
    if(start==-1){
        loc=start;
        return(loc);
    }
    if(I<)
}
