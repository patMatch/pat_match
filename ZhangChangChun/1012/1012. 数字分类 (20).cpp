#include<stdio.h>


int main()
{
	int num[1001] = {0}, a2 = 0, n, i;
	int count_a1 = 0, count_a2 = 0, count_a3 = 0, sum_a4 = 0, max_a5 = 0, sum_a2 = 0;
	int sign1 = 0, sign2 = 0, sign3 = 0, sign4 = 0, sign5 = 0;
	float ave_a4 = 0, count_a4 = 0;
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		scanf("%d", &num[i]);
	}
	for(i = 0; i < n; i++){
		if(num[i] % 5 == 0 && num[i] % 2 == 0){
			count_a1 += num[i];
			sign1 = 1;
		}
		else if(num[i] % 5 == 1){
			count_a2 += ((a2 % 2 == 0) ? num[i] : (-1 * num[i]));
			a2++;
			sign2 = 1;
		} 
		else if(num[i] % 5 == 2){
			count_a3++;
			sign3 = 1;
		} 
		else if(num[i] % 5 == 3){
			sum_a4 += num[i];
			count_a4++;
			sign4 = 1;
		}
		else if(num[i] % 5 == 4){
			if(num[i] > max_a5){
				max_a5 = num[i];
			}
			sign5 = 1;
		}
	} 
	ave_a4 = sum_a4 / count_a4;
	sign1 == 0 ? printf("N "): printf("%d ", count_a1);
	sign2 == 0 ? printf("N "): printf("%d ", count_a2);
	sign3 == 0 ? printf("N "): printf("%d ", count_a3);
	sign4 == 0 ? printf("N "): printf("%.1f ", ave_a4);
	sign5 == 0 ? printf("N") : printf("%d",  max_a5);
	return 0;
 }            
