#include<bits/stdc++.h>
using namespace std;

void print(int count){
    
if(count == 3){
    return;
}
    cout<<count<<endl;
    count++;
    print(count);
}
    

int main(){
    int count=0;
   print(count);
    return 0;
} 