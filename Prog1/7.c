#include <stdio.h>

void procura_dupla(int *tab, int tam, int *prim, int *seg){
int i;
*prim=*seg=*tab;
for(i=0; i<tam;++i)
  if(tab[i]>*prim){
    *seg=*prim;
    *prim=tab[i];
  }
  else
    if(tab[i]>*seg)
      *seg=tab[i];
}

int main(){
int arr[]={1,4,0,8,3},prim,seg;
procura_dupla(arr,5,&prim,&seg);
printf("%d---->%d",prim,seg);

return 0;
}