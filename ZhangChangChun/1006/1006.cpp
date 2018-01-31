#include<stdio.h>

int main()
{
  int i, num, num_b, num_s, num_g;
  scanf("%d", &num);
  num_b = num / 100;
  num_s = num / 10 % 10;
  num_g = num % 10;
  for(i = 0; i < num_b; i++){
    printf("B");
  }
  for(i = 0; i < num_s; i++){
    printf("S");
  }
  for(i = 1; i <= num_g; i++){
    printf("%d", i);
  }
  return 0;
 } 
