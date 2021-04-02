#include <stdio.h>

int unicaMat(int n_lin, int n_col ,int (*mat)[n_col]){
int i,j,ii,jj,cnt,res=1;
for(i=0; i<n_lin;++i) 
  for(j=0; j<n_col;++j){
    for(ii=cnt=0; ii<n_lin;++ii)
      for(jj=0; jj<n_col;++jj)
        if(mat[i][j]==mat[ii][jj])
          ++cnt;
  if(cnt>1)
    res=0;
  }
return res;
}

int main(){
int mat[2][2]={{1,2},{1,5}};
printf("%d",unicaMat(2,2,mat));
return 0;
}