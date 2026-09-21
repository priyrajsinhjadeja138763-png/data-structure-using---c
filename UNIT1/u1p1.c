// Create an array of size 10, input values, print the array and search an element
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,s;
    printf("Enter 10 values:");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The 10 values are:\n");
    for(i=0;i<=9;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("Enter the value you want to search:");
    scanf("%d",&s);
    for(i=0;i<=9;i++)
    {
        if(s==a[i])
        {
            break;
        }
    }
    if(i==10)
    {
        printf("Value not found");
    }
    else
    {
        printf("Value found at location : %d",i+1);
    }
    getch();
}