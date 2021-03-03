#ifndef header
#define header

#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int stack[SIZE] ={0, };
int top = -1;

int IsFull();
int IsEmpty();
void push(int n);
int pop();

#endif