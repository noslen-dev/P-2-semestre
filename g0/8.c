#include <stdio.h>
#define N 3
//30 min
void fill(int (*arr)[3],int linhas){
int i,j,logic;
for(i=0; i<linhas; ++i) //preenche a primeira coluna
  do{
    printf("Digite um numero: ");
    scanf("%d",&arr[i][0]);
    for(j=0,logic=1; j<i;++j) // ve se esse numero ja esta nas colunas anteriores
      if(arr[j][0]==arr[i][0])
        logic=0;
  }while(!logic || arr[i][0]>100 || arr[i][0]<1);

for(i=0; i<linhas;++i)
  for(j=1; j<=1; ++j){ //preenche as duas outras colunas
    arr[i][j]=arr[i][j-1]*arr[i][j-1]; 
    arr[i][j+1]=arr[i][j]*arr[i][j-1];
 }
}




int main(){
int arr[3][3],i,j;
fill(arr,N);
for(i=0; i<N;++i){
  for(j=0; j<3; ++j)
    printf("%d ",arr[i][j]);
  putchar('\n');
}

return 0;
}