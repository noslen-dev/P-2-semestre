#include <stdio.h>
//6 min test cases incluidos
int numero_maior(int *arr, int n){
int i,cnt,maior=arr[0];
for(i=cnt=0; i<n;++i)
  if(arr[i]==maior)
    ++cnt;
  else
    if(arr[i]>maior){
      maior=arr[i];
      cnt=1;
    }
return cnt;
}

int main(){
printf("%d",numero_maior((int []){1,8,2,8,8,9},6));
return 0;
}

