#include <stdio.h>
//este já foi algum tempinho, dia anterior cansado tentei
//consegui no seguinte rápido kekw
void calculaSoma(int *arr, int dim, int valor){
int i,j,pres;
for(i=0; i<dim;++i)
  for(pres=i+1; pres<dim; ++pres)
    for(j=pres+1; j<dim; ++j)
      if(arr[i]+arr[pres]+arr[j]==valor)
        printf("%d %d %d\t",arr[i],arr[pres],arr[j]);
}


int main(){
calculaSoma((int []){1,-2,3,4,-5,6},6,8);
return 0;
}