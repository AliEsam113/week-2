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
void initialize(stack *);
void stack3rd(stackentry *,stack *);
int stackSize(stack *);
void clearStack(stack *);
void traverseStack(stack *,void(*)(stackentry));
void display(stackentry e);

#endif
