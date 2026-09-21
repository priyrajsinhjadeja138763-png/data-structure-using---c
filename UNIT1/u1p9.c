// Sort the array into descending order
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,temp,a[10];
    printf("Enter 10 values:");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=8;i++)
    {
        for(j=i+1;j<=9;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Array in descending order:\n");
    for(i=0;i<=9;i++)
    {
        printf("%d ",a[i]);
    }
    getch();
}