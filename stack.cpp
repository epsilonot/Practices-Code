#include <bits/stdc++.h>
using namespace std;
int main(){
    stack<int>pstu;
    pstu.push(1);
    pstu.push(2);
    pstu.push(3);
    pstu.push(4);
    pstu.push(5);
    pstu.push(6);
while(!pstu.empty()){
    cout<<pstu.top()<<" ";
    pstu.pop();
}
}
