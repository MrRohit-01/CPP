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
    int count =0;
    while(mover){
        count++;
        mover = mover->next;
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


node* deleteInLl(node* head,int targetIndex){
    if(targetIndex ==0){
        node* temp = head;
        head=head->next;
        delete temp;
        return head;
    }
    node* mover = head;
    int count =0;
    while(mover){

        count++;
        if(count==targetIndex && mover->next){
            node* temp = mover->next;
            mover->next = mover->next->next;
            delete temp;
            break;
        }
        mover = mover->next;
    }
 
    return head;
}

node* insertInLl(node* head, int value, int targetIndex){
    if(targetIndex ==0){
        node* temp = new node(value,head);
        return temp;
    }
    node* mover = head;
    int count =1;
    while(mover){

        if(count==targetIndex){
            node* temp = new node(value,mover->next);
            mover->next = temp;
        }
        mover = mover->next;
        count++;
    }
    return head;
}

int main(){
    vector<int> arr ={12,3,4,5};
    node* head = llFromArr(arr);
    head = deleteInLl(head,3);
    head = insertInLl(head,44,2);
    node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    cout<<lengthLl(head)<<endl;
    cout<<findInLl(head,3)<<endl;
}
