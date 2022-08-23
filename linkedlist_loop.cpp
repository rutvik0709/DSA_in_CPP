#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insertAtTail(node *&head,int val){
    node * n= new node(val);
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}
void print(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int loopDetect(node * head){
    node* fast = head;
    node* slow = head;
    while(fast->next != NULL && fast!= NULL){
        fast = fast->next->next;
        slow= slow->next;
        if(fast==slow){
            cout<<"Loop found";
            return 1;
        }
    }
    cout<<"Loop not found";
    return 0;
}
int main(){
    node* head = new node(1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    // head->next->next=head;
    loopDetect(head);

}