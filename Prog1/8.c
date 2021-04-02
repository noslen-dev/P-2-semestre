#include <stdio.h>

//3min
int maior_subida(int *arr, int dim){
int i,maior=0,pos=0,dif=0;
for(i=1; i<dim; ++i){
  dif=arr[i]-arr[i-1];
  if(dif>=maior){
    maior=dif;
    pos=i;
   }
 }
return pos;
}



int main(){
printf("%d",maior_subida((int []){1,10,20,1,2,3,1,40,41},9));
return 0;
}