#include<stdio.h>
  int res = 0, n, a, b, num[4], i = 0, sign, j;



  int kkk(int n){
    i = 0; 
    while(i < 4){
      num[i++] = n % 10;
      n /= 10;
    }
    for(i = 0; i < 3; i++){
      for(j = i + 1; j < 4; j++){
        if(num[i] < num[j]){
          sign = num[i];
          num[i] = num[j];
          num[j] = sign;
        }
      }
    }
    a = num[0] * 1000 + num[1] * 100 + num[2] * 10 + num[3];
    b = num[3] * 1000 + num[2] * 100 + num[1] * 10 + num[0];  
    if(a == b){
      printf("%04d - %04d = 0000\n", a, b);
      return 3;
    }
  }
int main()
{
  scanf("%d", &n);
  int ggg;
  while(res != 6174){
    ggg = kkk(n);
    if(ggg == 3){
      return 0;
    }
    res = a - b;
    printf("%04d - %04d = %d\n", a, b, res);
    n = res;
  }
  
  return 0;
}
