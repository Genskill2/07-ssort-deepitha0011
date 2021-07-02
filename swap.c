#include <stdio.h>


void swap_max (int arr[],int l,int n){
  int max=arr[n];
  int ind=n;
  for (int i=n;i<l;i++){
    if (max<arr[i]){
      max=arr[i];
      ind=i;
    }
  }
int temp=0;
temp=arr[n];
arr[n]=arr[ind];
arr[ind]=temp;
}

void ssort (int arr[],int l){
  for(int i=0;i<l;i++){
    swap_max (arr,l,i);
  }
}
