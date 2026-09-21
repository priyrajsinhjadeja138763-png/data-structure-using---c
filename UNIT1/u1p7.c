// Delete an element from the array from user defined position
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,arr[10],pos,n=10;
    printf("Enter 10 values:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the position you want to delete:");
    scanf("%d",&pos);
    if(pos<1 || pos>n)
    {
        printf("Invalid position");
    }
    else
    {
        for(i=pos-1;i<n-1;i++)
        {
            arr[i]=arr[i+1];
        }
        n--;
        printf("Array after deletion:");
        for(i=0;i<n;i++)
        {
            printf("\t%d",arr[i]);
        }
    }
    getch();
}