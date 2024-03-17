//#include <iostream>
//using namespace std;
//
////默认情况下，c++编译器至少给一个类添加3个函数
//// 1．默认构造函数(无参，函数体为空)
//// 2．默认析构函数(无参，函数体为空)
//// 3．默认拷贝构造函数，对属性进行值拷贝
//
////构造函数调用规则如下：
//// 如果用户定义有参构造函数，c++不在提供默认无参构造，但是会提供默认拷贝构造
//// 如果用户定义拷贝构造函数，c++不会再提供其他构造函数
//
//class person {
//
//public:
//	// 构造函数(普通构造)
//	person() {
//		cout << "person的无参构造函数调用" << endl;
//	}
//	person(int age) {
//		m_age = age;
//		cout << "person的有参构造函数调用" << endl;
//	}
//
//	// 拷贝构造函数
//	person(const person& p) {
//		cout << "person的拷贝构造函数调用" << endl;
//		m_age = p.m_age;
//	}
//
//
//	// 析构函数
//	~person() {
//		cout << "person的析构函数调用" << endl;
//	}
//
//	int m_age;
//};
//
//int main() {
//
//
//
//	system("pause");
//
//	return 0;
//}