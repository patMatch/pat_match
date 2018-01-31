#include<stdio.h>




int main()
{
	int qqq = 0;
	int c, b, i, a, counta = 0, count = 0, prime[10000] = {0};
	scanf("%d %d", &c, &b);
	for(i = 2; i < 10000; i++){
		for(a = 2; a < i; a++){
			if(i % a == 0){
				break;
			}	
		}
		if(i == a){
			prime[counta++] = i;
		}
	}
	for(i = c - 1; i < b; i++){
		printf("%d", prime[i]);
		if(count != b - c && count % 10 != 9){
			printf(" ");
		}else{
			printf("\n");
		}
		count++;
	}
	return 0;
}
