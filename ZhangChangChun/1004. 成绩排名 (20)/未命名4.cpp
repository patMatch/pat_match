#include<stdio.h>
#include<string.h>
struct stua{
	char name[11];
	char num[11];
	int gor; 
};
struct stua stu[100];
int main()
{
	int i, n, max = 1, mix = -1, max_num, mix_num;
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		scanf("%s%s%d", &stu[i].name, &stu[i].num, &stu[i].gor);
	}
	max = stu[0].gor;
	mix = stu[0].gor;
	for(i =0; i < n; i++){
		if(stu[i].gor > max){
			max = stu[i].gor;
			max_num = i;
		}
		if(stu[i].gor < mix){
			mix = stu[i].gor;
			mix_num = i;
		}
	}
	printf("%s %s\n", stu[max_num].name, stu[max_num].num);
	printf("%s %s\n", stu[mix_num].name, stu[mix_num].num);
	return 0;
 }
