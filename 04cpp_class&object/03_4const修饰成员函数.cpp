//#include<iostream>
//using namespace std;
//
//// const ���γ�Ա����
//
//// ��������
//// 1.��Ա�������const�����ǳ�Ϊ�������Ϊ������
//// 2.�������ڲ������޸ĳ�Ա����
//// 3.��Ա��������ʱ�ӹؼ���mutable���ڳ���������Ȼ�����޸�
//
//// ������
//// 1.��������ǰ��const�Ƹö���Ϊ������
//// 2.������ֻ�ܵ��ó�����
//
//// ������
//class Person {
//
//public:
//
//	// thisָ��ı�����һ��ָ�볣����ָ���ָ�򲻿��޸�
//	// ��: Person *const this;
//	// �ڳ�Ա�����������const, ���ε���thisָ��, ��ָ��ָ���ֵҲ�������޸�.
//	// ��: const Person * const this;
//	void showPerson() const {
//		this->m_B = 10;
//		//this->m_A = 100;
//		//this = NULL; // thisָ�벻�����޸�ָ���ָ��
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
//// ������
//void test02() {
//
//	const Person p; // �ڶ���ǰ��const, ��Ϊ������
//	//p.m_A = 100;
//	p.m_B = 100; // m_B ������ֵ, �ڳ�������Ҳ���޸�
//
//	p.showPerson();
//	// p.func(); // ������ �����Ե�����ͨ��Ա����, ��Ϊ��ͨ��Ա���������޸�����
//}
//int main() {
//
//	test01();
//
//
//	system("pause");
//	return 0;
//}