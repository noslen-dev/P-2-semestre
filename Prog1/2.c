#include <stdio.h>

void rotation(int *a, int *b, int *c){
int tmp;
tmp=*a;
*a=*c;
*c=*b;
*b=tmp;
}

int main(){
int a=10,b=20,c=30;
rotation(&a,&b,&c);
printf("%d---->%d----->%d",a,b,c);


return 0;
}