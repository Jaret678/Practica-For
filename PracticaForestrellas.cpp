#include <stdio.h>
#include <stdlib.h>

int main()
{  
    int a,i,j,k;
    printf("Ingrese el numero de estrellas: ");
    scanf("%d",&a);
 for(i=1;i<=a;i++){
  for(k=a;k>i;k--)
   printf(" ");
   for(j=1;j<i+1;j++)
   printf(" *");
  printf("\n");
   }
}