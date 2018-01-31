#include<stdio.h>
#include<string.h>
int main()
{
	char ku[][100] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	char num[100];
	int sign[10];
	int i, j, sum = 0, len;
	gets(num);
	len = strlen(num);
	for(i = 0; i < len; i++){
		sum += (num[i] - '0');
	}
	i = 0;
	while(sum != 0){
		sign[i] = sum % 10;
		sum /= 10;
		i++;
	}
	while(i > 0){
		printf("%s", ku[sign[i-1]]);
		if(i - 1 > 0){
			printf(" ");	
		}
		i--;
	}
	return 0;
}
