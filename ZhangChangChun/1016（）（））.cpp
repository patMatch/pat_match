#include<stdio.h>
#include<string.h>


int main()
{
  char a[100], b[100], aSign, bSign;
  int numA = 0, sum = 0, numB = 0, i, count = 1, countB = 1;
  scanf("%s %c %s %c", &a, &aSign, &b, &bSign);
  for(i = 0; i < strlen(a); i++){
    if(a[i] == aSign){
      numA += (aSign - '0') * count;
      count *= 10;
    }
  }
  for(i = 0; i < strlen(b); i++){
    if(b[i] == bSign){
      numB += (bSign - '0') * countB;
      countB *= 10;
    }
  }
  sum = numA + numB;
  printf("%d\n", sum);
  return 0;
 } 
