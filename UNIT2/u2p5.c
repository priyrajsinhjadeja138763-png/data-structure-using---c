// Find the power of a given number using stack
#include<stdio.h>
#include<conio.h>
#define max 20

int stack[max];
int top=-1;

void main()
{
    int base,power,i,ans=1;

    printf("Enter base:");
    scanf("%d",&base);
    printf("Enter power:");
    scanf("%d",&power);

    for(i=1;i<=power;i++)
    {
        top++;
        stack[top]=base;
    }

    while(top!=-1)
    {
        ans=ans*stack[top];
        top--;
    }

    printf("Answer is %d",ans);
    getch();
}