#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int n=0;
	// printf("请输入三位整数n\n");
	scanf("%d",&n);
	for (int i = 0; i < n/100; ++i){
		printf("B");
	}
	for (int i = 0; i < n/10%10; ++i){
		printf("S");
	}
	for (int i = 0; i < n%10; ++i){
		printf("%d", i+1);
	}
	printf("\n");
	
	// system("pause");
	return 0;
}