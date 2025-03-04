#include<bits/stdc++.h>
using namespace std;

void AllDivision(){
    int n,count=0;
    cin>>n;
    for(int i = 1; i <= sqrt(n);i++){
        if(n%i==0){
    count++;
        }
 }
if(count == 1){
    cout<<"Prime"<<" ";
}
    else{
        cout<<"Not prime"<< " ";
    }
}
    

int main(){
    AllDivision();
    return 0;
} 