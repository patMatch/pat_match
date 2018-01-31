#include <iostream>
#include <string>
#include <sstream>
#include <stack>
using namespace std;

/*
1006. 换个格式输出整数 (15)
https://www.patest.cn/contests/pat-b-practise/1006
让我们用字母B来表示“百”、字母S表示“十”，用“12...n”来表示个位数字n（<10），换个格式来输出任一个不超过3位的正整数。例如234应该被输出为BBSSS1234，因为它有2个“百”、3个“十”、以及个位的4。

输入格式：每个测试输入包含1个测试用例，给出正整数n（<1000）。

输出格式：每个测试用例的输出占一行，用规定的格式输出n。

输入样例1：
234
输出样例1：
BBSSS1234
输入样例2：
23
输出样例2：
SS123
*/

string generate_str(int n, int i) {
    string str = "";
    if(i==1) {
        stringstream ss;
        for(int j=1; j<=n; j++) {
            ss<<j;
        }
        str = ss.str();
    }else if(i==2) {
        for(int j=1; j<=n; j++) {
            str += "S";
        }
    }else {
        for(int j=1; j<=n; j++) {
            str += "B";
        }
    }
    return str;
}

int main() {
    int num, tmp, i;
    i = 1;
    string str;
    stack<string> s;
    cin>>num;
    while(num!=0) {
        tmp = num%10;
        s.push(generate_str(tmp, i));
        i++;
        num /= 10;
    }
    while(!s.empty()) {
        cout<<s.top();
        s.pop();
    }
}