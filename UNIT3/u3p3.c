// Singly linked list: insert after and before a specific node
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*start=NULL,*newnode;

void create()
{
    int val;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter value:");
    scanf("%d",&newnode->data);
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
    }
}

void insert_after()
{
    int val;
    struct node *ptr=start;
    newnode=(struct node *)malloc(sizeof(struct node));

    printf("Enter value to insert:");
    scanf("%d",&newnode->data);
    printf("Enter value after which you want to insert:");
    scanf("%d",&val);

    while(ptr!=NULL && ptr->data!=val)
    {
        ptr=ptr->next;
    }

    if(ptr==NULL)
    {
        printf("Value not found");
        free(newnode);
    }
    else
    {
        newnode->next=ptr->next;
        ptr->next=newnode;
    }
}

void insert_before()
{
    int val;
    struct node *ptr,*preptr;
    newnode=(struct node *)malloc(sizeof(struct node));

    printf("Enter value to insert:");
    scanf("%d",&newnode->data);
    printf("Enter value before which you want to insert:");
    scanf("%d",&val);

    if(start==NULL)
    {
        printf("List is empty");
        free(newnode);
        return;
    }

    if(start->data==val)
    {
        newnode->next=start;
        start=newnode;
        return;
    }

    preptr=start;
    ptr=start->next;

    while(ptr!=NULL && ptr->data!=val)
    {
        preptr=ptr;
        ptr=ptr->next;
    }

    if(ptr==NULL)
    {
        printf("Value not found");
        free(newnode);
    }
    else
    {
        preptr->next=newnode;
        newnode->next=ptr;
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
        printf("\n1.Create\n2.Insert after\n3.Insert before\n4.Display\n5.Exit");
        printf("\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:create();break;
            case 2:insert_after();break;
            case 3:insert_before();break;
            case 4:display();break;
            case 5:exit(0);
            default:printf("Wrong choice");
        }
    }
}