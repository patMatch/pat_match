#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	int n=0,flag=1;
	int cnt=0;
	int p=2,q;
	// printf("请输入正整数N\n");
	scanf("%d",&n);
	for (int i = 3; i <= n; i+=2){
		flag=1;
		for (int j = 2; j <= sqrt(i); ++j){
			if (0==i%j){
				flag=0;
				break;
			}
		}
		if (flag){
			q=p;p=i;
			// printf("%d ", i);
			if (2==p-q){
				cnt++;
			}
		}
	}
	printf("%d\n", cnt);

	// system("pause");
	return 0;
}