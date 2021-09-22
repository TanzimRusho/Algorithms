#include <stdio.h>

#define STACK_MAX 100

typedef struct {
    int top;
    int data[100];
} Stack;

void push(Stack *s, int value)
{
    if(s->top < STACK_MAX)
    {
        s->data[s->top] = value;
        s->top = s->top + 1;
    }
    
    else
    {
        printf("Stack is full!\n");
    }
}

int pop(Stack *s)
{
    int item;
    
    if(s->top > 0)
    {
        s->top = s->top - 1;
        item = s->data[s->top];
        return item;
    }
    else
    {
        printf("Stack is empty!\n");
        return -1;
    }
    
}

int main()
{
    Stack my_stack;
    int item;
    
    my_stack.top = 0;
    
    
    push(&my_stack, 1);
    push(&my_stack, 2);
    push(&my_stack, 3);
    
    item = pop(&my_stack);
    printf("%d\n", item);
    
    item = pop(&my_stack);
    printf("%d\n", item);
    
    //item = pop(&my_stack);
    //printf("%d\n", item);
    
    return 0;
}
