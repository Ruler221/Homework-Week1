#include "Queue.h"
#include <iostream>

void printQueue(Queue* q)
{
	for (int i = 0; i < q->CurrentAmout;i++)
	{
		std::cout << q->Values[i] << " ";
	}
}

void initQueue(Queue* q, unsigned int size)
{
	q->Capacity = size;
	q->CurrentAmout = 0;
	q->Values = new int[size];

}
void cleanQueue(Queue* q)
{
	delete[] q->Values;
}


void enqueue(Queue* q, unsigned int newValue)
{
	if (isFull(q))
	{
		std::cout << "queue is full cant add more";
	}
	else
	{
		q->Values[q->CurrentAmout] = newValue;
		q->CurrentAmout++;
	}
}


int dequeue(Queue* q)
{
	if (isEmpty(q))
	{
		std::cout << "Queue is empty cant remove anything";
		return -1;
	}
	int first = q->Values[0];

	for (int i = 0; i < q->CurrentAmout - 1; i++)
	{
		q->Values[i] = q->Values[i + 1];
	}
	q->CurrentAmout--;
	return first;
}

bool isEmpty(Queue* s)
{
	if(s->CurrentAmout == 0)
	{
		return true;
	}
	return false;
}

bool isFull(Queue* s)
{
	if (s->CurrentAmout == s->Capacity)
	{
		return true;
	}
	return false;
}