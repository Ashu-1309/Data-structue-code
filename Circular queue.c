#include<stdio.h>
#include<stdlib.h>
#define N 3
int arr[N];
int front=-1;
int rear=-1;

void enqueue_element(int a)
{
    if(rear==-1 && front ==-1)
    {
        front=0;
        rear =0;
        arr[rear]=a;
    }
    else if(((rear+1)%N)== front)
    {

        printf("Queue is full");
    }
    else
    {
        rear=((rear+1)%N);
        arr[rear]=a;
    }

}
void dequeue_element()
{
    if(front==-1 && rear ==-1)
    {
        printf("Queue is Empty");
    }
    else if (front==rear)
    {
        front= rear=-1;
    }
    else
    {
    printf("The deleted number is %d",arr[front]);
    free(front);
    front=(front+1)%N;
    }

}

void display_element()
{
    int i=front;

    if (front ==-1 && rear ==-1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("The Elment of Queue are\n");
        while(i!=rear)
        {
            printf("%d \n",arr[i]);
            i=(i+1)%N;

        }
        printf("%d",arr[i]);

    }
    printf("\n");

}

void main()
{
    int choice;
    int flag=1;
    int x;
    while(flag ==1)
    {
        printf("\nEnter the operation\n");
        printf("Enter 1 to enqueue\n ");
        printf("Enter 2 to dequeue\n");
        printf("Enter 3 to display\n");
        scanf("%d",&choice);
         if(choice ==1)
      {
        int x;
        printf("\nEnter the element to Enqueue\n");
        scanf("%d",&x);
        enqueue_element(x);//it will pass the value of x to enqueuing code
      }
     else if(choice==2)
      {
        dequeue_element();//it direct the user to dequeuimg operation

      }
     else if(choice ==3)
      {
        display_element();//it is used for the displayng the element

       }
    else
       {
       flag=0;
       }

    }

}
