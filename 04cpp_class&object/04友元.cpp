//#include <iostream>
//using namespace std;
//#include <string>
//
////友元的关键字为 == friend ==
////
////友元的三种实现
//// 全局函数做友元
//// 类做友元
//// 成员函数做友元
//
//
//// 成员函数做友元时:这里必须先声明Building,再定义GoodGay,再定义Building
//// 声明Building是因为GoodGay会定义Building类变量
//// 先定义GoodGay是因为定义Building是要声明GoodGay中的成员函数是友元.
//
//class Building;
//// 类做友元
//class GoodGay {
//public:
//	void visit(); // 参观函数访问Building中的属性;
//
//	void visit2(); // 使其可以访问Building中私有成员
//
//	GoodGay();
//
//	Building* building;
//};
//
//class Building {
//
//	// goodGay全局函数是building的好朋友,可以访问其中的私有成员
//	friend void goodGay1(Building* building);
//
//	//// GoodGay类是building的好朋友,可以访问其中的私有成员
//	//friend class GoodGay;
//
//	// GoodGay类中的成员函数visit2是building的好朋友,可以访问其中的私有成员
//	friend void GoodGay::visit2();
//public:
//	// 类内写成员函数
//	Building() {
//
//		m_SittingRoom = "客厅";
//		m_BedRoom = "卧室";
//	}
//
//public:
//	string m_SittingRoom; // 客厅
//
//private:
//	string m_BedRoom; // 卧室
//
//};
//
//// 类外写成员函数
//
////Building::Building() {
////	m_SittingRoom = "客厅";
////	m_BedRoom = "卧室";
////}
//
//
//// 类外写成员函数
//GoodGay::GoodGay() {
//
//	// 创建一个建筑物的对象
//	building = new Building;
//}
//
//void GoodGay::visit() {
//
//	cout << "类友元 访问: " << building->m_SittingRoom << endl;
//
//	// cout << "类友元 访问: " << building->m_BedRoom << endl; 
//}
//
//// 全局函数
//void goodGay1(Building* building) {
//
//	cout << "全局函数友元 访问: " << building->m_SittingRoom << endl;
//
//	cout << "全局函数友元 访问: " << building->m_BedRoom << endl;
//
//
//}
//
//// 成员函数友元
//void GoodGay::visit2() {
//
//	cout << "成员函数友元 访问: " << building->m_SittingRoom << endl;
//
//	cout << "成员函数友元 访问: " << building->m_BedRoom << endl;
//}
//
//
//
//
//
//void test01() {
//	Building building;
//	goodGay1(&building);
//}
//
//void test02() {
//
//	GoodGay gg;
//
//	gg.visit2();
//}
//
//void test03() {
//
//	GoodGay gg;
//
//	gg.visit2();
//}
//
//
//int main() {
//
//
//	//test01();
//	//test02();
//	test03();
//	system("pause");
//
//	return 0;
//}