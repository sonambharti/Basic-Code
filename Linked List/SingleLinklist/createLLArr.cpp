/******************************************************************************
// Linklist

Implement Linklist from a given array.

*******************************************************************************/
#include <iostream>
#include <iterator>
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


ListNode *createLinkList(int arr[], int n){
    if (n<=0) return nullptr;
    
    ListNode *head = new ListNode(arr[0]);
    ListNode *node = head;
    int i=1;
    while(i < n){
        node->next = new ListNode(arr[i]);
        node = node->next;
        i++;
    }
    node->next = nullptr;
    
    return head;
}

void printLinklist(ListNode *node){
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
    int arr[] = {2, 4, 6, 8};
    int n = size(arr);
    ListNode *head = createLinkList(arr, n);
    printLinklist(head);

    return 0;
}
