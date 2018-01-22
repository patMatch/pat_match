#include<stdio.h>
#include<string.h>
int main()
{
	char a[4][60];
	char c[7][4]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
	int i, j, len, len1;
	char b[2], d=-1, k=0; 
	for(i=0; i<4; i++)
	{
		scanf("%s", a[i]);
	}
	len = strlen(a[0]);
	len1 = strlen(a[1]);
	for(i=0; i<len; i++)
	{
		if(a[0][i]>='A' && a[0][i]<='Z')
		{
			for(j=0; j<len1; j++)
			{
				if(a[0][i] == a[1][j])
				b[k++]=a[0][i];
			}
		}
	}
	printf("%s ", c[b[0]-'A']);
	printf("%d:", b[1]-'A'+10);
	len = strlen(a[2]);
	len1 = strlen(a[3]);
	for(i=0; i<len; i++)
	{
		for(j=0; j<len1; j++)
		{
			if(a[2][i] == a[3][j])
			d=j;
		}
		if(d!=-1)
		break;
	}
	if(d/10==0)
	printf("0%d", d);
	else
	printf("%d", d);
	return 0;
}