// Doubly linked list: delete first, last and specific node
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
    if(start!=NULL)
    {
        start->prev=NULL;
    }
    free(ptr);
}

void delete_last()
{
    struct node *ptr;
    if(start==NULL)
    {
        printf("List is empty");
        return;
    }

    ptr=start;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }

    if(ptr->prev==NULL)
    {
        start=NULL;
    }
    else
    {
        ptr->prev->next=NULL;
    }
    free(ptr);
}

void delete_specific()
{
    int val;
    struct node *ptr=start;

    if(start==NULL)
    {
        printf("List is empty");
        return;
    }

    printf("Enter value to delete:");
    scanf("%d",&val);

    while(ptr!=NULL && ptr->data!=val)
    {
        ptr=ptr->next;
    }

    if(ptr==NULL)
    {
        printf("Value not found");
    }
    else
    {
        if(ptr->prev!=NULL)
            ptr->prev->next=ptr->next;
        else
            start=ptr->next;

        if(ptr->next!=NULL)
            ptr->next->prev=ptr->prev;

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