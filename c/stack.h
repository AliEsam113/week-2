#ifndef UNTITLED4_STACK_H
#define UNTITLED4_STACK_H
#include <stdlib.h>
#include <stdio.h>
#define MAX_STACK 100

typedef int stackentry;
typedef struct Stack
{
    int top;
    stackentry entry[MAX_STACK];
} stack;

void push(stackentry,stack *);
void pop(stackentry *,stack *);
int Full(stack *);
int Empty(stack *);
void Initialize(stack *);
void stackBottom(stackentry *,stack *);
int stackSize(stack *);
void clearStack(stack *);


#endif