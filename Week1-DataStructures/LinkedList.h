#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct LinkedListNode
{
	int Value;
	ListNode* next;
}ListNode;


void printList(LinkedListNode* head);
LinkedListNode* createNode(int val);



#endif /* LINKEDLIST_H */