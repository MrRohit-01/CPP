#include<bits/stdc++.h>
using namespace std;

void PrintNo(int n){
    
    n++;
    if(n>100){
        return;
    }
    PrintNo(n);
    cout<<n<<endl;
}

int main(){
    int n;
    cin>>n;
    PrintNo(n);
}