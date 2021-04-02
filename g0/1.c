#include <stdio.h>
//2 min test cases incluidos
int maior(int *arr, int n){
int maior=arr[0],i;
for(i=0; i<n;++i)
  if(arr[i]>maior)
    maior=arr[i];
return maior;
}


int main(){
printf("%d",maior((int []){10,20,40},3));
return 0;
}