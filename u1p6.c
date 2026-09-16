//Insert an element into the array at user defined position
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a[11],pos,element;
    printf("Enter the values:");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the location:");
    scanf("%d",&pos);
    if(pos < 1 || pos-1 > 9)
    {
        printf("location not found");
    }
    else
    {
        printf("Enter the value:");
        scanf("%d",&element);
        for(i=11;i<pos;i--)
        {
            a[i]=a[i-1];
        }
        a[pos-1]=element;

    }

    printf("\n series after insertion:");
    for(i=0;i<=9;i++)
    {
        printf("\t%d",a[i]);
    }
    getch();
}
