
#include "stack.h"

void initialize(stack *ptr)
{
    ptr->top=0;
}
void push(stackentry item,stack *ptr)
{
    ptr->entry[ptr->top++]=item;
}
int Full(stack *ptr)
{
    if (ptr->top == MAX_STACK)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void pop(stackentry *pitem,stack *ptr)
{
    *pitem=ptr->entry[--ptr->top];
}
int Empty(stack *ptr)
{
    if(ptr->top==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void stackTop(stackentry *pitem,stack *ptr)
{
    *pitem=ptr->entry[ptr->top-1];
}
int stackSize(stack *ptr)
{
    return ptr->top;
}
void clearStack(stack *ptr)
{
    ptr->top=0;
}
