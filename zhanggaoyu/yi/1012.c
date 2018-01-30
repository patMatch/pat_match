#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	int a[5]={0};
	int cnt[5]={0};
	int n,m=0;
	scanf("%d",&m);
	for(int i = 0; i < m; ++i){
		scanf("%d",&n);
		if (n%10==0){
			a[0]+=n;
			cnt[0]++;
		}
		if (n%5==1){
			a[1]+=pow(-1,cnt[1])*n;
			cnt[1]++;
		}
		if (n%5==2){
			a[2]++;
			cnt[2]++;
		}
		if (n%5==3){
			a[3]+=n;
			cnt[3]++;
		}
		if (n%5==4){
			if (a[4]<n){
				a[4]=n;
			}
			cnt[4]++;
		}
	}
	for (int i = 0; i < 5; ++i){
		if (i!=0){
			printf(" ");
		}
		if (0==a[i]&0==cnt[i]){
			printf("N");
		}else if (i==3){
			printf("%.1f", 1.0*a[i]/cnt[i]);	
		}else{
			printf("%d", a[i]);
		}
	}
	
	// system("pause");
	return 0;
}
