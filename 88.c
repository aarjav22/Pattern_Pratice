/*
          *
          *  *
          *     *
          *        *
          *  *  *  *  *
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
  int i,j,n;
  printf("Enter n : ");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      if(i==j || j==1 || i==n)
        printf("* ");
      else
        printf("  ");
    }printf("\n");
  }
}
