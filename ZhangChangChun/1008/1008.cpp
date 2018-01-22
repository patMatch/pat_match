#include<stdio.h>

int main()
{
  int num[100], all, sign, i, count = 0;
  scanf("%d %d", &all, &sign);
  for(i = 0; i < all; i++){
    scanf("%d", &num[i]);
  }
  sign = sign % all;
  for(i = all - sign; i < all; i++){
    printf("%d", num[i]);
    count++;
    if(count != all){
      printf(" ");
    }
  }
  for(i = 0; i < all - sign; i++){
    printf("%d", num[i]);
    count++;
    if(count != all){
      printf(" ");
    }
  }
  return 0;
}
