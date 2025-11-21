#include<stdio.h>
#include<stdlib.h>
#define size 10
int stack[size],n,i,front=-1,rear=-1;
int main()
{
    int a;
    while(1)
    {
        printf("1.Push\n2.Pop\n3.isempty\n4.isfull\n5.display\n6.exit\n");
        printf("enter a valid choice:");
        scanf("%d",&a);
        switch(a)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                isempty();
                break;
            case 4:
                isfull();
                break;
            case 5:
                display();
                break;
            case 6:
                exit(0);
                break;
            default:
                printf("Invalid choice\n");
                break;
        }
    }
}
int push()
{
    if(rear==size-1)
    {
        printf("Stack is overflowed\n");
    }
    else
    {
        rear++;
        printf("Enter a number:");
        scanf("%d",&n);
        stack[rear]=n;
    }
}
int pop()
{
    if(front==rear)
    {
        printf("Stack is under flowed\n");
    }
    else
    {
        front++;
        printf("ELement deleted:%d",stack[front]);
    }
}
int isempty()
{
    if(front==rear)
    printf("stack is empty");
}
int isfull()
{
    if(rear=size-1)
    printf("stack is full");
}
int display()
{
    int i;
    for(i=front+1;i<=rear;i++)
    {
        printf("%d ",stack[i]);
    }
    printf("\n");
}
