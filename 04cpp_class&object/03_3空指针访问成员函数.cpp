//#include<iostream>
//using namespace std;
//
//// 空指针访问成员函数
//
//class Person {
//
//public:
//
//	void showClassName() {
//		cout << "Person" << endl;
//	}
//
//	void showPersonName() {
//
//		// 健壮性
//		if (this == NULL) {
//			return;
//		}
//
//		// 报错原因是因为传入的指针是为NULL
//		cout << "年龄: " << m_Age << endl; // m_Age 相当于是 this->m_Age
//	}
//
//	int m_Age;
//
//};
//
//void test() {
//
//	Person* p = NULL;
//
//	p->showClassName();
//
//	p->showPersonName();
//
//}
//
//
//int main() {
//
//
//	test();
//
//	system("pause");
//
//	return 0;
//}