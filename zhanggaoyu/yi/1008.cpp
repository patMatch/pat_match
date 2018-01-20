#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int m=0,n=0,l;
	int*a=NULL;
	int i=0;
	scanf("%d%d",&m,&n);
	n%=m;
	a=(int*)malloc(m*sizeof(int));
	for (int i = 0; i < m; ++i){
		scanf("%d",a+i);
	}
	l=m;
	do{
		if (n==i){
			m=0;
		}
		printf("%d", a[m-n+i]);
		i++;
		if (i!=l){
			printf(" ");
		}
	}while(i<l);

	// system("pause");
	return 0;
}