#include<bits/stdc++.h>
using namespace std;

int hasharr[26] = {0};
int main(){
    int n;
    cin >> n;
   char arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    for(int i = 0; i <= n-2; i++){
       int min= i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[min]){
                min =j;
            }
        }
        swap(arr[i],arr[min]);

    }
    for(auto it:arr){
        cout<<it;
    }
   
}