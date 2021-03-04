#ifndef h
#define h

#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int stack[SIZE];


int IsFull();
int IsEmpty();
void _push(int m);
int pop();

#endif