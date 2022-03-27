#include <iostream>
#include<stdlib.h>
#define CAPACITY 5
using namespace std;
int stack[CAPACITY], top = -1;
void push(int);
int pop();
int isFull();
int isEmpty();
void peek();
void traverse();
int main()
{
    int ch, item;
    while(1)
    {
       cout<<"1. PUSH\n\n";
       cout<<"2. POP\n\n";
       cout<<"3. PEEK\n\n";
       cout<<"4. TRAVERSE\n\n";
       cout<<"5. QUIT\n\n";
       cout<<"Enter your choice: ";
       cin>>ch;

       switch(ch)
       {
            case 1:
                cout<<"Enter the element value to be pushed: ";
                cin>>item;
                push(item);
                break;
            case 2:
                item = pop();
                if(item==0)
                {
                    cout<<"Stack is underflow"<<endl;
                }
                else
                {
                    cout<<"Poped item is: "<<item<<endl;
                }
                break;
            case 3:
                peek();
                break;
            case 4:
                traverse();
                break;
            case 5:
                exit(0);
                break;
            default:
                cout<<"Invalid Choice"<<endl;
       }
    }

    return 0;
}

void push(int ele)
{
       if(isFull())
       {
           cout<<"Stack is overflow"<<endl;
       }
       else
       {
           top++;
           stack[top]=ele;
           cout<<"element pushed is: "<<ele<<endl;
       }
}
int isFull()
{
        if(top==CAPACITY-1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
}
int pop()
{
    if(isEmpty())
    {
        return 0;
    }
    else
    {
        return stack[top--];
    }
}
int isEmpty()
{
    if(top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

void peek()
{
    if(isEmpty())
    {
        cout<<"Stack is Empty. "<<endl;
    }
    else
    {
        cout<<"peek element is: "<<stack[top]<<endl;
    }
}

void traverse()
{
    if(isEmpty())
    {
        cout<<"Stack is Empty\n";
    }
    else
    {
        int i;
        cout<<"Stack elements are:\n";
        for(i=0; i<=top; i++)
        {
            cout<<stack[i]<<endl;
        }
    }

}
