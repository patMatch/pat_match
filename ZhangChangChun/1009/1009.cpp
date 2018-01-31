#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int main()
{
  int count, i, j = 0;
  char num[81], num2[81][20];
  gets(num);
  for(i = 0; num[i] != '\0'; i++){
    if(num[i] !=' '){
      num2[count][j] = num[i];
      j++;
    }else{
      j = 0; 
      count++;
    }    
  }
  if(count == 0){
    puts(num);
  }else{
    for(i = count; i >= 0; i--){
      printf("%s", num2[i]);
      if(i != 0){
        printf(" ");
      }
    }
  }
  return 0;
}
