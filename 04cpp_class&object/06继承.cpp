//#include <iostream>
//using namespace std;
//
//// 1.继承
//// 继承是面向对象三大特性之一
//// 继承的好处: 减少重复代码
//// 语法: class 子类 : 继承方式 父类
//// 子类也称为派生类
//// 父类也称为基类
//
///*普通实现*/
// // 普通页面实现
//// Java 页面
//class Java {
//
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++...(公共分类列表)" << endl;
//	}
//	void content()
//	{
//		cout << "JAVA学科视频" << endl;
//	}
//
//};
//
//// Python 页面
//class Python {
//
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++...(公共分类列表)" << endl;
//	}
//	void content() {
//		cout << "Python学科视频" << endl;
//	}
//
//};
//
//// C++ 页面
//class CPP {
//
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++...(公共分类列表)" << endl;
//	}
//	void content() {
//		cout << "C++学科视频" << endl;
//	}
//
//};
//
//
//// 继承实现
//// 公共页面类
//class BasePage {
//
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++...(公共分类列表)" << endl;
//	}
//};
//
//// Java页面
//class Java : public BasePage{
//public:
//	void content() {
//		cout << "Java学科视频" << endl;
//	}
//};
//
//// Python页面
//class Python : public BasePage {
//public:
//	void content() {
//		cout << "Python学科视频" << endl;
//	}
//};
//
//// C++页面
//class CPP : public BasePage {
//public:
//	void content() {
//		cout << "CPP学科视频" << endl;
//	}
//};
//
//void test01() {
//	cout << "Java页面如下: " << endl;
//	Java java;
//	java.header();
//	java.footer();
//	java.left();
//	java.content();
//
//	cout << "-------------------" << endl;
//	cout << "Python页面如下: " << endl;
//	Python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//
//	cout << "-------------------" << endl;
//	cout << "C++页面如下: " << endl;
//	CPP cpp;
//	cpp.header();
//	cpp.footer();
//	cpp.left();
//	cpp.content();
//
//}
//
//
//
//// 2.继承方式 讲义里有张图很清楚
//// 公共继承
//// 保护继承
//// 私有继承
//
//// 父类
//class Base1 {
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//// 公共继承
//class Son1 : public Base1 {
//public:
//
//	void func() {
//		m_A = 10;  // 父类中的公共权限成员 到子类中依然是公共权限
//		m_B = 10;  // 父类中的保护权限成员 到子类中依然是保护权限
//		//m_C = 10; // 父类中的私有权限成员 子类访问不到
//	}
//};
//
//// 保护继承
//class Son1_2 : protected Base1 {
//public:
//
//	void func() {
//		m_A = 10;  // 父类中的公共权限成员 到子类中变为保护权限
//		m_B = 10;  // 父类中的保护权限成员 到子类中变为保护权限
//		//m_C = 10; // 父类中的私有权限成员 子类访问不到
//	}
//};
//
//// 私有继承
//class Son1_3 : private Base1 {
//public:
//
//	void func() {
//		m_A = 10;  // 父类中的公共权限成员 到子类中变为私有权限
//		m_B = 10;  // 父类中的保护权限成员 到子类中变为私有权限
//		//m_C = 10; // 父类中的私有权限成员 子类访问不到
//	}
//};
//
//class GrandSon3 : public Son1_3 {
//public:
//	void func() {
//		//m_A = 100; // 在Son1_3中 m_A变为私有权限, 即使是其儿子也无法访问
//		//m_B = 100; // 在Son1_3中 m_A变为私有权限, 即使是其儿子也无法访问
//	}
//};
//
//void test02() {
//	Son1 s1;
//	s1.m_A = 100;
//	//s1.m_B = 100; // 到Son1中 m_B是保护权限 类外访问不到
//
//	Son1_2 s2;
//	//s2.m_A = 100; // 在Son1_2中 m_A变为保护权限, 因此类外访问不到
//	//s2.m_B = 100; // 在Son1_2中 m_B变为保护权限, 因此类外访问不到
//
//	Son1_3 s3;
//	//s3.m_A = 100; // 在Son1_3中 m_A变为私有权限, 因此类外访问不到
//	//s3.m_B = 100; // 在Son1_3中 m_B变为私有权限, 因此类外访问不到
//}
//
//
//
//// 3.继承中的对象模型
//class Base2 {
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son2 : public Base2 {
//public:
//
//	int m_D;
//};
//
//// 利用开发人员命令提示工具查看对象模型
//// 跳转盘符E:
//// 跳转文件路径 cd 具体路径下
//// 查看命名
//// cl /d1 reportSingleClassLayout类名 文件名
//
//void test03() {
//	// 16
//	// 父类中所有的非静态成员属性都会被子类继承下去
//	// 父类中私有成员属性 是被编译器给隐藏了, 因此访问不到, 但是确实被继承下去了.
//	cout << "Size of son2 = " << sizeof(Son2) << endl;
//}
//
//
//
//// 4.继承中的构造和析构顺序
//// 子类继承父类后，当创建子类对象，也会调用父类的构造函数
//// 问题：父类和子类的构造和析构顺序是谁先谁后？
//
//class Base3 {
//public:
//	Base3() {
//		cout << "Base3构造函数!" << endl;
//	}
//
//	~Base3() {
//		cout << "Base3析构函数!" << endl;
//	}
//};
//
//class Son3 : public Base3 {
//public:
//	Son3() {
//		cout << "Son3构造函数!" << endl;
//	}
//
//	~Son3() {
//		cout << "Son3析构函数!" << endl;
//	}
//};
//
//void test04() {
//	//Base3 b;
//	// //继承中 先调用父类构造函数，再调用子类构造函数，析构顺序与构造相反
//	Son3 s;
//}
//
//// 5.继承中同名成员处理方式
//// 当子类与父类出现同名的成员，如何通过子类对象，访问到子类或父类中同名的数据呢？
//// 访问子类同名成员   直接访问即可
//// 访问父类同名成员   需要加作用域
//
//class Base4 {
//public:
//	Base4() {
//		m_A = 100;
//	}
//
//	void func() {
//		cout << "Base4 - func()调用" << endl;
//	}
//
//	void func(int a) {
//		cout << "Son4 - func()调用" << endl;
//	}
//	int m_A;
//};
//
//class Son4 : public Base4 {
//public:
//	Son4() {
//		m_A = 200;
//	}
//
//	void func() {
//		cout << "Son4 - func()调用" << endl;
//	}
//
//	int m_A;
//};
//
//void test05() {
//	Son4 s;
//	cout << "Son4的m_A = " << s.m_A << endl;
//	// 如果通过子类对象 访问到父类中同名成员, 需要加作用域
//	cout << "Base4下的m_A = " << s.Base4::m_A << endl;
//
//	s.func(); // 直接调用 调用的是子类中的成员函数
//	s.Base4::func(); // 调用父类 需要作用域
//
//	// 如果子类中出现和父类同名的成员函数, 子类的同名成员会隐藏掉父类中所有的同名成员函数, 包括重载的
//	// 如果想访问到父类中被隐藏的同名成员函数 需要加作用域
//	s.Base4::func(100);
//
//}
//// 总结:
//// 1)子类对象可以直接访问到子类中同名成员
//// 2)子类对象加作用域可以访问到父类同名成员
//// 3)当子类与父类拥有同名的成员函数，子类会隐藏父类中同名成员函数，加作用域可以访问到父类中同名函数
//
//
//
//// 6.继承同名静态成员处理方式
//// 问题：继承中同名的静态成员在子类对象上如何进行访问？
//// 静态成员和非静态成员出现同名，处理方式一致
//// 访问子类同名成员   直接访问即可
//// 访问父类同名成员   需要加作用域
//
//class Base5 {
//public:
//
//	static int m_A;
//
//	static void func() {
//		cout << "Base5 的静态成员函数调用" << endl;
//	}
//
//	static void func(int a) {
//		cout << "Base5 的静态成员重载函数调用" << endl;
//	}
//};
//
//int Base5::m_A = 100;
//
//class Son5 : public Base5 {
//public:
//	
//	static int m_A;
//	static void func() {
//		cout << "Son5 的静态成员函数调用" << endl;
//	}
//};
//
//int Son5::m_A = 200;
//
//
//// 同名静态成员属性
//// 同名静态成员函数
//void test06() {
//
//	// 1)同名静态成员
//	// 1.1)静态成员:通过对象访问
//	cout << "通过对象来访问" << endl;
//	Son5 s;
//	cout << "Son5的m_A = " << s.m_A << endl;
//	// 如果通过子类对象 访问到父类中同名成员, 需要加作用域
//	cout << "Base5下的m_A = " << s.Base5::m_A << endl;
//
//	// 1.2)静态成员:通过类名来访问
//	cout << "通过类名来访问" << endl;
//	cout << "Son5的m_A = " << Son5::m_A << endl;
//	// 如果通过子类对象 访问到父类中同名成员, 需要加作用域
//	// 第一个::代表通过类名的方式访问 第二个::代表访问父类作用域下
//	cout << "Base5下的m_A = " << Son5::Base5::m_A << endl;
//
//	// 2)同名静态成员函数
//	// 2.1)静态成员函数:通过对象访问
//	cout << "通过对象来访问" << endl;
//	Son5 s1;
//	s1.func();
//	// 如果通过子类对象 访问到父类中同名成员, 需要加作用域
//	s1.Base5::func();
//
//	// 2.2)静态成员函数:通过类名来访问
//	cout << "通过类名来访问" << endl;
//	Son5::func();
//	// 如果通过子类对象 访问到父类中同名成员, 需要加作用域
//	// 第一个::代表通过类名的方式访问 第二个::代表访问父类作用域下
//	Son5::Base5::func();
//
//	// 如果子类中出现和父类同名的成员函数, 子类的同名成员会隐藏掉父类中所有的同名成员函数, 包括重载的
//	// 如果想访问到父类中被隐藏的同名成员函数 需要加作用域
//	s.Base5::func(100);
//}
//// 总结：
//// 同名静态成员处理方式和非静态处理方式一样，只不过静态有两种访问的方式（通过对象 和 通过类名）
//
//
//// 7.多继承语法
//// C++允许一个类继承多个类
//// 语法：class 子类 ：继承方式 父类1 ， 继承方式 父类2...
//// 多继承可能会引发父类中有同名成员出现，需要加作用域区分
//// C++实际开发中不建议用多继承
//
//class Base6 {
//public:
//	Base6() {
//		m_A = 100;
//	}
//
//	int m_A;
//};
//
//class Base6_1 {
//public:
//	Base6_1() {
//		m_A = 100;
//	}
//
//	int m_A;
//};
//
//// 子类需继承Base1和Base2
//// 语法: class 子类 : 继承方式 父类1, 继承方式 父类2;
//class Son6 :public Base6, public Base6_1 {
//public:
//	Son6() {
//		m_C = 300;
//		m_D = 400;
//	}
//
//	int m_C;
//	int m_D;
//};
//
//void test07() {
//	Son6 s;
//	cout << "Son6的大小" << sizeof(Son6) << endl;
//
//	// 当父类中出现同名成员, 需要加作用域区分
//	cout << "m_A = " << s.Base6::m_A << endl;
//	cout << "m_A = " << s.Base6_1::m_A << endl;
//}
//// 总结：多继承中如果父类中出现了同名情况，子类使用时候要加作用域
//
//
//// 8.菱形继承概念:
////​ 两个派生类继承同一个基类
//// 又有某个类同时继承者两个派生类
////​ 这种继承被称为菱形继承，或者钻石继承
//
//// 动物类
//class Animal {
//public:
//	int m_Age;
//};
//
//// 利用虚继承 解决菱形继承的问题
//// 继承之前 加上关键字 virtual 变为虚继承
//// Animal类称为 虚基类
//// 羊类
//class Sheep : virtual public Animal {};
//
//// 驼类
//class Tuo : virtual public Animal {};
//
//// 羊驼类
//class SheepTuo : public Sheep, public Tuo {};
//
//void test08() {
//	SheepTuo st;
//	st.Sheep::m_Age = 18;
//	st.Tuo::m_Age = 28;
//
//	// 当菱形继承,有两个父类拥有相同的数据, 需要加以作用域区分
//	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
//	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
//	cout << "st.m_Age = " << st.m_Age << endl;
//	// 有些数据只需要一份就可以, 菱形继承导致数据有两份, 资源浪费
//}
//// 总结：
//// 菱形继承带来的主要问题是子类继承两份相同的数据，导致资源浪费以及毫无意义
//// 利用虚继承可以解决菱形继承问题
//
//
//
//int main() {
//	
//	//test01();
//	//test02();
//	//test03();
//	//test04();
//	//test05();
//	//test06();
//	//test07();
//	test08();
//	return 0;
//}