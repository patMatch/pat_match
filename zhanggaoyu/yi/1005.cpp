#include<stdio.h>
#include <stdlib.h>

void sort(int *,int );//≈≈–Ú
int main()
{
    int *a;
    int n,i,t,j;
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        t=a[i];
        if(t==0)
            continue;
        while(t!=1){
            if(t%2==0)
                t/=2;
            else
                t=(3*t+1)/2;
            for(j=0;j<n;j++){
                if(a[j]==t){
                    a[j]=0;
                    break;
                }
            }

        }

    }
    sort(a,n);
    for(i=0;a[i]>0;i++){
        printf("%d%s",a[i],a[i+1]>0?" ":"");
    }

    // system("pause");
    return 0;
}

void sort(int *P,int K)
{
    int i,j,temp;
    for(i=0;i<K;i++)
        for(j=i+1;j<K;j++){
            if(P[i]<P[j]){
                temp=P[i];
                P[i]=P[j];
                P[j]=temp;
            }
        }
}