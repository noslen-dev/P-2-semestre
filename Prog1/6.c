#include <stdio.h>
//13 min
int media(int a, int b){
return (a+b)/2;
}

void vizinhos(int *tab, int dim, int *igual){
int i;
*igual=0;
if(dim<=2) // se só tivermos dois elementos nem vale a pena começar
  return 0;
for(i=0; i<dim; ++i)
  if(i==0 && i+2<dim) //se estivermos no 1º elemento os vizinho sao os proximos 2
    tab[i]==media(tab[i+1],tab[i+2])? ++*igual: *igual;
  else
    if(i+1==dim && i-2>=0) // se tivermos no ultimo elemento os vizinhos sao os 2 anteriores
      tab[i]==media(tab[i-1],tab[i-2])? ++*igual: *igual;
    else // se nao, estamos num elemento normal e os vizinhos sao o à frente e o atras
      tab[i]==media(tab[i+1],tab[i-1])? ++*igual: *igual;

}

int main(){
int igual;
vizinhos((int []){1,2},2,&igual);
printf("%d",igual);

return 0;
}