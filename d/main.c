#include <stdio.h>
#include "stack.h"
int main() {
    stack s,n;
    stackentry e,x;
    initialize(&s);
    initialize(&n);
    printf("Enter the number u want to delete from stack \n");
    scanf("%d",&x);

    if(!Full(&s)){
        push(1,&s);
        push(5,&s);
        push(1,&s);
        push(5,&s);
        push(1,&s);
        push(5,&s);
        push(1,&s);
        push(5,&s);
        push(1,&s);
        push(5,&s);
        push(1,&s);
    }
    while(!Empty(&s)) {
        pop(&e, &s);
        if(e!=x){
            push(e,&n);
        }
    }
    clear(&s);
    while (!Empty(&n)){
        pop(&e,&n);
        push(e,&s);
    }
    traverseStack(&s,&display);
    return 0;
}

void display(stackentry e)
{
    printf("e is %d \n",e);
}

