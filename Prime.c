//It is code used to find the prime number

#include<stdio.h>

int main()
{
   int mid, num ,flag=1;
   printf("Enter the Number\n");
   scanf("%d",&num); //It will take the Input from the user
   mid=num/2; // It will divide the number
  for(int i=2; i<= mid; i++)
   {
     if(num % i==0) //Checking for prime
      {
       flag=1;

        break;
      }
     else
      {
       flag=0;
      }

  }

  if(flag ==0)
  {
     printf("It is a prime Number \n");

  }
  else if(flag ==1)
  {
    printf("It is not a prime Number");
  }

}
