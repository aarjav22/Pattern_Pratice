/*
      1
      2 3
      4 5 6
      7 8 9 10
*/
#include <stdio.h>

int main(){

  int n,i,j,count=0;
  printf("enter n : ");
  scanf("%d", &n);

  for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
      count++;
      printf("%d ",count);
    }printf("\n");
  }
}
