/******************************************************************************
// Linklist

Implement Linklist

*******************************************************************************/
#include <iostream>
using namespace std;

class ListNode {
    public:
        int data;
        ListNode *next;
    ListNode(int val){
        data = val;
        next = nullptr;
    }
};

void printNode(ListNode *node){
    if(node != nullptr){
        while(node != nullptr){
            cout<<node->data<<" -> ";
            node = node->next;
        }
    }
    cout<<"NULL";
}

int main()
{
    ListNode *node;
    node = new ListNode(1);
    node->next = new ListNode(2);
    node->next->next = new ListNode(3);
    node->next->next->next = new ListNode(4);
    node->next->next->next->next = new ListNode(5);
    printNode(node);

    return 0;
}
