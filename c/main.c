#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
int main()
{

    stackentry item;
    stack s;

    Initialize(&s);

    if(!Full(&s))
    {
        
        push(5,&s);
        push(10,&s);
        push(15,&s);
    }
    if(!Empty(&s)){

            stackBottom(&item,&s);
            printf("the bottom  is :%d \n",item);

    }
    return 0;
}