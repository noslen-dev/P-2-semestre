#include <stdio.h>
#define L1 3
#define C1 2
#define L2 4
#define C2 3

void escreve(int n_lin, int n_col, int (*mat)[n_col]){
int i,j;
for(i=0; i<n_lin;++i){
  for(j=0; j<n_col;++j)
    printf("%d ",mat[i][j]);
  putchar('\n');
 }
}

int main(){
int mat1[L1][C1]={{1,2},{3,4},{5,6}}, mat2[L2][C2]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
escreve(L1,C1,mat1);
putchar('\n');
escreve(L2,C2,mat2);
return 0;
}