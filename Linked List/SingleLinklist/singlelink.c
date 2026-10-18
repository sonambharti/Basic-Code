#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

typedef struct node
{
	int data;
	struct node *next;
}node;

node *createLinkedlist(int n);

void displayList(node *head);

void deleteNode(node *head, int pos);

int main()
{
	int n=0, pos;
	node*head=NULL;
	printf("\n Enter the number of nodes:");
	scanf("%d",&n);
	head=createLinkedlist(n);
	printf("\n The created linkedlist is:\n");
	displayList(head);
	deleteNode(head, pos);
	printf("\n The updated list after deletion:");
	displayList(head);
	return 0;
}

node * createLinkedlist(int n)
{
	int i=0;
	node *head=NULL;
	node *temp=NULL;
	node *p=NULL;

	for(i=0;i<n;i++)
	{
		// to create individual isolated node

		temp= (node*)malloc(sizeof(node));
		printf("\n Enter the data for node number %d:", i+1);
		scanf("%d",&(temp->data));
		temp->next=NULL;

		if(head==NULL)  // if list is empty then make temp as first node
		{
			head=temp;
		}
		else
		{
			p=head;
			while(p->next!=NULL)
			  p=p->next;
			p->next=temp;
		}
	}
	return head;
}

void displayList(node *head)
{
	node *p=head;
	while(p!=NULL)
	{
		printf("\t%d",p->data);
		p=p->next;
	}
}

void deleteNode(node *head, int pos)
{
	node *ptr=head;
	int keydata;
	printf("\n Choose a data from above list to delete:");
	scanf("%d", &keydata);
	pos=0;
	while(ptr->data!=keydata)
	{
	   pos++;
	   ptr=ptr->next;
	}
	node *temp, *prev;
	temp=prev=head;
	int i=0;
	for(i=0;i<pos-1;i++)
	{
		prev=prev->next;
	}
	temp=prev->next;
	prev->next=temp->next;
	free(temp);
}
