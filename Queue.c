//This code is use for creating queue,performing the operation like enqueue,dequeueand displaying the element//
#include<stdio.h>
#include<stdlib.h>
#define N 100
int arr[N];
int rear=-1;
int front =-1;

//this specific code is use for enqueuing the element
void Enqueue_Element(int a)//int a is value given from user
{
 if (rear==-1 && front==-1)//condition check
 {
     front=0;//intilization
     rear=0;//intilization
     arr[rear]=a;//assigning
 }
 else if(rear > N)//condition check
 {
     printf("\n Overflow Condition \n");
 }
 else
 {
     rear++;
     arr[rear]=a;
      printf("The Element is %d \n",arr[rear] );
 }
}
//this specific code is use for dequeuing the element
void Dequeue_Element()
{
 printf("\n The Dequeued Element is %d \n",arr[front]);
 free(arr[front]);
 front=front-1;

}
//this specific code is use for displaying the element
void Display_Element()
{
    if(rear==-1 && front == -1)
    {
        printf("List is Empty");
    }
    else
    {
        for(int i=front;i<=rear;i++)
        {
            printf("\n The Elements are %d \n",arr[i]);
        }
    }
}

int main()

{
   int choice ,flag=1;
   while(flag==1)
   {
       //this section is used for the choice selection
     printf("Enter the Experiment \n");
     printf("Enter 1 to Enqueue the elemet \n");
     printf("Enter 2 to dequeue the element\n");
     printf("Enter 3 to display the element\n");
     scanf("%d",&choice);
     if(choice ==1)
      {
        int x;
        printf("\nEnter the element to Insert\n");
        scanf("%d",&x);
        Enqueue_Element(x);//it will pass the value of x to enqueuing code
      }
     else if(choice==2)
      {
        Dequeue_Element();//it direct the user to dequeuimg operation

      }
     else if(choice ==3)
      {
        Display_Element();//it is used for the displayng the element

       }
    else
       {
       flag=0;
       }
   }

}
