#include <stdio.h>
#include <string.h>
//6 min
void escreve_separado(char *s){
int  i;
for(i=0; i<strlen(s);++i){
  for(; s[i]==' ';++i);
  if(s[i]!='\0'){ //só para escrever o '\n' quando necessario
    for(; s[i]!=' ' && s[i]!='\0';++i)
      putchar(s[i]);
    putchar('\n');
  }
 }
}

int main(){
escreve_separado("  sopa e arroz    ");
return 0;
}