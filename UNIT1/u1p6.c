// Insert an element into the array at user defined position
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a[11],pos,element,n=10;
    printf("Enter 10 values:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the position:");
    scanf("%d",&pos);
    if(pos<1 || pos>n+1)
    {
        printf("Invalid position");
    }
    else
    {
        printf("Enter the value:");
        scanf("%d",&element);
        for(i=n;i>=pos;i--)
        {
            a[i]=a[i-1];
        }
        a[pos-1]=element;
        n++;
        printf("\nArray after insertion:");
        for(i=0;i<n;i++)
        {
            printf("\t%d",a[i]);
        }
    }
    getch();
}