#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
float media=0;
for(++argv; *argv!=NULL;++argv)
  media+=atoi(*argv);
printf("%.2f",media/(argc-1));

return 0;
}