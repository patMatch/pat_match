#include <iostream>  
#include <math.h>  
using namespace std;

/*
1013. 数素数 (20)
https://www.patest.cn/contests/pat-b-practise/1013
令Pi表示第i个素数。现任给两个正整数M <= N <= 104，请输出PM到PN的所有素数。

输入格式：

输入在一行中给出M和N，其间以空格分隔。

输出格式：

输出从PM到PN的所有素数，每10个数字占1行，其间以空格分隔，但行末不得有多余空格。

输入样例：
5 27
输出样例：
11 13 17 19 23 29 31 37 41 43
47 53 59 61 67 71 73 79 83 89
97 101 103
*/

int isprime(int n)  
{  
    int i;  
    for(i=2;i<=(int)sqrt((double)n);i++)  
        if(n%i==0)  
            return 0;  
    return 1;  
}  
  
int main()  
{  
    int i=2,j=0,n,m,k=0;     
    cin>>n>>m;  
  
    while(true)  
    {  
        if(isprime(i))  
        {  
            j++;  
            if(j>=n&&j<m)  
            {  
                k++;  
                if(k%10==0)  
                    cout<<i<<endl;  
                else  
                    cout<<i<<' ';  
            }  
            if (j==m)  
            {  
                cout<<i<<endl;  
                break;  
            }  
        }    
        i++;  
    }  
    return 0;  
}