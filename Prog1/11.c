#include <stdio.h>

int equal(int *arr1, int *arr2, int dim1, int dim2){
int i,res=1;
if(dim1!=dim2)
  return 0;
for(i=0; i<dim1;++i)
  if(arr1[i]!=arr2[i])
    res=0;
return res;
}

int main(){
int arr1[]={1,2,3,4}, arr2[]={1,5,3,4};
printf("%d",equal(arr1,arr2,4,4));
return 0;
}