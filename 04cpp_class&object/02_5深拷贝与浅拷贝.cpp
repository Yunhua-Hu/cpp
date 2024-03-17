//#include <iostream>
//using namespace std;
//
//
//// 浅拷贝与深拷贝
//class Person {
//
//public:
//	// 构造函数(普通构造)
//	Person() {
//		cout << "person的无参构造函数调用" << endl;
//	}
//	Person(int age, int height) {
//		m_Age = age;
//		m_Height = new int(height);
//		cout << "person的有参构造函数调用" << endl;
//	}
//
//	// 拷贝构造函数
//	Person(const Person& p) {
//		cout << "person的拷贝构造函数调用" << endl;
//		m_Age = p.m_Age;
//		// 浅拷贝
//		m_Height = p.m_Height;  // 编译器默认实现就是这行代码
//
//		//// 深拷贝
//		//m_Height = new int(*p.m_Height);
//	}
//
//
//	// 析构函数
//	~Person() {
//		// 析构代码, 将堆区开辟数据做释放操作
//		if (m_Height != NULL) {
//
//			delete m_Height;
//			m_Height = NULL;
//		}
//
//		cout << "person的析构函数调用" << endl;
//	}
//
//	int m_Age;
//	int* m_Height;
//};
//
//
//void test01() {
//	Person p1(18, 160);
//
//	cout << "p1的年龄为: " << p1.m_Age << "身高为: " << *p1.m_Height << endl;
//
//	Person p2(p1);
//
//	cout << "p2的年龄为: " << p2.m_Age << "身高为: " << *p2.m_Height << endl;
//
//}
//int main() {
//
//	test01();
//
//
//	system("pause");
//
//	return 0;
//}
//// 如果属性有在堆区开辟的，一定要自己提供拷贝构造函数，防止浅拷贝带来的问题