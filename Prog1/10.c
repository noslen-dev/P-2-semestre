#include <stdio.h>

int tres_consecutivos(char *frase){
int i,len,res=0;
for(len=0; frase[len]!='\0';++len);
for(i=0; i<=len-3;++i)
  if(frase[i]==frase[i+1] && frase[i]==frase[i+2])
    res=1;
return res;
}

int main(){
printf("%d",tres_consecutivos("aaba"));
return 0;
}