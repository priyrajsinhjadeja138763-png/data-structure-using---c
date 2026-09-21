// Find the largest value from an array of size 10
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,largest;
    printf("Enter the numbers:\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    largest=a[0];
    for(i=1;i<=9;i++)
    {
        if(a[i]>largest)
        {
            largest=a[i];
        }
    }
    printf("The largest number is %d",largest);
    getch();
}