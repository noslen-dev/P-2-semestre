#include <stdio.h>

double produto_escalar(double *a, double *b, int n){
double sum;
int i;
for(i=sum=0; i<n;++i)
  sum+=a[i]*b[i];
return sum;
}


int main(){
double a[3]={1,2,3}, b[3]={3,4,5};
printf("%.2lf",produto_escalar(a,b,3));
return 0;
}