/*
  GGGGGGG
   EEEEE
    CCC
     A
*/
#include <stdio.h>
int main(){
  int i,j,n;
  printf("Enter n : ");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    for(j=1;j<i;j++){
      printf(" ");
    }for(j=1;j<=2*(n-i)+1;j++){
      printf("%c",64+2*(n-i)+1);
    }printf("\n");
  }
}
