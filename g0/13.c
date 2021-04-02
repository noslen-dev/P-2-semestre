#include <stdio.h>
#include <string.h>
//14 min, sem consulta de nada
void string_op(char *s1, char *s2, char *s3){
int i;
if(strcmp(s1,s2)==0)
  strcpy(s3,"Conteudo Igual");
else
  if(strlen(s1)==strlen(s2))
    strcpy(s3,"Tamanho Igual");
  else
    if(strcmp(s1,s2)>0){
      strcpy(s3,s2);
      strcpy(s3+strlen(s2),s1);
    }
    else{
      strcpy(s3,s1);
      strcpy(s3+strlen(s1),s2);
    }
}

int main(){
char s3[100];
string_op("d","zo",s3);
puts(s3);
return 0;
}