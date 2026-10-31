#include "LinkedList.h"
#include <iostream>

void printList(LinkedListNode* head)
{
    LinkedListNode* curr = head;
    while (curr != NULL)
    {
        printf("%d ", curr->Value);
        curr = curr->next;
    }
    printf("\n");
}

LinkedListNode* createNode(int val)
{
    LinkedListNode* newNode = new LinkedListNode[sizeof(LinkedListNode)];
    if (newNode != NULL)
    {
        newNode->Value = val;
        newNode->next = NULL;
    }
    return newNode;
}