//It is program which is used to short the array using Bubble short method

#include<stdio.h>
#define N 100
int arr[N]; //Gobal Variable

int main ()
{
    int num,temp;  //Definning the valriable
    printf("Enter the Number of array to be inserted  \n");
    scanf("%d",&num);//It will take Number of variable

    printf("Enter the array \n");
    for(int i=0; i< num; i++)
    {
        scanf("%d",&arr[i]); //It will take the array
    }
   for(int i=0; i<num-1; i++)
   {
       for( int j=0; j<num-1-i;j++)
       {
           if(arr[j]>arr[j+1]) //Checking condition
           {
               //Swapping of value
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
           }
       }
   }

printf("Array after bubble short \n");
 // It will print all the value after the Bubble short
      for (int i=0; i<num; i++)
      {
          printf("%d \n",arr[i]);
      }
}
