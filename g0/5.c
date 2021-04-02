#include <stdio.h>
//2 min
int pesquisa(int *arr, int dim, int num){
int i;
for(i=0; i<dim; ++i)
  if(arr[i]==num)
    return 1;
return 0;
}




int main(){
printf("%d",pesquisa((int []){10,10,9,9,1,1,1},7,9));
return 0;
}