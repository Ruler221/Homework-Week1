#include "Queue.h"
#include <iostream>

void printQueue(Queue* q)
{
    for (int i = 0; i < q->CurrentAmount; i++)
    {
        std::cout << q->Values[i] << " ";
    }
    std::cout << std::endl;
}

void initQueue(Queue* q, unsigned int size)
{
    q->Capacity = size;
    q->CurrentAmount = 0;
    q->Values = new unsigned int[size]; 
}

void cleanQueue(Queue* q)
{
    delete[] q->Values;
    q->Values = nullptr;
}

void enqueue(Queue* q, unsigned int newValue)
{
    if (isFull(q))
    {
        std::cout << "queue is full cant add more\n";
    }
    else
    {
        q->Values[q->CurrentAmount] = newValue;
        q->CurrentAmount++;
    }
}

int dequeue(Queue* q)
{
    if (isEmpty(q))
    {
        std::cout << "Queue is empty cant remove anything\n";
        return -1;
    }
    unsigned int first = q->Values[0];

    for (int i = 0; i < q->CurrentAmount - 1; i++)
    {
        q->Values[i] = q->Values[i + 1];
    }
    q->CurrentAmount--;
    return static_cast<int>(first);
}

bool isEmpty(Queue* s)
{
    return s->CurrentAmount == 0;
}

bool isFull(Queue* s)
{
    return s->CurrentAmount == s->Capacity;
}