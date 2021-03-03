#include "header.h"

int IsFull()
{
    if(top == SIZE)
    {
        return 1;
    }

    else if(top < SIZE)
    {
        return 0;
    }
}

int IsEmpty()
{
    if(top == -1)
    {
        return 1;
    }

    else if(top >-1)
    {
        return 0;
    }
}

void push(int n)
{
    if(!IsFull())
    {
        stack[++top] = n;
    }

    else
    {
        printf("stack is full.\n");
    }
}

int pop()
{
    if(!IsEmpty())
    {
        return stack[top--];
    }

    else
    {
        printf("stack is empty.\n");
    }
}