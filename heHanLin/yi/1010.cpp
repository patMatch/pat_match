#include <iostream>
#include <vector>
using namespace std;

/*
1010. 一元多项式求导 (25)
https://www.patest.cn/contests/pat-b-practise/1010
设计函数求一元多项式的导数。（注：xn（n为整数）的一阶导数为n*xn-1。）

输入格式：以指数递降方式输入多项式非零项系数和指数（绝对值均为不超过1000的整数）。数字间以空格分隔。

输出格式：以与输入相同的格式输出导数多项式非零项的系数和指数。数字间以空格分隔，但结尾不能有多余空格。注意“零多项式”的指数和系数都是0，但是表示为“0 0”。

输入样例：
3 4 -5 2 6 1 -2 0
输出样例：
12 3 -10 1 6 0
*/

int main() {
    int x, y, i, j;
    vector<int> arr;
    char c;
    while(cin>>x>>y) {
        i = x*y;
        j = y-1;
        if(i!=0) {
            arr.push_back(i);
            arr.push_back(j);
        }
    }
    int len = (int)arr.size();
    if(len==0) {
        cout << "0 0" << endl;  
        return 0;
    }
    for(i=0; i<len; i++) {
        cout<<arr[i];
        if(i<len-1) {
            cout<<" ";
        }
    }
    
}