#include<bits/stdc++.h>
using namespace std;

void ReverseNumber(){
    int n;
    cin>>n;
    for(int i = 1; i <= n;i++){
        
    if(n%i==0){
        cout<<i<<" ";
    }
 }
}


int main(){
    ReverseNumber();
    return 0;
}