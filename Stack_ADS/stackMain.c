#include <stdio.h>
#include <stdlib.h>
#include "stackFunctions.c"

int main() {
    int choice, data;
    Stack *s = createStack();
    if (s == NULL) {
    printf("Stack was not created\n");
    }

    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Size\n");
    printf("4. Destroy stack\n");
    printf("5. Check if stack is empty\n");
    printf("6. Check if stack is full\n");
    printf("7. Get data of the first element\n");


    do {
        printf("Enter what you want to do: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number from 1 to 6.\n");
            scanf("%*s");
            continue;
        }
        switch (choice) {
            case 1:
                printf("Enter data to be pushed into the stack: ");
                scanf("%d", &data);
                push(s, data);
                break;
            case 2:
                if(isEmpty(s)){
                printf("There are no elements in the stack.\n");
                } else {
                printf("Popped element is %d.\n", pop(s));
                }
                break;
            case 3:
                printf("Size of stack is %d.\n", sizeStack(s));
                break;
            case 4:
                destroyStack(s);
                printf("Stack is destroyed.\n");
                return 0;
            case 5:
                if (isEmpty(s)) {
                    printf("Stack is empty.\n");
                } else {
                    printf("Stack is not empty.\n");
                }
                break;
            case 6:
                if (isFull(s)==1){
                    printf("Stack is full.");
                } else {
                    printf("Stack is not full.\n");
                }
                break;
            case 7:
                if(isEmpty(s)){
                printf("There are no elements in the stack.\n");
                } else {
                printf("The first element is %d.\n", peek(s));
                }
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (1);
}

