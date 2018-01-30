#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char day[7][4]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
	char ch[4][61];
	char c;
	int len[4]={0};
	int flag=0;
	for (int i = 0; i < 4; ++i){
		scanf("%s",ch[i]);
	}
	for (int i = 0; i < 4; ++i){
		len[i] = strlen(ch[i]);
	}
	for (int i = 0; i < len[0]<len[1]?len[0]:len[1]; ++i){
		if (flag==0){
			if (ch[0][i]==ch[1][i]){
				c=ch[0][i];
				if (c>='A'&&c<='G'){
					printf("%s ", day[c-'A']);
					flag++;
				}
			}
		}else if (flag==1){
			if (ch[0][i]==ch[1][i]){
				c=ch[0][i];
				if (c>='0'&&c<='9'){
					printf("%02d:", c-'0');
					break;
				}else if(c>='A'&&c<='N'){
					printf("%d:", c-'A'+10);
					break;
				}
			}
		}
	}
	for (int i = 0; i < len[2]<len[3]?len[2]:len[3]; ++i){
		if (ch[2][i]==ch[3][i]&&(ch[2][i]>='a'&&ch[2][i]<='z'||ch[2][i]>='A'&&ch[2][i]<='Z')){
			printf("%02d\n", i);
			break;
		}
	}

	// system("pause");
	return 0;
}