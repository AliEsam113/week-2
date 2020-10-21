#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
int main()
{

    stackentry item;
    stack s;

    initialize(&s);

    if(!Full(&s))
    {

        push(5,&s);
        push(10,&s);
        push(15,&s);
    }
    if(!Empty(&s)){
        if(exist(&s)){
            stack3rd(&item,&s);
            printf("the third element from the top  is :%d \n",item);
        }
    }
    return 0;
}
