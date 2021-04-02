#include <stdio.h>

void f(int *t, int tam, int *np, int *ni, int *maior,int *pos){
int *ptr=t;
*np=*ni=0;
for(*maior=*t; ptr<t+tam; ++ptr){
  if(*ptr>*maior){
    *maior=*ptr;
    *pos=ptr-t;
  }
  if(*ptr%2==0)
    ++(*np);
  else
    ++(*ni);
 }
}


int main(){
int arr[]={1,3,7,5,2,10,9,7,7,1}, np=0, ni=0, maior,pos;
f(arr,10,&np,&ni,&maior,&pos);
printf("%d--->%d---->%d----%d",maior,pos,np,ni);
return 0;
}