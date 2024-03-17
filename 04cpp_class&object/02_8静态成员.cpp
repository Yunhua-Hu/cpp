//#include<iostream>
//using namespace std;
//
//
//// 静态成员变量 与静态成员函数
//class Person{
//public:
//
//	// 1. 所有对象都共享同一份数据
//	// 2. 在编译阶段分配内存
//  // 3. 类内声明，类外初始化
//
//	static int m_A;
//	int m_B;
//	// 静态成员函数
//	// 所有对象共享同一个函数
//	// 静态成员函数只能访问静态成员变量
//	static void func() {
//		m_A = 100; // 静态函数可访问静态成员变量
//		// m_B = 100; // 静态函数不可访问非静态成员变量, 无法区分是那个对象的变量
//		cout << "static void func调用" << endl;
//	}
//
//	// 静态成员变量与静态成员函数也有访问权限
//private:
//	static int m_B;
//
//	static void func1() {
//		cout << "static void func调用" << endl;
//	}
//};
// 
//int Person::m_A = 100; // 类外初始化
//
//
////所有对象都共享同一份数据
//void test() {
//	Person p;
//	cout << p.m_A << endl;
//
//	Person p2;
//	p2.m_A = 200;
//	cout << p.m_A << endl;
//}
//
//// 静态成员变量有两种访问方式
//void test01() {
//
//	// 静态成员变量 不属于某个对象上, 所有对象都共享同一份数据
//	// 因此
//
//	// 1.通过对象进行访问
//
//	Person p;
//	cout << p.m_A << endl;
//
//	// 2.通过类名进行访问
//
//	cout << Person::m_A << endl;
//
//	//cout << Person::m_B << endl; // 类外无法访问私有权限
//}
//
//// 静态函数有两种访问方式
//void test02() {
//	// 1.通过对象来访问
//	Person p;
//	p.func();
//
//	// 2.通过类名访问
//	Person::func();
//
//	// Person::func1();
//}
//
//int main() {
//
//
//	//test();
//
//	//test01();
//
//	test02();
//	system("pause");
//
//	return 0;
//}