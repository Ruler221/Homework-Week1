#include "Utils.h"
#include "Stack.h"
#include <iostream>

void reverse(int* nums, unsigned int size)
{
    Stack s;
    //create new stack
    initStack(&s);


    //push all elements from the array into the stack
    for (int i = 0; i < size; i++)
    {
        push(&s, nums[i]);
    }

    //pop them back into the array (lifo so it will come out in reverse order)
    for (int i = 0; i < size; i++)
    {
        nums[i] = pop(&s);
    }

    //delete the stack
    cleanStack(&s);
}

int* reverse10()
{

}