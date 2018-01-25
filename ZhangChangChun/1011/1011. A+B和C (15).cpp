#include<stdio.h>


int main()
{
	int i, sign;
	double a, b, sum, c;
	scanf("%d", &sign);
	for(i = 0; i < sign; i++){
		scanf("%lf%lf%lf", &a, &b, &c);
		if((a + b) > c){
			printf("Case #%d: true\n", i + 1);
		}else{
			printf("Case #%d: false\n", i + 1);
		}
	}
	
	
	return 0;
 } 
