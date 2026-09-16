#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;


void push(int value)
{
    if (top == MAX - 1)
    {
        printf("stack overflow\n");
        return;
    }
    stack[++top] = value;
}


int pop()
{
    if (top == -1)
    {
        printf("stack underflow\n");
        return 1;
    }
    return stack[top--];
}

void main()
{
    int base,exponent,i;
    int result = 1;

    printf("Enter base:");
    scanf("%d", &base);

    printf("Enter exponent:");
    scanf("%d", &exponent);


    for (i=0;i<exponent;i++)
    {
        push(base);
    }


    while (top != -1)
    {
        result *= pop();
    }

    printf("%d^%d = %d\n", base, exponent, result);

    return 0;
}
