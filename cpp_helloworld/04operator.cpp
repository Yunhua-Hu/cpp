//#include <iostream>
//using namespace std;
//
//int main() //为避免多个main 无法执行所以在其后加了个数字,运行时记得删除.
//{
//	// 算术运算符
//	// 加减乘除
//	int a1 = 10;
//	int b1 = 3;
//	
//	cout << a1 + b1 << endl;
//	cout << a1 - b1 << endl;
//	cout << a1 * b1 << endl;
//	cout << a1 / b1 << endl; // 两整数相除 得整数 且 b1不能为0.
//
//	double d1 = 0.5;
//	double d2 = 0.22;
//	cout << d1 / d2 << endl; // 两小数可相除 可得小数
//
//	// 取模(取余)
//	cout << a1 % b1 << endl; // b1 不能为0
//							// 两个小数之间不能取模,一整一小也不行.
//	// 自增自减
//	int a2 = a1++; // 先计算表达式后自增
//	int a3 = ++a1; // 先自增后计算表达式
//	cout << a2 << endl;
//	cout << a3 << endl;
//	
//	// 赋值运算符
//	// =
//	// +=
//	// -=
//	// *=
//	// /=
//	// %=
//
//	// 比较运算符
//	// == 相等于
//	cout << (a1 == b1) << endl; // 注意加括号,后面都一样.
//	// != 不等于
//	// < 
//	// >
//	// <=
//	// >=
//
//	// 逻辑运算符
//	// ! 非
//	cout << !a1 << endl;
//	// && 与
//	cout << (a1 && b1) << endl; // 同真为真,其余为假
//	// || 或
//	cout << (a1 || b1) << endl; // 同假为假,其余为真
//
//	system("pause");
//
//	return 0;
//}