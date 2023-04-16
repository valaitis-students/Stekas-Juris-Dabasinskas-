#ifndef stackHeader_H_INCLUDED
#define stackHeader_H_INCLUDED

typedef int Var;

typedef struct Node {
    Var data;
    struct Node *next;
} Node;

typedef struct Stack {
    Node *top;
    Var size;
} Stack;

Stack* createStack();
//Function creates a new stack and returns a pointer to it. If there is no memory to allocate, the function returns NULL.
int isEmpty(Stack *s);
//This function takes the stack pointer and checks if the top field equals to NULL. The function returns 0 if the stack is not empty and 1 if it is.
void push(Stack *s, Var data);
//This function takes the stack pointer and a variable that the user entered. Memory is allocated for a new node. The function does not return anything.
int pop(Stack *s);
//This function takes the stack pointer and returns the variable that was entered last.
int sizeStack(Stack *s);
//This function takes the stack pointer and returns the number of elements in the stack.
void destroyStack(Stack *s);
//This function takes the stack pointer and frees the memory allocated for the stack.
int isFull(Stack *s);
//This function takes the stack pointer and checks if it is full by trying to allocate memory for a new node. If memory cannot be allocated, the function returns 1, if memory can be allocated, it returns 0.
Var peek(Stack *s);
//This function takes the stack pointer and returns the top element without removing it if the stack is not full.


#endif
