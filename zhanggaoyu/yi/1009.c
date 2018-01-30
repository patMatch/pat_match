#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char ch[81]={' '};
	gets(ch+1);
	for (int i = strlen(ch)-1; i >= 0; --i){
		if (ch[i]==' '){
			ch[i]='\0';
			printf("%s", ch+i+1);
			if (i!=0){
				printf(" ");
			}
		}
	}

	// system("pause");
	return 0;
}
