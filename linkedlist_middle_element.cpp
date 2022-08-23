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
void middleElement(node *&head)
{
    node *slow = head;
    node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout << slow->data;
}
void insertAtHead(node* &head, int val)
{
    node *n = new node(val);
    node *temp = head;
    n->next = head;
    head = n;
}
void print(node* &head){
    node *temp = head;
    while (temp != NULL){
        cout << temp->data <<" ";
        temp = temp->next;
    }
}
int main()
{
    node *head = new node(5);
    insertAtHead(head, 6);
    insertAtHead(head, 7);
    insertAtHead(head, 8);
    insertAtHead(head, 9);
    print(head);
    middleElement(head);
}