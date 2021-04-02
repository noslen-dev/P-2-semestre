#include <stdio.h>
#include <string.h>
//1min 30seg
int capicua(char *s){
int i,j;
for(i=0, j=strlen(s)-1; i<j; ++i,--j)
  if(s[i]!=s[j])
    return 0;
return 1;
}

int main(){
printf("%d",capicua("boi"));
return 0;
}