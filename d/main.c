#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
int main()
{

    stackentry e;
    stack s;
    stack n;
    createStack(&s);
    createStack(&n);

    if(!stackFull(&s)) {
            push(1, &s);
            push(2, &s);
            push(1, &s);
            push(4, &s);
            push(1, &s);
            push(6, &s);
            push(1, &s);
            push(8, &s);
            push(1, &s);
    }
    occur(1,&s);
    traverseStack(&s,&display);

    return 0;
}
void display(stackentry e)
{
    printf("e is %d \n",e);
}
