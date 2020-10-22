#ifndef UNTITLED4_STACK_H
#define UNTITLED4_STACK_H
#include <stdlib.h>
#include <stdio.h>
#define MAX_STACK 100

typedef int stackentry;
typedef struct stackNode{
    stackentry entry;
    struct stackNode *next;
}stacknode;
typedef struct Stack{
    stacknode *top;
    int size;

} stack;
void occur(stackentry,stack *);
void push(stackentry,stack *);
void pop(stackentry *,stack *);
int stackFull(stack *);
int stackEmpty(stack *);
void createStack(stack *);
void stackTop(stackentry *,stack *);
int stackSize(stack *);
void clearStack(stack *);
void traverseStack(stack *,void(*)(stackentry));
void display(stackentry e);

#endif
