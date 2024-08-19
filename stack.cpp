#include <bits/stdc++.h>
using namespace std;
int main(){
    stack<int>bou;
    bou.push(1);
    bou.push(2);
    bou.push(3);
    bou.push(4);
    bou.push(5);
    bou.push(6);
while(!bou.empty()){
    cout<<bou.top()<<" ";
    bou.pop();
}
}
