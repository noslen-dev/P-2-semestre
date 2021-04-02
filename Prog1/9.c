#include <stdio.h>
#include <ctype.h>
void verifica(char *tel, char *c){
int i;
*c='V';
for(i=0; tel[i]!='\0';++i)
  if(isdigit(tel[i])==0)
    *c='I';
if(i!=9 || tel[0]!='2')
  *c='I';  
}

                 
int main(){
char ch;
verifica("264993868",&ch);
putchar(ch);
return 0;
}