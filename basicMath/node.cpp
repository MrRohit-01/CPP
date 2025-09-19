#include<bits/stdc++.h>
using namespace std;
struct node {
public:
    int data;
    node* next;
public:
    node(int data1,node* next1){
        data = data1;
        next = next1;
    }

};
node* llFromArr(vector<int> arr){
node* head = new node(arr[0],nullptr);
node * mover = head;

for(int i =1; i<arr.size();i++){
    node* temp = new node(arr[i],nullptr);
    mover->next = temp;
    mover = temp;
}
return head;
}
int lengthLl(node* head){
    node* mover = head;
    int count =1;
    while(mover){
        mover = mover->next;
        count++;
    }
    return count;
}

int findInLl(node* head,int target){
    node* mover = head;
    int count =1;
    while(mover){
        if(mover->data==target)return true;
        mover = mover->next;
        count++;
    }
    return false;
}
int main(){
    vector<int> arr ={12,3,4,5};
    node* head = llFromArr(arr);
    node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    cout<<lengthLl(head)<<endl;
    cout<<findInLl(head,3)<<endl;
}
