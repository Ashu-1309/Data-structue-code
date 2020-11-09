#include<stdio.h>
#define N 10
int arr[N]={1,7,9,13,17,19,23,28,31,45};
int left=0;
int right=N;

int binary_search(int val)
  {
    int mid;

    mid=(left+right)/2;
     if(arr[mid]>val)
     {
      right=mid;
     binary_search(val);

      }
     else if(arr[mid]<val)
     {
         left=mid;
         binary_search(val);
     }
     else if(arr[mid]=val)
     {
         printf("The Value %d found at %d\n",val,mid);
     }

     else  if (arr[mid]!=val)
    {
        printf("Not Found");
        exit(0);


  }

  }

int main()
{
    int val;
    printf("Enter the value  you want to search  ");
    scanf("%d",&val);

   binary_search(val);
}
