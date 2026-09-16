//create an array a,b and c of size 3,perform c=a+b.
#include <stdio.h>
#include <conio.h>

void main()
{
    int i, a[3], b[3], c[3];

    printf("Enter 3 elements of array A:\n");
    for(i = 0; i <= 2; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter 3 elements of array B:\n");
    for(i = 0; i <= 2; i++)
    {
        scanf("%d", &b[i]);
    }

    for(i = 0; i <= 2; i++)
    {
        c[i] = a[i] + b[i];
    }

    printf("Array C is:\n");
    for(i = 0; i <= 2; i++)
    {
        printf("%d ", c[i]);
    }

    getch();
}
