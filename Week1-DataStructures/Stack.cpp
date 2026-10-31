#include "Stack.h"
#include "LinkedList.h"
#include <iostream>

void push(Stack* s, unsigned int element)
{
	LinkedListNode* Curr = s->StackList;
	while(Curr->next != NULL)
	{
		Curr = Curr->next;
	}
	Curr->next->Value = element;
}
int pop(Stack* s)
{
	if (isEmpty(s))
	{
		return -1;
	}
	LinkedListNode* Curr = s->StackList;
	LinkedListNode* PerviousNode = NULL;
	while (Curr->next!= NULL)
	{
		PerviousNode = Curr;
		Curr = Curr->next;
	}
	PerviousNode->next = NULL;

	return Curr->Value;

}

void initStack(Stack* s)
{
	s->StackList->next = NULL;
	
}
void cleanStack(Stack* s)
{
	delete[] s->StackList;
}

bool isEmpty(Stack* s)
{
	if (s->StackList == NULL)
	{
		return true;
	}
	return false;

}