#include <stdio.h>
//48 min
void Insert_string_arr(char *s1, char *s2, char* arr){ //insere duas strings num array
int i,j;
for(i=0; i<50 && s1[i]!='\0';++i)
  arr[i]=s1[i];
for(j=0; i<50 && s2[j]!='\0';++i,++j)
  arr[i]=s2[j];
arr[i]='\0';
}


int main(int argc, char *argv[]){
char (*ptr)[50], arr[10][50]={'\0'}; //ptr vai apontar para o primeiro elemento de arr
if(argc-1<=20 && (argc-1)%2==0){ // argc-1 para nao contar com o nome do programa
   for(++argv, ptr=arr; *argv!=NULL && ptr<arr+10; argv+=2,++ptr)//argv de dois em dois(agrupar em grupos de dois)
      Insert_string_arr(*argv,*(argv+1),*ptr);//insere as strings no arr[0]...arr[n-1]
  for(ptr=arr; ptr<arr+argc-1;++ptr) //escrever tudo
    puts(*ptr);
}
return 0;
}