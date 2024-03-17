//#include <iostream>
//using namespace std;
//
//// 引用作函数参数
//
//// 1.交换函数值传递
//void mySwap01(int a, int b) {
//
//	int temp = a;
//	a = b;
//	b = temp;
//	}
//
//// 2.交换函数地址传递
//void mySwap02(int *a,int *b) {
//
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//// 3.交换函数引用传递
//void mySwap03(int &a, int &b) {
//
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//// 引用作函数的返回值
//// 1. 不要返回局部变量的引用
//int& test001() {
//	int a = 10; // 局部变量存放在四区中的栈区
//	return a;
//}
//
//// 2. 返回静态变量的引用可以
//int& test002() {
//	static int a = 10; // 静态变量, 存放在全局区, 全局区上的数据在程序结束后系统释放.
//	return a;
//}
//
//void func(int& ref) {
//	ref = 100; // ref是引用，转换为*ref = 100
//}
//
////引用使用的场景，通常用来修饰形参
//void showValue(const int& v) { // const 防止修改实参
//	//v += 10;
//	cout << v << endl;
//}
//
//
//int main() {
//
//	// 引用
//	// 作用：  给变量起别名
//	// 语法：  数据类型& 别名 = 原名
//
//	int a = 10;
//	// 创建引用
//	int& b = a;
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	b = 20;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	// 引用注意事项
//	// 1.引用必须初始化.  int &b; 错误
//	// 2.引用一旦初始化后,就不可以更改了.
//	int c = 30;
//	b = c; // 赋值操作, 而不是更改引用
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//
//	// 引用作函数参数
//	// 作用：函数传参时，可以利用引用的技术让形参修饰实参
//	// 优点：可以简化指针修改实参
//
//	c = 10;
//	mySwap01(a, c); // 值传递,形参不会修饰实参
//	mySwap02(&a, &b); // 地址传递
//	mySwap03(a, c); // 引用传递, 形参会修饰实参
//
//	// 引用作函数的返回值
//	int& ref = test001();
//
//	// 这里2022 貌似是返回的野指针
//	cout << "ref = " << ref << endl; // 第一次可以打印正确的数字,是因为编译器做了保留
//	cout << "ref = " << ref << endl; // 第二次这个数据就不再保留了(x86)
//
//	int& ref1 = test002();
//
//	cout << "ref1 = " << ref1 << endl;
//	cout << "ref1 = " << ref1 << endl;
//
//	// 2. 函数的调用可以作为左值
//	test002() = 1000;
//	
//	cout << "ref1 = " << ref1 << endl; 
//	cout << "ref1 = " << ref1 << endl; 
//
//
//	// 引用的本质:引用的本质在c++内部实现是一个指针常量.
//	int a2 = 10;
//
//	//自动转换为 int* const ref = &a; 指针常量是指针指向不可改，也说明为什么引用不可更改
//	int& ref2 = a2;
//	ref2 = 20; //内部发现ref是引用，自动帮我们转换为: *ref = 20;
//
//	cout << "a2:" << a2 << endl;
//	cout << "ref2:" << ref2 << endl;
//
//	func(a2);
//	
//	// 常量引用
//	// 使用场景: 用来修饰形参,防止误操作
//
//	 int a3 = 10;
//	
//	//加入const就可以了，编译器优化代码，int temp = 10; const int& ref = temp;
//	const int& ref = 10;  // 引用必须引一块合法的内存空间.
//	// ref = 20; //加入const之后变为只读,不可以修改
//
//	showValue(a3);
//	
//	system("pause");
//
//	return 0;
//}