#include <stdio.h>

void lower(int *arr, int n){
float media;
int *ptr=arr;
for(media=0; ptr<&arr[n];++ptr)
  media+=*ptr;
for(media/=n,ptr=arr; ptr<&arr[n];++ptr)
  if(*ptr<media)
    *ptr=0;
}


int main(){
int arr[10]={1,2,3,4,5,6,7,8,9,10},*ptr=arr;
lower(arr,10);
for(; ptr<&arr[10];++ptr)
  printf("%d ",*ptr);
return 0;
}