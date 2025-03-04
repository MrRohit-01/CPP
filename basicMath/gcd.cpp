#include<bits/stdc++.h>
using namespace std;

void AllDivision(){
    int n,m;
   
    cin>>n>>m;
    for(int i = min(n,m); i >= 1 ;i--){
       if(n%i==0 && m%i ==0){
        cout<<i;
        break;
       }
    }
 }
    

int main(){
    AllDivision();
    return 0;
} 