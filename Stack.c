//It is code for creating stack using array
#include<stdio.h>
#include<stdlib.h>
#define N 10  //defining the value of N
int arr[N]; //Initilization of arr
int top=-1;  //Initialization of top variable

//In this specific section of code use insert the data taken from the user
void Inserting_Element(x)
{
    if(top<N)
    {
       top++;
       arr[top]=x;
    }
    else
    {
        printf("Overflow Condition\n");
    }
}
//this section use for deleting the code
void Deleting_Element()
{
   if (top==-1)
   {
       printf("List is empty\n");
   }
    else
    {
        printf("The deleted element is %d\n",arr[top]);
        top--;

    }
}
//this section of code is use for displaying the element
void Display_Element()
{

     if(top==-1)
    {
        printf("List is Empty\n");
    }
    else
    {
        for(int i=0;i<=top;i++)
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
     printf("Enter 1 to Inserting the elemet \n");
     printf("Enter 2 to Deleting the element\n");
     printf("Enter 3 to Display the element\n");
     scanf("%d",&choice);
     if(choice ==1)
      {
        int x;
        printf("\n Enter the element to Insert\n");
        scanf("%d",&x);
        Inserting_Element(x);//it will pass the value of x to Inserting code
      }
     else if(choice==2)
      {
        Deleting_Element();//it is used as deleting operation
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
