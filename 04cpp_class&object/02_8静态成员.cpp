//#include<iostream>
//using namespace std;
//
//
//// ��̬��Ա���� �뾲̬��Ա����
//class Person{
//public:
//
//	// 1. ���ж��󶼹���ͬһ������
//	// 2. �ڱ���׶η����ڴ�
//  // 3. ���������������ʼ��
//
//	static int m_A;
//	int m_B;
//	// ��̬��Ա����
//	// ���ж�����ͬһ������
//	// ��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
//	static void func() {
//		m_A = 100; // ��̬�����ɷ��ʾ�̬��Ա����
//		// m_B = 100; // ��̬�������ɷ��ʷǾ�̬��Ա����, �޷��������Ǹ�����ı���
//		cout << "static void func����" << endl;
//	}
//
//	// ��̬��Ա�����뾲̬��Ա����Ҳ�з���Ȩ��
//private:
//	static int m_B;
//
//	static void func1() {
//		cout << "static void func����" << endl;
//	}
//};
// 
//int Person::m_A = 100; // �����ʼ��
//
//
////���ж��󶼹���ͬһ������
//void test() {
//	Person p;
//	cout << p.m_A << endl;
//
//	Person p2;
//	p2.m_A = 200;
//	cout << p.m_A << endl;
//}
//
//// ��̬��Ա���������ַ��ʷ�ʽ
//void test01() {
//
//	// ��̬��Ա���� ������ĳ��������, ���ж��󶼹���ͬһ������
//	// ���
//
//	// 1.ͨ��������з���
//
//	Person p;
//	cout << p.m_A << endl;
//
//	// 2.ͨ���������з���
//
//	cout << Person::m_A << endl;
//
//	//cout << Person::m_B << endl; // �����޷�����˽��Ȩ��
//}
//
//// ��̬���������ַ��ʷ�ʽ
//void test02() {
//	// 1.ͨ������������
//	Person p;
//	p.func();
//
//	// 2.ͨ����������
//	Person::func();
//
//	// Person::func1();
//}
//
//int main() {
//
//
//	//test();
//
//	//test01();
//
//	test02();
//	system("pause");
//
//	return 0;
//}