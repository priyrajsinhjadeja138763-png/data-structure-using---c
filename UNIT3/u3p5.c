// Doubly linked list: create and display
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
}*start=NULL,*newnode;

void create()
{
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter value:");
    scanf("%d",&newnode->data);
    newnode->prev=NULL;
    newnode->next=NULL;

    if(start==NULL)
    {
        start=newnode;
    }
    else
    {
        struct node *ptr=start;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=newnode;
        newnode->prev=ptr;
    }
}

void display()
{
    struct node *ptr=start;
    if(start==NULL)
    {
        printf("List is empty");
    }
    else
    {
        while(ptr!=NULL)
        {
            printf("%d -> ",ptr->data);
            ptr=ptr->next;
        }
        printf("NULL");
    }
}

void main()
{
    int ch;
    while(1)
    {
        printf("\n1.Create\n2.Display\n3.Exit");
        printf("\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:create();break;
            case 2:display();break;
            case 3:exit(0);
            default:printf("Wrong choice");
        }
    }
}