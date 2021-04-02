#include <stdio.h>
#define TAM 8
void reducion(int n_linhas, int (*arr)[TAM], float (*redux)[TAM/2]){
int i,j,ii,jj,prev_jj,times;
float media;
for(i=prev_jj=0; i<TAM/2;++i,prev_jj=0)
  for(j=0; j<TAM/2;++j,prev_jj+=2){
    for(ii=i*2,media=0,times=ii+2; ii<times;++ii)
      for(jj=prev_jj; jj<prev_jj+2;++jj)
        media+=arr[ii][jj];
  redux[i][j]=media/4;
  }

}

int main(){
int i,j;
int imagem[TAM][TAM]={0,4,9,3,6,7,2,9,9,4,7,8,3,4,7,2,5,1,2,6,3,8,6,2,7,1,4,8,7,2,0,7,4,9,3,5,2
,1,5,7,5,3,4,7,8,9,1,0,2,3,5,6,7,9,2,4,2,3,4,5,6,7,8,9};
float reduz[TAM/2][TAM/2];
reducion(TAM,imagem,reduz);
for(i=0; i<TAM/2;++i){
  for(j=0; j<TAM/2;++j)
    printf("%.1f ",reduz[i][j]);
  putchar('\n');
}
return 0;
}