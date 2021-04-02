#include <stdio.h>
#include <string.h>
void indica_mes(){
int i;
char mes[100],*mes_eng=NULL;
char *pt[]={"janeiro","fevereiro","março","abril","maio","junho","julho","agosto","setembro","outobro",
"novembro","dezembro"};
char *eng[]={"january","february","march","april","may","june","july","august","september","outober",
"november","dezember"};
printf("Digite um mes em portugues ");
gets(mes);
for(i=0; i<12; ++i)
  if(strcmp(pt[i],mes)==0)
    mes_eng=eng[i];
if(mes_eng!=NULL)
  puts(mes_eng);
else
  puts("mes invalido");

}

void indica_mes_2(){
char **ptr;
char mes[100],*mes_eng=NULL;
char *meses[2][12]={{"janeiro","fevereiro","marco","abril","maio","junho","julho","agosto","setembro","outobro",
"novembro","dezembro"},{"january","february","march","april","may","june","july","august","september","outober",
"november","dezember"}};

printf("Digite um mes em portugues ");
gets(mes);
for(ptr=*meses;ptr<*meses+12 && !mes_eng ;++ptr)
  if(strcmp(*ptr,mes)==0)
    mes_eng=*(meses[1]+(ptr-*meses));
if(mes_eng)
  puts(mes_eng);
else
  puts("mes invalido");
}



int main(){
indica_mes_2();

}