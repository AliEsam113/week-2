#include "stack.h"
#include <stdlib.h>
void createStack(stack *ps)
{
    ps->top=NULL;
    ps->size=0;
}
void push(stackentry e,stack *ps)
{
    stacknode *pn=(stacknode*)malloc(sizeof(stacknode));
    pn->entry=e;
    pn->next=ps->top;
    ps->top=pn;
    ps->size++;
}
int stackFull(stack *ps)
{
        return 0;
}
void pop(stackentry *pe,stack *ps)
{
    *pe=ps->top->entry;
    stacknode *pn=ps->top;
    ps->top=ps->top->next;
    free(pn);
    ps->size--;
}
int stackEmpty(stack *ps)
{
    return ps->top==NULL;
}
void stackTop(stackentry *pe,stack *ps)
{
    *pe=ps->top->entry;
}
int stackSize(stack *ps)
{

    return ps->size;
}
void clearStack(stack *ps)
{
    stacknode *pn=ps->top;
    while(pn){
        pn=pn->next;
        free(ps->top);
        ps->top=pn;
    }
}
void traverseStack(stack *ps,void(*pf)(stackentry))
{
    stacknode *pn=ps->top;
    while(pn){
        (*pf)(pn->entry);
        pn=pn->next;
    }
}
void occur(stackentry e,stack *ps) {
    stacknode *pn = ps->top;
    while (pn) {
        if (e == ps->top->entry) {
            pn=pn->next;
            free(ps->top);
            ps->top=pn;
        }
        else {
            pn=pn->next;
        }
    }
}
