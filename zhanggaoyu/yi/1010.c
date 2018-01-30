#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int a,b,flag=0;
	while(scanf("%d%d",&a,&b)!=EOF){
		if (a*b){
			if (flag){
				printf(" ");
			}else{
				flag=1;
			}
			printf("%d %d", a*b,b-1);
		}
	}
	if (!flag){
		printf("0 0");
	}
	printf("\n");

	system("pause");
	return 0;
}
