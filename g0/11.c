#include <stdio.h>
#include <string.h>
//2min 30seg,pensava k era para inverter kekw
void invert(char *s){
char tmp;
int i;
for(i=strlen(s)-1; i>=0; --i)
  putchar(s[i]); 
}



int main(){
invert("macaco");
return 0;
}