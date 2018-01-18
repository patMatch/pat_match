#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int sum=0,n;
	char Output[10][5]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	char Input[100];
	int result[5];
	//printf("请输入数字\n");
	scanf("%s",Input);
	for (int i = 0; i < 5; ++i)
	{
		result[i]=-1;
	}
	for (int i = 0; Input[i]!='\0'; ++i){
		sum+=Input[i]-'0';
	}
	for (int i = 0; i < 5; ++i){
		n=sum%10;
		result[i]=n;
		sum=(sum-n)/10;
		if (0==sum){
			break;
		}
	}
	//printf("结果为：");
	for (int i = 4; i>=0; --i)
	{
		if (-1==result[i]){
			continue;
		}
		printf("%s", Output[result[i]]);
		if (0!=i){
			printf(" ");
		}
	}

	//system("pause");
	return 0;
}