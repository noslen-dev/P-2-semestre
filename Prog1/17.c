#include <stdio.h>

void transpose(int n_colunas, int (*mat)[n_colunas]){ //transpõe uma matriz quadrada
int i,j,tmp;
for(i=0; i<n_colunas;++i)
  for(j=i+1; j<n_colunas;++j){
     tmp=mat[i][j];
      mat[i][j]=mat[j][i];
      mat[j][i]=tmp;
    }
}
    



int main(){
int mat[4][4]={{1,3,5,6},{1,4,3,2},{5,7,8,9},{25,10,11,12}},i,j;
transpose(4,mat);
for(i=0; i<4;++i){
  for(j=0; j<4;++j)
    printf("%d ",mat[i][j]);
  putchar('\n');
 }
return 0;
}