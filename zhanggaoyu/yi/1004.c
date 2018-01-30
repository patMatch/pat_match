#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char name[11];
	char number[11];
	int grade;
}Stu;

int main(int argc, char const *argv[])
{
	Stu*stu=NULL;
	int n=0;
	int max=0,min=0,maxi=0,mini=0;
	// printf("ÇëÊäÈën\n");
	scanf("%d",&n);
	stu=(Stu*)malloc(n*sizeof(Stu));
	// printf("ÇëÊäÈëÑ§ÉúÐÅÏ¢\n");
	for (int i = 0; i < n; ++i){
		scanf("%s%s%d",&stu[i].name,&stu[i].number,&stu[i].grade);
	}
	max=min=stu[0].grade;
	for (int i = 0; i < n; ++i){
		if (max<stu[i].grade){
			max=stu[i].grade;
			maxi=i;
		}
		if (min>stu[i].grade){
			min=stu[i].grade;
			mini=i;
		}
	}
	printf("%s %s\n", stu[maxi].name,stu[maxi].number);
	printf("%s %s\n", stu[mini].name,stu[mini].number);

	
	// system("pause");
	return 0;
}
