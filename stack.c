
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"


Stack* createStack() {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->top = NULL;
    return stack;
}


void push(Stack* stack, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = stack->top;
    stack->top = newNode;
}


int pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Error, el Stack esta vacio\n");
        return -1;
    }
    Node* temp = stack->top;
    int data = temp->data;
    stack->top = stack->top->next;
    free(temp);
    return data;
}


int peek(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Error, el Stack esta vacio\n");
        return -1;
    }
    return stack->top->data;
}


int isEmpty(Stack* stack) {
    return stack->top == NULL;
}


void printStack(Stack* stack) {
    Node* current = stack->top;
    while (current != NULL) {
        printf("%d - ", current->data);
        current = current->next;
    }
    printf("FIN\n");
}


void freeStack(Stack* stack) {
    while (!isEmpty(stack)) {
        pop(stack);
    }
    free(stack);
}


