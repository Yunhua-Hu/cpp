//#include <iostream>
//using namespace std;
//
//// 01函数的默认参数
//
//// 如果我们自己传入数据, 就用自己的数据, 如果没有, 那么用默认值.
//// 语法: 返回值类型 函数名 (形参 = 默认值) {}
//int func(int a, int b = 20, int c = 30) {
//
//	return a + b + c;
//}
//
//// 注意事项:
//// 1. 如果某个位置已经有了默认参数, 那么从这个位置往后, 从左到右都必须有默认值.
//// 2. 如果函数的声明有了默认参数, 函数实现就不能有默认参数.
//// 声明和实现只能有一个默认参数
////int func2(int a = 10, int b = 10); // 声明
////
////int func2(int a = 20, int b = 20) {
////	return a + b;
////}
//
//
//// 02函数占位参数
//// 语法: 返回值类型 函数名(数据类型){}
//
//// 占位参数
//// 目前阶段的占位参数, 我们还用不到, 后面课程中会用到
//// 占位参数 还可以有默认参数 void func01(int a, int = 10){}
//void func01(int a, int) {
//	cout << "this is func" << endl;
//}
//
//// 03_1函数重载
//// 作用: 可以让函数名相同, 提高复用性
//// 函数重载满足条件：
//// 1.同一个作用域下
//// 2.函数名称相同
//// 3.函数参数类型不同 或者 个数不同 或者 顺序不同
//// 注意 : 函数的返回值不可以作为函数重载的条件
///* eg: int func001(int a) {
//		cout << "func001(int a)的调用" << endl;
//		}*/
//void func001() {
//	cout << "func001的调用" << endl;
//}
//
//void func001(int a) {
//	cout << "func001(int a)的调用" << endl;
//}
//
//void func001(double a) {
//	cout << "func001(double a)的调用" << endl;
//}
//
//void func001(int a,double b) {
//	cout << "func001(int a,double b)的调用" << endl;
//}
//
//void func001(double a,int b) {
//	cout << "func001(double a,int b)的调用" << endl;
//}
//
////  03_2函数重载的避坑
//// 1.引用作为重载的条件
//void func002(int &a) {
//	cout << "func002(int &a)的调用" << endl;
//}
//
//void func002(const int& a) {
//	cout << "func002(const int &a)的调用" << endl;
//}
//
//// 2. 函数重载碰到默认参数
//void func003(int a) {
//	cout << "func002(int a)的调用" << endl;
//}
//
//void func003(int a,int b = 10) {
//	cout << "func002(int a,int b = 10)的调用" << endl;
//}
//
//
//
//int main() {
//
//	// 01函数的默认参数
//	cout << func(10,30) << endl;
//
//	// 02函数占位参数
//	func01(10, 10); // 第二个10必须要,函数才能运行
//
//	// 03_1函数重载
//	/*作用：函数名可以相同，提高复用性
//	函数重载满足条件：
//	•同一个作用域下
//	•函数名称相同
//	•函数参数类型不同 或者 个数不同 或者 顺序不同
//	注意: 函数的返回值不可以作为函数重载的条件*/
//	func001();
//	func001(10);
//	func001(0.1);
//	func001(10, 0.1);
//	func001(0.1, 10);
//
//	// 03_2函数重载的避坑
//	// 1. 引用作为重载的条件
//	int a = 10;
//	func002(a);  // 输出func002(int &a)
//	func002(10); // 输出func002(const int &a),因为int &a =10 不合法.
//	// 2. 函数重载碰到默认参数
//	//func003(10);  // 当函数重载碰到默认参数,会出现二义性,尽量避免.
//
//	system("pause");
//
//	return 0;
//}