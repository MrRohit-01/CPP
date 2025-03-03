#include<bits/stdc++.h>
using namespace std;

void ReverseNumber(){
    int n,rev=0;
    cin>>n;
    int dup = n;
    while(n>0){
        int lastDigit = n%10;
        rev =rev*10 + lastDigit;
        n=n/10;
    }
    if(rev == dup) cout<<"True";
    else cout<<"False";
}


int main(){
    ReverseNumber();
    return 0;
}