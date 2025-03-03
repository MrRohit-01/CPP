#include<bits/stdc++.h>
using namespace std;

void iteratorVector(){
    vector<int> v={1,2,3,4,5};
    vector<int>::reverse_iterator it = v.rbegin();
    // it--;
    cout<<*it<<endl;
    for(auto it:v){
        cout<<it<<" ";
    };
}

int main(){
    iteratorVector();
    return 0;
}