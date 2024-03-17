//#include <iostream>
//using namespace std;
//#include <string>
//// 类对象作为类成员
//
//class Phone {
//
//public:
//	string m_PName;
//};
//class Person {
//
//public:
//	
//	// Phone m_Phone = pName; 隐式转换法
//	Person(string name, Phone pName):m_Name(name), m_Phone(pName) {
//
//
//	}
//
//	// 姓名
//	string m_Name;
//
//	// 手机
//	Phone m_Phone;
//
//
//};
//
//
//
//void test01() {
//
//
//	Person p("张三", "苹果MAX");
//	cout << p.m_Name << "拿着" << p.m_Phone.m_PName << endl;
//}
//
////当类中成员是其他类对象时，我们称该成员为 对象成员
////构造的顺序是 ：先调用对象成员的构造，再调用本类构造
////析构顺序与构造相反
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