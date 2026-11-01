#include "LinkedList.h"
#include <iostream>


//function that prints the elements in the list
//input: the head of the linked list
//output: none
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

//function that creates a new node
//input: the value in that node
//output: the new node
LinkedListNode* createNode(int val)
{
    LinkedListNode* newNode = new LinkedListNode;
    if (newNode != NULL)
    {
        newNode->Value = val;
        newNode->next = NULL;
    }
    return newNode;
}