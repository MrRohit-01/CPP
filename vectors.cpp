#include<bits/stdc++.h>
using namespace std;

void vectors(){
    vector<int> v={1,2,3,4,5};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
   
    v.push_back(6);
    v.emplace_back(7);

    vector<pair<int,int>> vp = {{1,2},{3,4},{5,6}};

    vp.push_back({7,8});
    vp.emplace_back(9,10);

    for(int i=0;i<vp.size();i++){
        cout<<"{"<<vp[i].first<<" "<<vp[i].second<<"} ";
    }
}

int main(){
    vectors();
    return 0;
}