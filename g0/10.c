#include <stdio.h>
//36 min, fácil mas muito para fazer e enganei-me na dig2 e em vez de lin1->lin2
//nada de especial
int cubo_magico(int (*arr)[3]){
int i,j,ii,jj,cnt,dig1=0,dig2=0,col1=0,col2=0,col3=0,lin1=0,lin2=0,lin3=0;
for(i=0; i<3;++i)
  for(j=0; j<3;++j){
    for(ii=cnt=0; ii<3;++ii)
      for(jj=0; jj<3;++jj)
        if(arr[i][j]==arr[ii][jj] || arr[ii][jj]<1 || arr[ii][jj]>9)
          ++cnt; 
    if(cnt>1)
      return 0; 
  }
dig1=arr[0][0]+arr[1][1]+arr[2][2];
dig2=arr[0][2]+arr[1][1]+arr[2][0];
for(i=0; i<3; ++i)
  for(j=0; j<3;++j){
    if(i==0)
      lin1+=arr[i][j];
    if(i==1)
      lin2+=arr[i][j];
    if(i==2)
      lin3+=arr[i][j];
    if(j==0)
      col1+=arr[i][j];
    if(j==1)
      col2+=arr[i][j];
    if(j==2)
      col3+=arr[i][j];
  }
if(dig2==dig1 && lin1==lin2 && lin1==lin3 && col1==col2 && col1==col3)
  return 1;
return 0;
}      


int main(){
int arr[3][3]={{6,1,8},{7,5,3},{2,9,4}};
printf("%d",cubo_magico(arr));
return 0;
}