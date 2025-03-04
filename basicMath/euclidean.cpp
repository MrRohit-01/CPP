#include<bits/stdc++.h>
using namespace std;

void AllDivision(){
    int a,b;
  cin>>a>>b;
  while(a>0 && b>0 ){
    if(a>b)a=a%b;
    else b=b%a;
  }
  if(a==0) cout<<b<<endl;
  else cout<<a<<endl;
}
    

int main(){
    AllDivision();
    return 0;
} 