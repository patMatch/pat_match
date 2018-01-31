#include <iostream>
#include <iomanip>
using namespace std;

/*
1012. 数字分类 (20)
https://www.patest.cn/contests/pat-b-practise/1012
给定一系列正整数，请按要求对数字进行分类，并输出以下5个数字：

A1 = 能被5整除的数字中所有偶数的和；
A2 = 将被5除后余1的数字按给出顺序进行交错求和，即计算n1-n2+n3-n4...；
A3 = 被5除后余2的数字的个数；
A4 = 被5除后余3的数字的平均数，精确到小数点后1位；
A5 = 被5除后余4的数字中最大数字。
输入格式：

每个输入包含1个测试用例。每个测试用例先给出一个不超过1000的正整数N，随后给出N个不超过1000的待分类的正整数。数字间以空格分隔。

输出格式：

对给定的N个正整数，按题目要求计算A1~A5并在一行中顺序输出。数字间以空格分隔，但行末不得有多余空格。

若其中某一类数字不存在，则在相应位置输出“N”。

输入样例1：
13 1 2 3 4 5 6 7 8 9 10 20 16 18
输出样例1：
30 11 2 9.7 9
输入样例2：
8 1 2 4 5 6 7 9 16
输出样例2：
N 11 2 N 9
*/

int main() {
    int n, i, tmp, sum1, sum2, len2, len3, sum4, len4, max5;
    sum1=sum2=len2=len3=sum4=len4=max5 = 0;
    bool flag2 = true;
    cin>>n;
    for(i=0; i<n; i++) {
        cin>>tmp;
        if(tmp%5==0 && tmp%2==0) {
            sum1 += tmp;
        }
        if(tmp%5==1) {
            len2++;
            sum2 = flag2 ? sum2+tmp : sum2-tmp;
            flag2 = !flag2;
        }
        if(tmp%5==2) {
            len3++;
        }
        if(tmp%5==3) {
            len4++;
            sum4 += tmp;
        }
        if(tmp%5==4) {
            if(tmp>max5) {
                max5 = tmp;
            }
        }
    }
    if(sum1) {
        cout<<sum1<<" ";
    }else {
        cout<<"N ";
    }
    if(len2) {
        cout<<sum2<<" ";
    }else {
        cout<<"N ";
    }
    if(len3) {
        cout<<len3<<" ";
    }else {
        cout<<"N ";
    }
    if(len4) {
        double x = sum4/(double)len4;
        printf("%0.1lf ", x);
    }else {
        cout<<"N ";
    }
    if(max5) {
        cout<<max5;
    }else {
        cout<<"N";
    }
}

