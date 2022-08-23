#include <bits/stdc++.h>
using namespace std;
class Stack
{
public:
    int *arr;
    int size;
    int top;

    Stack(int size)
    {
        this->size = size;
        top = -1;
        arr = new int[size];
    }
    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "STACK OVERFLOW";
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "STACK UNDERFLOW";
        }
    }
    int peek()
    {
        if (top >= 0 && top < size)
        {
            return arr[top];
        }
        else
        {
            cout << "STACK IS EMPTY";
            return -1;
        }
    }
    bool isEmpty()
    {
        if (top = -1)
        {
            // cout << "STACK IS EMPTY";
            return true;
        }
        else
        {
            // cout << "STACK IS NOT EMPTY";
            return false;
        }
    }
};
int main()
{
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);


    cout<<st.peek();
    st.pop();
    cout<<st.peek();
    cout<<st.isEmpty();
}
