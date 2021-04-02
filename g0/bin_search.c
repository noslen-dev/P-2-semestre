#include <stdio.h>

int bin_search(int arr[],int dim, int valor){
int beg,end,num,find=0;
for(beg=0,end=dim-1,num=dim/2; beg!=end && !find; num=(beg+end+1)/2){//end+1,porque se beg=0 e end=2
// com end+1 estamos a contar os 3 elementos e nao 2
  if(arr[num]==valor) //encontramos
    find=1;
  else
    if(arr[num]>valor) //se o numero onde estamos
      end=num-1; //encolhemos end, excluindo esse numero
    else
      beg=num+1;//aumentamos beg excluindo o num(o já visto)
 }
return find;
}



int main(){
printf("%d",bin_search((int []){1,2,3,4,5},5,2));

return 0;
}