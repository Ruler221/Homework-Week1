#include "Stack.h"
#include "LinkedList.h"
#include <iostream>

void initStack(Stack* s)
{
    //create new list
    s->StackList = NULL;
}

bool isEmpty(Stack* s)
{
    if (s->StackList == NULL)
    {
        return true;
    }
    return false;
}

void push(Stack* s, unsigned int element)
{
    //create new node with the new element 
    LinkedListNode* newNode = createNode(element);
    //add the new node to the stack
    if (newNode != NULL)
    {
        newNode->next = s->StackList;
        s->StackList = newNode;
    }
}

int pop(Stack* s)
{
    if (isEmpty(s))
    {
        return -1;
    }

    //get the first element
    LinkedListNode* temp = s->StackList;
    int val = temp->Value;

    //move head 1 step forward to remove the poped element
    s->StackList = s->StackList->next; 

    return val;
}

void cleanStack(Stack* s)
{
    delete[] s;
}