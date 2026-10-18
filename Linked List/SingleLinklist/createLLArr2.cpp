/******************************************************************************
// Linklist

Implement Linklist from a dynamic array.

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
    int n;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    ListNode *head = createLinkList(arr, n);
    printLinklist(head);

    return 0;
}
