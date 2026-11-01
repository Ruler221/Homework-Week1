#include "Utils.h"
#include "Stack.h"
#include <iostream>


//function that reverses an array using a stack
//nums: an array of numbers
//size: the size of the array
//output: none
void reverse(int* nums, unsigned int size)
{
    //create new stack
    Stack s;
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

//function that reverses a 10 number array
//input: none
//output: the reversed array
int* reverse10()
{
    int* nums = new int[10];

    //ask the user for 10 numbers and put them into the array
    std::cout << "Please enter 10 integers:\n";
    for (int i = 0; i < 10; i++)
    {
        std::cin >> nums[i];
    }

    //reverse the array
    reverse(nums, 10);

    return nums;
}