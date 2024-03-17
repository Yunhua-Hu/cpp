//#include<iostream>
//using namespace std;
//
//// const 修饰成员函数
//
//// 常函数：
//// 1.成员函数后加const后我们称为这个函数为常函数
//// 2.常函数内不可以修改成员属性
//// 3.成员属性声明时加关键字mutable后，在常函数中依然可以修改
//
//// 常对象：
//// 1.声明对象前加const称该对象为常对象
//// 2.常对象只能调用常函数
//
//// 常函数
//class Person {
//
//public:
//
//	// this指针的本质是一个指针常量，指针的指向不可修改
//	// 即: Person *const this;
//	// 在成员函数后面加上const, 修饰的是this指向, 让指针指向的值也不可以修改.
//	// 即: const Person * const this;
//	void showPerson() const {
//		this->m_B = 10;
//		//this->m_A = 100;
//		//this = NULL; // this指针不可以修改指针的指向
//	}
//	void func() {
//		m_A = 100;
//	}
//
//	int m_A;
//	mutable int m_B;
//};
//
//void test01() {
//
//	Person p;
//	p.showPerson();
//
//}
//
//// 常对象
//void test02() {
//
//	const Person p; // 在对象前加const, 变为常对象
//	//p.m_A = 100;
//	p.m_B = 100; // m_B 是特殊值, 在常对象下也可修改
//
//	p.showPerson();
//	// p.func(); // 常对象 不可以调用普通成员函数, 因为普通成员函数可以修改属性
//}
//int main() {
//
//	test01();
//
//
//	system("pause");
//	return 0;
//}