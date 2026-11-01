#include "Queue.h"
#include <iostream>

//function that prints all the elements in a queue
//input: the queue
//output: none
void printQueue(Queue* q)
{
    //go over the queue and print it
    for (int i = 0; i < q->CurrentAmount; i++)
    {
        std::cout << q->Values[i] << " ";
    }
    std::cout << std::endl;
}

//function that initialzes a new queue
//input: the queue to initialze and its size
//output: none
void initQueue(Queue* q, unsigned int size)
{
    q->Capacity = size;
    q->CurrentAmount = 0;
    q->Values = new unsigned int[size]; 
}

//function that 
void cleanQueue(Queue* q)
{
    delete[] q->Values;
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

//function that removes the first element that was entered
//input: the queue
//output: the element that was removed
int dequeue(Queue* q)
{
    //if empty nothing to remove
    if (isEmpty(q))
    {
        std::cout << "Queue is empty cant remove anything\n";
        return -1;
    }
    //get the element to remove
    unsigned int first = q->Values[0];

    //go over the queue and move each one backwards to make space in the last spot
    for (int i = 0; i < q->CurrentAmount - 1; i++)
    {
        q->Values[i] = q->Values[i + 1];
    }
    
    q->CurrentAmount--;
    return first;
}

//function that checks if a queue is empty
//inuput: the queue
//output: if empty or not(true/false)
bool isEmpty(Queue* s)
{
    if (s->CurrentAmount == 0)
    {
        return true;
    }
    return false;
}

//function that checks if a queue is full
//inuput: the queue
//output: if full or not(true/false)
bool isFull(Queue* s)
{
    return s->CurrentAmount == s->Capacity;
}