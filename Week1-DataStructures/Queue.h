#ifndef QUEUE_H
#define QUEUE_H

/* a queue contains positive integer values. */
typedef struct Queue
{
    int Capacity;
    int CurrentAmount;
    unsigned int* Values; 
} Queue;

void printQueue(Queue* q);

void initQueue(Queue* q, unsigned int size);
void cleanQueue(Queue* q);

void enqueue(Queue* q, unsigned int newValue);
int dequeue(Queue* q); // returns element, or -1 if empty

bool isEmpty(Queue* s);
bool isFull(Queue* s);

#endif /* QUEUE_H */