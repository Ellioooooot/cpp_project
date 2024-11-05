#include <iostream>
#include <string>
using namespace std;

int calculate_sum(int a, int b) {
    return a + b;
}
// 添加乘法函数
int calculate_multiply(int a, int b) {
    return a * b;
}
// 添加减法函数
int calculate_substract(int a, int b) {
    return a - b;
}
// 添加除法函数
int calculate_substract(int a, int b) {
    if(b==0){
	    return 0;
    }
    else
	    return a/b;
}


int main() {
    int num1, num2;
    cout << "请输入两个数字：" << endl;
    cin >> num1 >> num2;

    cout << "其和为：" << calculate_sum(num1, num2) << endl;
    cout << "其积为：" << calculate_multiply(num1, num2) << endl;
    cout << "其差为：" << calculate_substract(num1, num2) << endl;
    return 0;
}
