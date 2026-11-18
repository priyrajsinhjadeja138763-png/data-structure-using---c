#include<stdio.h>
#include<conio.h>

int stack [max];

int top = -1;

void push()
{
    int value;
    if (top == MAX - 1)
    {
        printf("stac is full can't push element")
    }
    else
        {
            printf("Enter value to push: ");
            scanf("%d", &value);
            top++;
            stack[top] = value;
            printf("%d pushed to stack.\n", value);
        }
}

void pop()
{
    if (top == -1)
    {
        printf("stack is empty ");
    }
    else
        {
            printf("Popped element: %d\n", stack[top]);
            top--;
        }
}

void printstack()
{
    if (top == 1)
    {
    printf("Stack is empty.\n");
    }
    else
    {
        printf("Stack elements (top to bottom):\n");

        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}


int main()
    {
    int choice;

    while (1) {
        printf("Stack Menu\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Print\n");
        printf("4. exit\n");
        printf("enter choice\n");
        scanf("%d" , &choice );

         switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                printStack();
                break;
            case 4:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice! Please select 1 to 4.\n");
        }
    }

    return 0;
}
