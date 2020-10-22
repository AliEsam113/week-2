#include <stdio.h>
#include "stack.h"
int main() {
    stack s;
    stackentry e;
    printf("Enter the positive prime number \n");
    scanf("%d",&e);
    initialize(&s);

    int count;
    for(count=2;e>1;count++){
        while(e % count==0){
            push(count,&s);
            e=e/count;
        }
    }
    traverseStack(&s,&display);
    return 0;
}

void display(stackentry e)
{
    printf("e is %d \n",e);
}

