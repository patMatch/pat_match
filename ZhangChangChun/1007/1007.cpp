#include<stdio.h>

#include<math.h>



int IsPrime(int num);
int main()
{
  int num, i, x = 0, y = 3, count;
  scanf("%d", &num);
  for(i = 4; i <= num; i++){
    if(IsPrime(i)){
      x = y;
      y = i;
      if(y - x == 2){
        count++;
      }
    }
  }
  printf("%d", count);
  
  return 0;
}

int IsPrime(int num){
  int sign;
  for(sign = 2; sign < num; sign++){
    if(num % sign == 0){
      return 0;
    }
  }
  return 1;
}
