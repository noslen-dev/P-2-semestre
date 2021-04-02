#include <stdio.h>
//1 min test cases incluidos
int maior(int *arr, int n){
int maior=arr[0],i,pos=0;
for(i=0; i<n;++i)
  if(arr[i]>=arr[pos])
    pos=i;
return pos;
}


int main(){
printf("%d",maior((int []){10,20,40,50,50},5));
return 0;
}