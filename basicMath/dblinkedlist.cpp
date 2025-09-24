#include<bits/stdc++.h>
using namespace std;
template<typename T>
struct dbNode{
public:
    dbNode<T>* prev;
    T data;
    dbNode<T>* next;

    dbNode( dbNode<T>* prev,T data,dbNode<T>* next)
    : prev(prev), data(data),next(next){}
    dbNode(T data): prev(nullptr),data(data),next(nullptr){}

    dbNode(dbNode<T>* prev,T data): prev(prev),data(data),next(nullptr){}

};
template<typename T>
dbNode<T>* addNode(vector<T> arr){
    dbNode<T>* dummy= new dbNode<T>(T{});
    dbNode<T>* temp = dummy;
    for(int i =0;i<arr.size();i++){
        dbNode<T>* mover = new dbNode<T>(temp,arr[i]);
        temp->next = mover;
        temp = mover;
    }
    return dummy->next;
}

template<typename T>
dbNode<T>* deleteNode(dbNode<T>* head,int index){
    dbNode<T>* temp = head;
    if(index ==0){
        temp=head->next;
        temp->prev = nullptr;
        delete head; 
        return temp;
    }
    int count =1;
    dbNode<T>* mover =temp->next;
    while(mover){
        if(count == index){
            temp = mover; 
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            delete temp;
            return head;

        }
        mover = mover->next;
        count++;

    }
    return head;
}



int main(){
    vector<int> arr ={1,3,4,6,8,6,4 ,2, 5, 7};
    dbNode<int>* head = addNode(arr);
        head = deleteNode(head, 5);
        dbNode<int>* temp = head;
while(temp){
    cout<<temp->data<<" ";
    // cout<<"done"<<endl; 
    temp = temp->next;
};
return 0;
}
