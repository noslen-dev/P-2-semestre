#include <stdio.h>
#include <string.h>
//10 min
void apaga_superfulo(char *s){
int i,esp,pos;
for(esp=0; s[esp]==' ' && s[i]!='\0';++esp); //apanhar espaços iniciais
for(pos=0; pos<strlen(s);++pos) //apaga-los
  s[pos]=s[pos+esp];
for(i=0; s[i]!='\0';++i)
  while(s[i]==' ' && s[i+1]==' ') //enquanto dois espaços estiverem seguidos
    for(pos=i; pos<strlen(s);++pos) //reduzi-los para 1
      s[pos]=s[pos+1];
for(i=strlen(s)-1; s[i]==' ' && i>=0; --i); //apanhar os finais
s[++i]='\0'; //apaga-los
}


int main(){
char s[100]="  ana   mol  sopa  ";
apaga_superfulo(s);
puts(s);
return 0;
}