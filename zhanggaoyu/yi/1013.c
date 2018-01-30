#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int m,n;					//用来存储参数m n
	int cnt=0,flag=1;			//用来统计素数的个数
	int *a=NULL;				//用来存储所有的素数
	scanf("%d%d",&m,&n);
	a=(int*)malloc(n*sizeof(int));
	if (n>=1){
		a[0]=2;
	}
	for (int i = 3; cnt < n; i+=2){
		for (int j = 2; j <= sqrt(i); ++j){
			if (i%j==0){
				flag=0;
				break;
			}
		}
		if (flag){
			a[++cnt]=i;
		}
		flag=1;
	}
	cnt=0;
	for (int i = 0; i < n; ++i){
		if (i >= m-1){
			if (cnt!=0&&i!=n){
				printf(" ");
			}
			cnt++;
			printf("%d", a[i]);
			if (cnt==10){
				printf("\n");
				cnt=0;
			}
		}
	}

	// system("pause");
	return 0;
}
