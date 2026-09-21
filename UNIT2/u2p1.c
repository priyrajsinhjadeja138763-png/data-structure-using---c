// Implement stack using array: push, pop, display, peek, peep, change, exit
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 10

int stack[max];
int top=-1;

void push()
{
    int val;
    if(top==max-1)
    {
        printf("Stack Overflow");
    }
    else
    {
        printf("Enter the value:");
        scanf("%d",&val);
        top++;
        stack[top]=val;
    }
}

void pop()
{
    if(top==-1)
    {
        printf("Stack Underflow");
    }
    else
    {
        printf("Deleted value is %d",stack[top]);
        top--;
    }
}

void display()
{
    int i;
    if(top==-1)
    {
        printf("Stack is empty");
    }
    else
    {
        for(i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
}

void peek()
{
    if(top==-1)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("Top element is %d",stack[top]);
    }
}

void peep()
{
    int pos;
    printf("Enter position from top:");
    scanf("%d",&pos);
    if(pos<=0 || pos>top+1)
    {
        printf("Invalid position");
    }
    else
    {
        printf("Element is %d",stack[top-pos+1]);
    }
}

void change()
{
    int pos,val;
    printf("Enter position from top:");
    scanf("%d",&pos);
    if(pos<=0 || pos>top+1)
    {
        printf("Invalid position");
    }
    else
    {
        printf("Enter new value:");
        scanf("%d",&val);
        stack[top-pos+1]=val;
    }
}

void main()
{
    int ch;
    while(1)
    {
        printf("\n1.Push\n2.Pop\n3.Display\n4.Peek\n5.Peep\n6.Change\n7.Exit");
        printf("\nEnter your choice:");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: peek(); break;
            case 5: peep(); break;
            case 6: change(); break;
            case 7: exit(0);
            default: printf("Wrong choice");
        }
    }
}