// Singly linked list: delete first, last and specific node
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

void delete_first()
{
    struct node *ptr;
    if(start==NULL)
    {
        printf("List is empty");
        return;
    }
    ptr=start;
    start=start->next;
    free(ptr);
}

void delete_last()
{
    struct node *ptr,*preptr;
    if(start==NULL)
    {
        printf("List is empty");
        return;
    }

    if(start->next==NULL)
    {
        free(start);
        start=NULL;
        return;
    }

    ptr=start;
    while(ptr->next!=NULL)
    {
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=NULL;
    free(ptr);
}

void delete_specific()
{
    int val;
    struct node *ptr,*preptr;

    if(start==NULL)
    {
        printf("List is empty");
        return;
    }

    printf("Enter value to delete:");
    scanf("%d",&val);

    if(start->data==val)
    {
        ptr=start;
        start=start->next;
        free(ptr);
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
    }
    else
    {
        preptr->next=ptr->next;
        free(ptr);
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
        printf("\n1.Create\n2.Delete first\n3.Delete last\n4.Delete specific\n5.Display\n6.Exit");
        printf("\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:create();break;
            case 2:delete_first();break;
            case 3:delete_last();break;
            case 4:delete_specific();break;
            case 5:display();break;
            case 6:exit(0);
            default:printf("Wrong choice");
        }
    }
}