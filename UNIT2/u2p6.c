// Find GCD of two numbers
#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,temp;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);

    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }

    printf("GCD is %d",a);
    getch();
}