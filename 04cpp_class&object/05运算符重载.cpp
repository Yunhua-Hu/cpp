//#include <iostream>
//using namespace std;
//#include <string> 
//// 1.加号(+)运算符重载
//// 1.1 成员函数重载+号
//// 1.2 全局函数重载+号
//// 注意事项: 1. 对于内置的数据类型的表达式的运算符是不可能改变的
////           2. 不要滥用运算符重载
//
//// 2.左移(<<)运算符重载
//
//class Person {
//
//public:
//
//	//// 1.1 成员函数重载+号
//	//Person operator+(Person& p) {
//
//	//	Person temp;
//	//	temp.m_A = this->m_A + p.m_A;
//	//	temp.m_B = this->m_B + p.m_B;
//	//	return temp;
//	//}
//
//	// 2.1 成员函数重载<<号 p.operator<<(cout) 简化版本 p << cout
//	// 一般不会利用成员函数重载<<符,因为无法实现cout在左侧
//	//void operator<<(ostream cout) {
//	// 
//	//}
//
//
//	int m_A;
//	int m_B; 
//};
//
//// 1.2 全局函数重载+号
//Person operator+(Person& p1, Person &p2) {
//
//	Person temp;
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	return temp;
//}
//
//// 1.2 函数重载版本
//Person operator+(Person& p1, int num) {
//
//	Person temp;
//	temp.m_A = p1.m_A + num;
//	temp.m_B = p1.m_B + num;
//	return temp;
//}
//
//// 2.1 只能用全局函数重载<<
//// 本质: operator<< (cout, p)   简化 cout << p
//ostream & operator<<(ostream &cout, Person& p) {
//
//	cout << "m_A = " << p.m_A << " m_B = " << p.m_B;
//	return cout;
//}
//
//
//void test01() {
//
//	Person p1;
//	p1.m_A = 10;
//	p1.m_B = 10;
//
//	Person p2;
//	p2.m_A = 10;
//	p2.m_B = 10;
//
//	Person p3;
//	// 原始写法(本质调用)
//	// 成员函数: p3 = p1.operator+(p2);
//	// 全局函数: p3 = operator+(p1,p2);
//	p3 = p1 + p2;
//
//	// 运算符重载 也可呀发生函数重载
//
//	Person p4 = p1 + 10; // Person + int
//
//
//	cout << p3.m_A << " " << p3.m_B << endl;
//	cout << p4.m_A << " " << p4.m_B << endl;
//}
//
//void test02() {
//	Person p;
//	p.m_A = 10;
//	p.m_B = 10;
//	
//
//	cout << p << endl;
//}
//
//
//// 3.递增(++)运算符重载   (--)自己写
//// 3.1前置递增
//// 3.2后置递增
//
//// 4. 赋值(=)运算符重载
//
//// 自定义整型变量
//class MyInteger {
//
//	friend ostream& operator<<(ostream& cout, MyInteger myint);
//
//public:
//	MyInteger() {
//		m_Num = 0;
//	}
//	// 3.1 前置递增重载 返回引用
//	// 返回引用的原因:  一直对一个myint进行操作
//	// 如果不用引用,值返回
//	// cout << ++(++myint) << endl;   输出2
//	// cout << myint << endl;  输出1
//	// 因为第一行的++myint后返回的是一个新的myint
//	// 用引用才能一直对同一个myint进行操作
//	MyInteger& operator++() {
//		// +1
//		++m_Num;
//		// 返回自身
//		return  *this;
//	}
//
//
//	// 3.2 后置递增重载 返回值
//	// int 代表占位参数, 可以用于区分前后置递增
//	// 返回值是因为如果返回引用是temp的引用, temp是局部对象
//	// 这个对象结束了, temp就会被释放
//	MyInteger operator++(int) {
//
//		// 先 记录结果
//		MyInteger temp = *this;
//		// 后 递增
//		m_Num++;
//		// 返回结果
//		return temp;
//	}
//private:
//	int m_Num;
//};
//
//// 重载一下<< 用于输出MyInteger
//ostream& operator<<(ostream& cout, MyInteger myint) {
//
//	cout << myint.m_Num;
//	return cout;
//}
//
//void test03() {
//	MyInteger myint;
//
//	cout << ++(++myint) << endl;
//	cout << myint << endl;
//
//	cout << myint++ << endl;
//	cout << myint << endl;
//}
//
//
//// 4. 赋值(=)运算符重载
//class Person1 {
//
//public:
//	Person1(int age) {
//
//		m_Age = new int(age);
//	}
//
//	// 析构函数
//	// 
//	~Person1() {
//
//		if (m_Age != NULL) {
//
//			delete m_Age;
//			m_Age = NULL;
//		}
//
//	}
//
//	// 重载 赋值运算符
//	Person1& operator=(Person1& p) {
//
//		// 编译器是提供的浅拷贝
//		// 即: m_Age = p.m_Age;
//
//
//		// 应先判断是否有属性在堆区,如果有先释放干净,然后再深拷贝
//		if (m_Age != NULL) {
//
//			delete m_Age;
//			m_Age = NULL;
//		}
//
//		// 深拷贝
//		m_Age = new int(*p.m_Age);
//
//		// 返回对象本体
//		return *this;
//
//	}
//
//	int* m_Age;
//};
//
//void test04() {
//
//	Person1 p1(18);
//
//	Person1 p2(20);
//
//	Person1 p3(30);
//
//	p2 = p1; // 赋值操作 浅拷贝 可能会导致内存重复释放
//
//	cout << "p1的年龄为: " << *p1.m_Age << endl;
//
//	cout << "p2的年龄为: " << *p2.m_Age << endl;
//
//
//	p3 = p2 = p1;
//
//	cout << "p3的年龄为: " << *p3.m_Age << endl;
//
//}
//
//// 5. 关系运算符(== !=)重载
//class Person2 {
//public:
//	Person2(string name, int age) {
//
//		m_Name = name;
//		m_Age = age;
//	}
//
//	// 重载 == 号
//	bool operator==(Person2 &p) {
//		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age) {
//			return true;
//		}
//
//		return false;
//	}
//
//	// 重载 != 号
//	bool operator!=(Person2& p) {
//		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age) {
//			return false;
//		}
//
//		return true;
//	}
//	string m_Name;
//	int m_Age;
//};
//
//void test05() {
//
//	Person2 p1("Tom", 18);
//
//	Person2 p2("Tom", 18);
//
//	if (p1 == p2) {
//		cout << "相等" << endl;
//	}
//	else {
//		cout << "不相等" << endl;
//	}
//
//	if (p1 != p2) {
//		cout << "不相等" << endl;
//	}
//}
//
//// 6. 函数调用运算符( () )重载
//
//// 打印输出类
//class MyPrint {
//public:
//	void operator()(string test){
//		cout << test << endl;
//	}
//};
//
//// 用函数实现这个()的功能
//void myPrint02(string test) {
//	cout << test << endl;
//}
//
//
//void test06() {
//	MyPrint myprint;
//	myprint("love"); // 由于使用起来非常类似于函数调用, 因此称为仿函数.
//	myPrint02("love");
//}
//
//// 仿函数非常的灵活, 没有固定的写法
//// 加法类
//
//class MyAdd {
//public:
//	int operator()(int num1, int num2) {
//		return num1 + num2;
//	}
//};
//
//void test06_1() {
//	MyAdd myadd;
//	int ret = myadd(100, 100);
//	cout << "ret = " << ret << endl;
//
//	// 匿名函数对象
//	cout << MyAdd()(100, 100) << endl;
//}
//
//
//int main() {
//
//
//	//test01();
//	//test02();
//	//test03();
//	//test04();
//	//test05();
//	//test06();
//	test06_1();
//
//	return 0;
//}