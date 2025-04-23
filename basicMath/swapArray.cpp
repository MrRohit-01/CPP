#include<bits/stdc++.h>
using namespace std;

void swapArray(int m,int arr[],int y){
if(m>=y/2){
    return;
}
swap(arr[m],arr[y-m-1]);
swapArray(m+1,arr, y);

}

int main(){
    int y;
    cin>>y;
    int n[y];
    for(int i=0;i<y;i++)cin>>n[i];
    swapArray(0,n,y);
    for(int i=0;i<y;i++)cout<<n[i]<<" ";
    return 0;
}