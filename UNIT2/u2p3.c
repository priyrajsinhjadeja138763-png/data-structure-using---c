// Print a string in reverse order using stack
#include<stdio.h>
#include<conio.h>
#include<string.h>
#define max 100

char stack[max];
int top=-1;

void main()
{
    char str[100];
    int i;

    printf("Enter a string:");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        top++;
        stack[top]=str[i];
    }

    printf("String in reverse order:");
    while(top!=-1)
    {
        printf("%c",stack[top]);
        top--;
    }
    getch();
}