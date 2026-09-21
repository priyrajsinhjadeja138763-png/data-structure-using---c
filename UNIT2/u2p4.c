// Find factorial of a given integer number using stack
#include<stdio.h>
#include<conio.h>
#define max 20

int stack[max];
int top=-1;

void main()
{
    int n,i,fact=1;

    printf("Enter a number:");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        top++;
        stack[top]=i;
    }

    while(top!=-1)
    {
        fact=fact*stack[top];
        top--;
    }

    printf("Factorial is %d",fact);
    getch();
}