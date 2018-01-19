#include<stdio.h>

void sort(int *,int );
int main()
{
    int a[100];
    int n,i,c,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=a[i];
        if(c==0)
            continue;
        while(c!=1)
        {
            if(c%2==0)
                c/=2;
            else
                c=(3*c+1)/2;
            for(j=0;j<n;j++)
            {
                if(a[j]==c)
                {
                    a[j]=0;
                    break;
                }
            }
        }
    }
    sort(a,n);
    for(i=0;a[i]>0;i++)
    {
        printf("%d",a[i]);
        if(a[i+1] > 0){
        	printf(" ");
		} 
    }
}
void sort(int *a,int num)             
{
    int i,j,temp;
    for(i=0;i<num;i++)
        for(j=i+1;j<num;j++)
        {

            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
}
