#include <stdio.h>
//4min
int comuns(int *tabA, int tamA, int *tabB, int tamB){
int i,j,cnt;
for(i=cnt=0; i<tamA;++i)
  for(j=0; j<tamB; ++j)
    if(tabA[i]==tabB[j])
      ++cnt;
return cnt;
}



int main(){
int a[]={1,2,3,4,8,10},b[]={5,1};
printf("%d",comuns(a,6,b,2));
return 0;
}