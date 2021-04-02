#include <stdio.h>

void matrix_sum(int n_linhas, int n_colunas, int (*mat1)[n_colunas], int (*mat2)[n_colunas]){
int i,j;
for(i=0; i<n_linhas;++i)
  for(j=0; j<n_colunas;++j)
    mat1[i][j]+=mat2[i][j];
}


int main(){
int A[2][2]={{1,2},{1,2}}, B[2][2]={{3,4},{5,6}},i,j;
matrix_sum(2,2,A,B);
for(i=0; i<2;++i){
  for(j=0; j<2;++j)
    printf("%d ",A[i][j]);
  putchar('\n');
}
return 0;
}