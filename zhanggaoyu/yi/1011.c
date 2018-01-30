#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	long **a;
	int n=0;
	// printf("请输入n\n");
	scanf("%d",&n);
	a=(long**)malloc(n*sizeof(long*));
	for (int i = 0; i < n; ++i){
		a[i]=(long*)malloc(3*sizeof(long));
	}
	for (int i = 0; i < n; ++i){
		scanf("%ld%ld%ld",&a[i][0],&a[i][1],&a[i][2]);
	}
	for (int i = 0; i < n; ++i){
		printf("Case #%d: ", i+1);
		if (a[i][0] > a[i][2] - a[i][1]){				//因为  +  会有最大值溢出的可能，所以不妨用    -    的
			printf("true\n");
		}else{
			printf("false\n");
		}
	}

	// system("pause");
	return 0;
}
