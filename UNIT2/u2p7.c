// Find the Smallest Common Divisor of a given number
#include<stdio.h>
#include<conio.h>

void main()
{
    int n,i,divisor=1;

    printf("Enter a number:");
    scanf("%d",&n);

    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            divisor=i;
            break;
        }
    }

    printf("Smallest Common Divisor is %d",divisor);
    getch();
}