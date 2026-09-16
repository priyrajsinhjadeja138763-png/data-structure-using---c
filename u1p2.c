//create an array of size 10, input values and display the sum and average of all array.
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,sum=0;
    float avg;
    printf("enter 10 values:");

    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/10.0;
    printf("sum:%d\n",sum);
    printf("avrage:%.2f",avg);
    getch();
}
