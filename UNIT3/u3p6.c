// Doubly linked list: insert at starting and end
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
}*start=NULL,*newnode;

void insert_start()
{
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter value:");
    scanf("%d",&newnode->data);
    newnode->prev=NULL;
    newnode->next=start;

    if(start!=NULL)
    {
        start->prev=newnode;
    }
    start=newnode;
}

void insert_end()
{
    struct node *ptr;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter value:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;

    if(start==NULL)
    {
        newnode->prev=NULL;
        start=newnode;
    }
    else
    {
        ptr=start;
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
    while(ptr!=NULL)
    {
        printf("%d -> ",ptr->data);
        ptr=ptr->next;
    }
}

void main()
{
    int ch;
    while(1)
    {
        printf("\n1.Insert starting\n2.Insert end\n3.Display\n4.Exit");
        printf("\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert_start();break;
            case 2:insert_end();break;
            case 3:display();break;
            case 4:exit(0);
            default:printf("Wrong choice");
        }
    }
}