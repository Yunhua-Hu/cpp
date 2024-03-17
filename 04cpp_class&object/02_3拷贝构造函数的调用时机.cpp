//#include <iostream>
//using namespace std;
//
//
//// 拷贝构造函数调用时机
//
//// 1.使用一个已经创建完毕的对象来初始化一个新对象
//// 2.值传递的方式给函数参数传值
//// 3.以值方式返回局部对象(貌似这个已经被优化了)
//
//class Person {
//
//public:
//	// 构造函数(普通构造)
//	Person() {
//		cout << "Person的无参构造函数调用" << endl;
//	}
//	Person(int age) {
//		m_Age = age;
//		cout << "Person的有参构造函数调用" << endl;
//	}
//
//	// 拷贝构造函数
//	Person(const Person& p) {
//		cout << "Person的拷贝构造函数调用" << endl;
//		m_Age = p.m_Age;
//	}
//
//
//	// 析构函数
//	~Person() {
//		cout << "Person的析构函数调用" << endl;
//	}
//
//
//	int m_Age;
//};
//
//
//// 1.使用一个已经创建完毕的对象来初始化一个新对象
//void test01() {
//	Person p1(20);
//	Person p2(p1);
//
//	cout << "p2的年龄为: " << p2.m_Age << endl;
//}
//// 2.值传递的方式给函数参数传值
//void work(Person p) {
//
//}
//
//void test02() {
//	Person p;
//	work(p);
//}
//
//// 3.以值方式返回局部对象(2022已经优化)
//Person work02() {
//	Person p1;
//	cout << (int)&p1 << endl;
//	return p1;
//}
//
//void test03() {
//	Person p = work02();
//	cout << (int)&p << endl;
//}
//
//int main() {
//
//	//test01();
//	test02();
//	test03();
//
//	system("pause");
//
//	return 0;
//}