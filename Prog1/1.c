#include <stdio.h>

int main(){
int a,b,total,*p=&a,*q=&b,*r=&total;
printf("Digite dois valores: ");
scanf("%d%d",p,q);
*r=*q+*p;
printf("a=%d\t b=%d\t total=%d",*p,*q,*r);
return 0;
}