#include <stdio.h>
#define N 3
//2min
void escreve(int (*arr)[3], int linhas){
int i,j;
for(i=0; i<linhas; ++i){
  for(j=0; j<3; ++j)
    printf("%d ",arr[i][j]);
  putchar('\n');
 }
}


int main(){
int arr[3][3]={0};
escreve(arr,3);
return 0;
}