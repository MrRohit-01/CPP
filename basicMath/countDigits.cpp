#include<bits/stdc++.h>
using namespace std;

void Basicmath(){
    int n,count=0;
    cin>>n;
   while(n>0){
       n=n/10;
    count++;
}
cout<<count;
}

int main(){
 Basicmath();
 return 0;
}