#include<stdio.h>
#include <stdlib.h>
 
int main(int argc, char const *argv[])
{
    int n;
    int cntp=0,cntt=0,cnta=0;
    char **s;
    int p1,p2,l;
    // printf("«Î ‰»În\n");
    scanf("%d",&n);
    s=(char**)malloc(n*sizeof(char*));
    for (int i = 0; i < n; ++i){
    	s[i]=(char*)malloc(100*sizeof(char));
    }
    // printf("«Î ‰»Î◊÷∑˚¥Æ\n");
    for (int i = 0; i < n; ++i){
        scanf("%s",s[i]);
    }
    for(int i = 0; i < n; ++i){
       	cntp = cnta = cntt = 0;
        for(int j = 0; ; ++j){
            if(s[i][j] == 'P'){ 
            	cntp++;
            	p1=j;
            }
            else if(s[i][j] == 'A'){ 
            	cnta++;
            }
            else if(s[i][j] == 'T'){ 
            	cntt++;
            	p2=j;
            }else if(s[i][j] == '\0'){
            	l=j;
            	break;
            }
        }
        // printf("p%d a%d t%d\n", cntp,cnta,cntt);
        // printf("p1 %d p2%d l%d\n", p1,p2,l);
        if(cntp+cnta+cntt==l&&cntp==1&&cntt==1&&cnta!=0&&p1*(p2-p1-1)==l-p2-1){
        	printf("YES\n");
        }
       	else{
       		printf("NO\n");
       	}
    }
    
    // system("pause");
    return 0;
}
