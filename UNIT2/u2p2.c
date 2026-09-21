// Find factorial of a number using recursion (stack)
#include<stdio.h>
#include<conio.h>

int fact(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}

void main()
{
    int n,ans;
    printf("Enter a number:");
    scanf("%d",&n);
    ans=fact(n);
    printf("Factorial is %d",ans);
    getch();
}