#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int data;
    Stack *next;

    Stack(int data){
        this->data = data;
               
    }

    void push(Stack* &head, int val){
        Stack* n = new Stack(val);
        Stack* temp = head;
        n->next = temp;
        head=n;
    }
    void pop(){
        Stack* temp;

    }
};
int main(){
    Stack* head = new Stack(1);
}