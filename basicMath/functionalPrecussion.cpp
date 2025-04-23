#include<bits/stdc++.h>
using namespace std;

int Value(int n){
    if(n == 0){
        return 1;
    }
    return n * Value(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<Value(n);
    return 0;
}