#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void escreve_par(char *mat[][2], int n_lin){ //escreve os sinonimos
char **ptr=NULL;
for(ptr=*mat; ptr<*mat+n_lin*2-1; ++ptr)
  printf("%s   %s\n",*ptr,*(ptr+1));
}

char * verifica_sinonimo(char *mat[][2], int n_lin, char *palavra){ //indica o sinonimo para uma palavra
char **ptr=NULL;
for(ptr=*mat; ptr<*mat+n_lin*2; ++ptr)
  if(strcmp(palavra,*ptr)==0) //a palavra existe
    return ptr+1==*mat+n_lin*2 ? *(ptr-1) : *(ptr+1); //andamos para tras se for a ultima palavra
return NULL;
}

void par_sinonimos(char *mat[][2], int n_lin){ //ve se numa frase existem palavras na tabela e escreve o seu
char s[100],aux[100],*write; //sinonimo
int i,j;
printf("Digite uma frase: ");
gets(s);
for(i=0; i<strlen(s); ++i){
  for(; s[i]==' '; ++i);
  for(j=0; s[i]!=' ' && s[i]!='\0'; ++i,++j)
    aux[j]=s[i];
  aux[j]='\0';
  if((write=verifica_sinonimo(mat,n_lin,aux))!=NULL)
    printf("%s    %s\n",aux,write);
 }
}

int palavras_iguais(char  *mat[][2], int n_lin){
char **ptri=NULL,**ptrj=NULL;
for(ptri=*mat; ptri<*mat+n_lin*2; ++ptri)
  for(ptrj=*mat; ptrj<*mat+n_lin*2; ++ptrj)
    if(strcmp(*ptri,*ptrj)==0 && ptri!=ptrj)
      return 1;
return 0;
}

int main(){
char *s[][2]={{"estranho","bizarro"},{"desconfiar","suspeitar"},{"vermelho","encarnado"}
,{"duvidar","desconfiar"},{"carro","automovel"}};
printf("%d",palavras_iguais(s,5));

return 0;
}

