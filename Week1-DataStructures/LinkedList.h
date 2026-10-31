#ifndef QUEUE_H
#define QUEUE_H

typedef struct LinkedListNode
{
	int Value;
	ListNode* next;
}ListNode;

void printList(LinkedListNode* head);
LinkedListNode* createNode(int val);



#endif /* QUEUE_H */