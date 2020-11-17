#include<stdio.h>
#include<stdlib.h> // Calling the stdlib
#define N 10 //Defining the variable N
int arr[N]; //Array declaration

int insertion_short(int num)  //Insertion section
{
    int temp; //declaration of temp varaiable
    printf("Enter The Array \n");
    for(int i=0; i<num; i++)
    {
     scanf("%d",&arr[i]); //input taking
     }
    for(int i=1; i< num; i++) // Main section for Insertin short
    {
        temp=arr[i];
        int j=i-1;
         while(j >=0 && arr[j]>temp)//Swapping
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;

    }
   printf("After Insertion short the numbers are \n");
   for( int i=0; i< num; i++)
   {
       printf("%d \n",arr[i]);// print the value after shorting
   }



}


int main() // Main section
{
    int num;
    printf("Enter the Number of array \n");
    scanf("%d",&num);//Taking the number of array
    insertion_short(num); //call the insertion section for shorting



}
