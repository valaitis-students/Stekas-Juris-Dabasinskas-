#include <stdio.h>
#include <stdlib.h>
#include "stackHeader.h"

Stack* createStack() {
    Stack *s = (Stack*) malloc(sizeof(Stack));
    if (s == NULL) {
        return NULL;
    }
    s->top = NULL;
    return s;
}
int isEmpty(Stack *s) {
    return (s->top == NULL);
}


void push(Stack *s, Var data) {
    Node *newNode = (Node*) malloc(sizeof(Node));
    if (!newNode) {
        printf("Could not allocate memory.");
        return;
    }
    newNode->data = data;
    newNode->next = s->top;
    s->top = newNode;
    s->size++;
}

int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty.\n");
    } else {
        int data = s->top->data;
        Node *temp = s->top;
        s->top = s->top->next;
        free(temp);
        return data;
    }
}


int sizeStack(Stack *s) {
    int count = 0;
    Node *current = s->top;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}


void destroyStack(Stack *s) {
    Node *current = s->top;
    while (current != NULL) {
        Node *temp = current;
        current = current->next;
        free(temp);
    }
    free(s);
}

int isFull(Stack *s) {
    if(malloc(sizeof(Node)==NULL)){
        return 1;
       } else {
        return 0;
       }

}

Var peek(Stack *s) {
    if (isEmpty(s)) {
    } else {
        return s->top->data;
    }
}
