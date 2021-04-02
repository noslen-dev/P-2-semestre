#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]){
char *ptr1, *ptr2;
if(argc==3 && strlen(argv[1])==strlen(argv[2]))
  for(ptr1=argv[1], ptr2=argv[2]; *ptr1!='\0'; ++ptr1,++ptr2)
    printf("%c%c",*ptr1,*ptr2);

return 0;
}