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
void traverseStack(stack *ps,void(*pf)(stackentry))
{
    int i;
    for(i=ps->top;i>0;i--){
        (*pf)(ps->entry[i-1]);
    }
}