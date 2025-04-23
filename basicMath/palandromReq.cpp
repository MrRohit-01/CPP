#include<bits/stdc++.h>
using namespace std;

void sumValue(int n,int sum){
    if(n == 0){
        cout<<sum;
        return;
    }
    sumValue(n-1,sum+n);
}

int main(){
    int n;
    cin>>n;
    sumValue(n,0);
    return 0;
}