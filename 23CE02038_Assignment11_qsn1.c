#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

// Stack structure
typedef struct {
    char items[MAX_SIZE];
    int top;
} Stack;

// Function prototypes
void push(Stack *s, char c);
char pop(Stack *s);

int main() {
    char inputString[MAX_SIZE];
    printf("Input a string: ");
    fgets(inputString, MAX_SIZE, stdin);
    
    Stack stack = { .top = -1 };

    // Push characters onto the stack
    for (int i = 0; i < strlen(inputString); i++) {
        push(&stack, inputString[i]);
    }

    // Pop characters from the stack to reverse the string
    printf("Reversed string using a stack is: ");
    while (stack.top >= 0) {
        printf("%c", pop(&stack));
    }
    printf("\n");

    return 0;
}

// Function to push an item onto the stack
void push(Stack *s, char c) {
    s->items[++(s->top)] = c;
}

// Function to pop an item from the stack
char pop(Stack *s) {
    return s->items[(s->top)--];
}
