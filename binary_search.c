#include<stdio.h>
#include<stdlib.h>
#define N 10
int arr[N]={1,7,9,13,17,19,23,28,31,45};
int left=0;
int right=N-1;

int binary_search(int val, int left, int right)
  {
    int mid;
    if (left <= right)
    {
        mid=(left+right)/2;
        if (arr[mid] == val)
        {
            printf("Found\n");
            return 1;
        }
        else if (arr[mid] < val)
        {
            return binary_search(val, mid+1, right);
        }
        else if (arr[mid] > val)
        {
            return binary_search(val, left, mid-1);
        }
    }
    else
    { 
      printf("Not found\n");
      return 1;
    }

  }

int main()
{
    int val;
    printf("Enter the value  you want to search  ");
    scanf("%d",&val);

   binary_search(val, left, right);
}
