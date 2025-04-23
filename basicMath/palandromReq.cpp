#include<bits/stdc++.h>
using namespace std;

bool f(int i,string n,int len){
    if(i >= len/2){
        return true;
    }
    if(n[i]!=n[len-i-1]) return false;
   return f(i+1,n,len);
}

int main(){
    string n;
    cin>>n;
    int i=0;
    cout<< (f(i,n,n.length())?"True":"False");
    return 0;
}