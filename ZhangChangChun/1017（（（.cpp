#include<stdio.h>
#include<string.h>


int main()
{
  char a[1000];
  int b, i, num = 0;
  scanf("%s %d", &a, &b);
  if(strlen(a) == 1 && a[0] - '0' < b){
    printf("0 ");
    printf("%d\n", a[0] - '0');
  }else{
    for(i = 0; i < strlen(a); i++){
      if(i > 0 && num == 0 && a[i] - '0' < b){
        printf("0");
      }
      num = num * 10 + (a[i] - '0');
      if(num >= b){
        printf("%d", num / b);
        num = num % b;
      }
    }
    printf(" %d", num);    
  }
  
  
  
  return 0;
}
