#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int n=0;
	int cnt=0;
	//printf("请输入n：\n");
	scanf("%d",&n);
	if (n<0||n>1000){
		//printf("输入非法\n");
		return 0;
	}else{
		while(n!=1){
			if (n%2==0){
				n/=2;
			}else{
				n=(3*n+1)/2;
			}
			cnt++;
		}
		printf("%d\n", cnt);
	}

	//system("pause");
	return 0;
}