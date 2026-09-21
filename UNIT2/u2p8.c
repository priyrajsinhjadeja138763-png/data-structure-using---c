// Find minimum and maximum numbers from an array using recursion
#include<stdio.h>
#include<conio.h>

int maximum(int a[],int n)
{
    int max;
    if(n==1)
    {
        return a[0];
    }
    max=maximum(a,n-1);
    if(a[n-1]>max)
    {
        return a[n-1];
    }
    else
    {
        return max;
    }
}

int minimum(int a[],int n)
{
    int min;
    if(n==1)
    {
        return a[0];
    }
    min=minimum(a,n-1);
    if(a[n-1]<min)
    {
        return a[n-1];
    }
    else
    {
        return min;
    }
}

void main()
{
    int a[10],i,n,min,max;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter values:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    min=minimum(a,n);
    max=maximum(a,n);

    printf("Minimum is %d\n",min);
    printf("Maximum is %d",max);
    getch();
}