//#include <iostream>
//using namespace std;
//
//// 1.构造函数的分类及调用
//// 分类:
//// 按照参数分类  无参构造(默认构造)和有参构造
//// 按照类型分类  普通构造 拷贝构造
//
//class Person {
//
//public:
//	// 构造函数(普通构造)
//	Person() {
//		cout << "Person的无参构造函数调用" << endl;
//	}
//	Person(int a) {
//		age = a;
//		cout << "Person的有参构造函数调用" << endl;
//	}
//
//	// 拷贝构造函数
//	Person(const Person &p) {
//		cout << "Person的拷贝构造函数调用" << endl;
//		age = p.age;
//	}
//
//
//	// 析构函数
//	~Person() {
//		cout << "Person的析构函数调用" << endl;
//	}
//
//
//	int age;
//};
//
//// 调用
//void test01() {
//	// 1.括号法
//	Person p1; // 默认构造函数调用
//	Person p2(10); // 有参构造函数
//	Person p3(p2); // 拷贝构造函数
//	
//	// 注意事项
//	// 调用默认构造函数时候, 不要加()
//	// 因为编译器会认为下面这行代码是一个函数的声明, 不会认为在创建对象
//	// Person p1();
//
//	//cout << "年龄: " << p2.age << endl;
//	//cout << "年龄: " << p3.age << endl;
//
//	// 2.显示法
//	Person p11; // 默认构造函数调用
//	Person p21 = Person(10); // 有参构造函数
//	Person p31 = Person(p21); // 拷贝构造函数
//
//	Person(10); // 匿名对象 特点: 当前行执行结束后, 系统会立即回收掉匿名对象.
//	cout << "aaaa" <<endl;
//
//	// 注意事项2
//	// 不要利用拷贝构造函数 初始化匿名对象 
//	// 编译器会认为 Person (p3) 等价于 Person p3; 认为是个对象声明;
//	// Person(p3);
//
//
//
//	// 3.隐式转换法
//	Person p4 = 10; // 相当于 Person p4 = Person(10);  有参构造
//	Person p5 = p4; // 拷贝构造函数
//	cout << &p4 << endl;
//	cout << &p5 << endl;
//}
//
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}