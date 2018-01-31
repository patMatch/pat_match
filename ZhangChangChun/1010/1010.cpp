#include<stdio.h>


int main()
{
  int a[1000], b[1000], i, j;
  for(i = 0; i < 100; i++){
    scanf("%d %d", &a[i], &b[i]);
    if(b[i] == 0){
      break;
    }
  }
  for(j = 0; j <= i; j++){
    if(a[j] == 0 || b[j] == 0){
      printf("0 0\n");
    }else{
      printf("%d %d", a[j]*b[j], b[j] - 1);
      if(j == i - 1){
        printf("\n");
        break;
      }else{
        printf(" ");
      }
    }
  }
  
  
  return 0;
 } 
