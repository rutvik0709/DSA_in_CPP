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

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    node *temp = head;
    n->next = head;
    head = n;
}
void insertAtMiddle(node *&head, int val)
{
    node *n = new node(val);
    node *temp = head;
    while (temp->data != 3)
    {
        temp = temp->next;
    }
    n->next = temp->next;
    temp->next = n;
}
void search(node *&head, int val)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == val)
        {
            cout << "Element found";
        }
        temp = temp->next;
    }
    cout << endl;
}
void deleteAtHead(node *&head)
{
    node *temp = head;
    head = head->next;
    delete temp;
}
void deleteNode(node *head, int val)
{
    node *temp = head;

    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}
void deleteNthNode(node *&head, int counter)
{
    int c = 1;
    node *temp = head;
    while (temp->next != NULL)
    {
        c = c + 1;
        temp = temp->next;
    }
    int a = c - counter;
    for (int i = 1; i < c-counter; i++)
    {
        temp = temp->next;
    }

    node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}
void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void deleteWithoutHead(node *n)
{
    n->data = n->next->data;
    n->next = n->next->next;
}
int main()
{
    node *head = new node(5);
    // insertAtTail(head, 1);
    // insertAtTail(head, 2);
    // insertAtTail(head, 3);
    insertAtHead(head, 1);
    insertAtHead(head, 3);
    insertAtHead(head, 2);
    print(head);
    search(head, 4);
    insertAtMiddle(head, 6);
    print(head);
    // deleteNode(head, 3);
    // print(head);
    // deleteAtHead(head);
    // print(head);
    // node *n= head->next->next;
    // deleteWithoutHead(n);
    // print(head);
    deleteNthNode(head, 4);
    print(head);
}