#include<bits/stdc++.h>
using namespace std;

void printPairs()
{
    pair<int, int> p = {1, 4};
    cout << p.first << " " << p.second << endl;
}

void printArray(){
  pair<int,int> arr[]={ {1,2}, {3,4}, {5,6} };
  for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
    cout<<arr[i].first<<" "<<arr[i].second<<endl;
  }
}

int main()
{
    printPairs();
    printArray();
    return 0;
    
}