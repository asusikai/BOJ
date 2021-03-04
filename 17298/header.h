#ifndef header
#define header

#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int stack[SIZE];
int top = -1;

void IsFull();
void IsEmpty();
void push();
void pop();

#endif