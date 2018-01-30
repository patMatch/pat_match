#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
	char num[9];
	int score_mor; 			//德分
	int score_abil;			//才分
	int score_sum;			//总分
	int grade;
}STU;
int cmp(const void*a,const void*b);

int main(int argc, char const *argv[])
{
	STU*stu=NULL;
	int cnt_enro=0;										//表示被录取的人的数量
	int cnt_stu=0,score_max=0,score_min=0;
	scanf("%d%d%d", &cnt_stu,&score_min,&score_max);
	stu=(STU*)malloc(cnt_stu*sizeof(STU));
	for (int i = 0, j = 0, k = 0, l = 0,
	 m = 0; i < cnt_stu; ++i){
		scanf("%s%d%d",&stu[i].num,&stu[i].score_mor,&stu[i].score_abil);
		stu[i].score_sum = stu[i].score_mor + stu[i].score_abil;
		if ( stu[i].score_mor >= score_max && stu[i].score_abil >= score_max ){
			stu[i].grade=1;
			cnt_enro++;
		}else if ( stu[i].score_mor >= score_max && stu[i].score_abil >= score_min ){
			stu[i].grade=2;
			cnt_enro++;
		}else if ( stu[i].score_mor >= score_min && stu[i].score_abil >= score_min && stu[i].score_mor >= stu[i].score_abil ){
			stu[i].grade=3;
			cnt_enro++;
		}else if ( stu[i].score_mor >= score_min && stu[i].score_abil >= score_min ){
			stu[i].grade=4;
			cnt_enro++;
		}else{
			stu[i].grade=5;
		}
	}
	qsort(stu,cnt_stu,sizeof(STU),cmp);
	printf("%d\n", cnt_enro);
	for (int i = 0; i < cnt_enro; ++i){
		printf("%s %d %d\n", stu[i].num,stu[i].score_mor,stu[i].score_abil);
	}

	// system("pause");
	return 0;
}

int cmp(const void*a,const void*b)
{
	STU*pA = (STU*)a;
	STU*pB = (STU*)b;
	if (pA->grade != pB->grade){
		return pA->grade - pB->grade;
	}else if (pA->score_sum != pB->score_sum){
		return pB->score_sum - pA->score_sum;
	}else if(pB->score_mor != pA->score_mor){
		return pB->score_mor - pA->score_mor;
	}else{
		return strcmp(pA->num,pB->num);
	}
}