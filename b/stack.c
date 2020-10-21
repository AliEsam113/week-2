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
void stack3rd(stackentry *pitem,stack *ptr)
{
    *pitem=ptr->entry[ptr->top-3];
}
int stackSize(stack *ptr)
{
    return ptr->top;
}
void clearStack(stack *ptr)
{
    ptr->top=0;
}
int exist(stack *ptr){
    if(ptr->top>=3){
        return 1;
    }
            else
    {
        return 0;
    }
}
