#include <stdio.h>
#include <string.h>
void palavra(char *s, int n_lin, int n_col, char (*arr)[n_col]){ //38min
int i,j,message,ii,jj,find,index,linha,coluna,cnt;
for(i=message=0; i<n_lin;++i) //pesquisar por linhas
  for(j=0; j<n_col; ++j){
    for(jj=j,find=1,index=cnt=0; s[index]!='\0' && jj<n_col;++index,++jj,++cnt)
      if(s[index]!=arr[i][jj])
        find=0;
    if(find==1 && cnt==strlen(s)){
      ++message; //encontramos palavra
      linha=i;
      coluna=j;
      if(message==1) //Se encontrarmos a palavra pela primeira vez
        printf("A palavra %s surge:\n",s);
      printf("Ao longo da linha %d com inicio na coluna %d\n",linha,coluna);
    }
   }
for(j=0; j<n_col;++j)//pesquisar por colunas
  for(i=0; i<n_lin;++i){
    for(ii=i,find=1,index=cnt=0; s[index]!='\0' && ii<n_lin;++index,++ii,++cnt)
      if(s[index]!=arr[ii][j])
        find=0; 
    if(find==1 && cnt==strlen(s)){
      linha=i;
      coluna=j;
      if(message==0)//se por linhas nao encontramos
        printf("A palavra %s surge:\n");
      printf("Ao longo da coluna %d com inicio na linha %d\n",coluna,linha);
    }  
  }
}


int main(){
char puzzle[4][3]={{'a','n','a'},{'n','n','a'},{'a','n','m'},{"ana"}};
char puzzle_2[5][6]={{"eBaulq"},{"lerrss"},{"uwuqgr"},{"aallua"},{"pmhudj"}};
 char m[][6] =   {"eBaulq",
             "lerrss",
             "uluqgr",
             "aullua",
             "pahudj"};
palavra("lua",5,6,m);
return 0;
}