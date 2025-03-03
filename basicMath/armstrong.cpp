#include<bits/stdc++.h>
using namespace std;

void ReverseNumber(){
    int n,rev=0;
    cin>>n;
    int dup = n;
    while(n>0){
        int lastDigit = n%10;
        rev =rev + pow(lastDigit, 3);
        n=n/10;
        
    }
    if(rev == dup) cout<<"This Number is a Armstrong Number";
    else cout<<"This Number is Not a Armstrong Number";

}


int main(){
    ReverseNumber();
    return 0;
}