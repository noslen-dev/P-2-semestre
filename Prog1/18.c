#include <stdio.h>

void media_col(int n_colunas, int n_linhas, int (*arr)[n_colunas], int *pos_min, int *pos_max){
int i,j,min,max;
float media;
for(j=0; j<n_colunas; ++j){
  for(i=media=0; i<n_linhas;++i)
    media+=arr[i][j];
  printf("A media da coluna %d e %.2f\n",j,media/=n_linhas);
  if(j==0){
    min=max=media;
    *pos_max=*pos_min=j;
  }
  if(media<min){
    min=media;
    *pos_min=j;
  }
  else
    if(media>max){
       max=media;
      *pos_max=j;
   }
 }

}


int main(){
int arr[3][3]={{3,5,2},{4,3,2},{1,1,1}}, pos_min,pos_max;
media_col(3,2,arr,&pos_min,&pos_max);
printf("A coluna com a media mais baixa e=%d\t a coluna com a media mais alta e=%d",pos_min,pos_max);

return 0;
}