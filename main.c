
#include <stdio.h>
#include "stack.h"


int main() {
    Stack* stack = createStack();


    printf("Push 7\n");
    push(stack, 7);
    printStack(stack);


    printf("Push 49\n");
    push(stack, 49);
    printStack(stack);


    printf("Push 62\n");
    push(stack, 62);
    printStack(stack);


    printf("Peek: %d\n", peek(stack));


    printf("Pop: %d\n", pop(stack));
    printStack(stack);


    printf("Pop: %d\n", pop(stack));
    printStack(stack);


    printf("Peek: %d\n", peek(stack));


    printf("El stack esta vacio? %d\n");

    if (isEmpty(stack)) {
        printf("El Stack si esta vacio\n");
    } else {
        printf("El Stack no esta vacio\n");
    }


    freeStack(stack);
    return 0;
}

