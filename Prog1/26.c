#include <stdio.h>

void Insert_string_arr(char *s1, char *s2, char* arr){ 
int i,j;
for(i=0; i<50 && s1[i]!='\0';++i)
  arr[i]=s1[i];
for(j=0; i<50 && s2[j]!='\0';++i,++j)
  arr[i]=s2[j];
arr[i]='\0';
}


int main(int argc, char *argv[]){
char (*ptr)[50], arr[10][50]={'\0'}, **end=argv+argc-1;
if(argc-1<=20 && (argc-1)%2==0){
   for(++argv, ptr=arr; argv<end && ptr<arr+10; ++argv,++ptr,--end)
      Insert_string_arr(*argv,*end,*ptr);
  for(ptr=arr; ptr<arr+argc-1;++ptr)
    puts(*ptr);
}
return 0;
}