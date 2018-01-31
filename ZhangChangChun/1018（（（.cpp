#include<stdio.h>



int main()
{
  int n, i, a[3] = {0};
  int aj = 0, ab = 0, ac = 0, bj = 0, bb = 0, bc =0;
  char j, y, max, maxb;
  scanf("%d", &n);
  getchar();
  for(i = 0; i < n; i++){
    scanf("%c %c", &j, &y);
    getchar();
    if(j == 'C'){
      if(y == 'J'){
        a[0] += 1;
        ac++;
      }
      if(y == 'C'){
        a[1] += 1;
      }
      if(y == 'B'){
        bb++;
      }
    }else if(j == 'J'){
      if(y == 'B'){
        a[0] += 1;
        ab++;
      }
      if(y == 'J'){
        a[1] += 1;
      }
      if(y == 'C'){
        bc++;
      }
    }else if(j == 'B'){
      if(y == 'C'){
        a[0] += 1;
        ab++;
      }
      if(y == 'B'){
        a[1] += 1;
      }
      if(y == 'J'){
        bj++;
      }
    }
  }
  if(aj > ac){
    if(aj > ab){
      max = 'J';
    }else{
      max = 'B';
    }
  }else{
    if(ac > ab){
      max = 'C';
    }else{
      max = 'B';
    }
  }
  
  if(bj > bc){
    if(bj > bb){
      maxb = 'J';
    }else{
      maxb = 'B';
    }
  }else{
    if(bc > bb){
      maxb = 'C';
    }else{
      maxb = 'B';
    }
  }
  
  if(aj == ac == ab == max || aj == ac == max || aj == ab == max){
    max = 'B';
  }else if(max == ac == ab){
    max = 'B';
  }
  if(bj == bc == bb == maxb || maxb ==  bj == bc || maxb == bj == bb){
    maxb = 'B';
  }else if(bc == bb == maxb){
    maxb = 'B';
  }
  printf("%d %d %d\n", a[0], a[1], n - a[0] - a[1]);
  printf("%d %d %d\n", n - a[0] - a[1], a[1], a[0]);
  printf("%c %c\n", max, maxb);
  return 0;
}
