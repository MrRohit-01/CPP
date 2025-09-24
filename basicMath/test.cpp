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
    
    int m;
    cin >> m;
    for(int i = 0; i < n; i++){
        hasharr[arr[i] - 'A']++;
    }
    char character;
    while(m--){
        cin >> character;
        cout << character << ":"<< hasharr[character - 'A'] << " ";
    }
    return 0;
}