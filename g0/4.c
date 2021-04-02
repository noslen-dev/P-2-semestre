#include <stdio.h>
//10 min, test cases incluidos
int mais_vezes(int *arr, int n){
int i,j,cnt,maior_cnt=0,elemento=arr[0];
for(i=0; i<n; ++i){
  for(j=i+1,cnt=0; j<n; ++j)
    if(arr[i]==arr[j])
      ++cnt;
  if(cnt>maior_cnt){
    maior_cnt=cnt;
    elemento=arr[i];
  }
  else
    if(cnt==maior_cnt)
      if(arr[i]>elemento)
        elemento=arr[i];
 }
return elemento;
}



int main(){
printf("%d",mais_vezes((int []){10,10,9,9,1,1,1},7));
return 0;
}