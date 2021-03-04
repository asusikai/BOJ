#include "header.h"

int _top = -1;

int IsFull()
{
    if(_top == SIZE)
    {
        return 1;
    }

    else if(_top < SIZE)
    {
        return 0;
    }
}

int IsEmpty()
{
    if(_top == -1)
    {
        return 1;
    }

    else if(_top >-1)
    {
        return 0;
    }
}

void _push(int m)
{
    if(!IsFull())
    {
        stack[++_top] = m;
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
        return stack[_top--];
    }

    else
    {
        printf("stack is empty.\n");
    }
}