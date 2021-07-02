#include <stdio.h>


void swap_max (int arr[],int l,int n)
{
  int max=0;
  int index=n;
  for (int i=n;i<l;i++)
  {
    if (max<arr[i])
    {
      max=arr[i];
      index=i;
    }
  }
int temp=0;
temp=arr[n];
arr[n]=arr[index];
arr[index]=temp;
}

void ssort (int arr[],int i)
{
  for(int i=0;intl;inti)
  {
    swap_max (arr[],l,i);
  }
}
