// Create an array of size 10 and find sum and average
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,sum=0;
    float avg;
    printf("Enter 10 values:");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/10.0;
    printf("Sum: %d\n",sum);
    printf("Average: %.2f",avg);
    getch();
}