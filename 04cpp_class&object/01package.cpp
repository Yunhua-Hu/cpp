//#include <iostream>
//using namespace std;
//#include<string>
//
//// 01_1 ��װ������
//// Բ����
//const double PI = 3.14;
//
//// ���һ��Բ��, ��Բ���ܳ�
//// Բ���ܳ��Ĺ�ʽ : 2 * PI * �뾶
//
//// class �������һ����, ���������ŵľ���������
//class Circle {
//
//	// ����Ȩ��
//	// ����Ȩ��
//public:
//
//	// ����
//	// �뾶
//	int m_r;
//
//	// ��Ϊ
//	// ��ȡԲ���ܳ�
//	double calculateZC() {
//
//		return 2 * PI * m_r;
//	}
//};
//
//// student 
//// ���һ��ѧ���࣬������������ѧ��
//// ���Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ��
//class student {
//
//public:
//
//	// ���е����Ժ���Ϊ ����ͳһ��Ϊ��Ա
//	// ���� �ֳ� ��Ա���� ��Ա����
//	// ��Ϊ �ֳ� ��Ա���� ��Ա����
//	string m_name;  // ����
//	int m_ID;	// ѧ��
//
//	void showStudent() {
//
//		cout << "ѧ����������: " << m_name << endl;
//		cout << "ѧ����ѧ����: " << m_ID << endl;
//	}
//
//	// ������ͨ����Ϊ�����Ը�ֵ
//	void setName(string name) {
//		m_name = name;
//	}
//
//};
//
//// 01_2 ��װ�������
//
//// ����Ȩ��: ����Ȩ�� public    ��Ա ���ڿ��Է��� ����Ҳ���Է���
////			 ����Ȩ�� protected ��Ա ���ڿ��Է��� ���ⲻ���Է��� ���ӿ��Է��ʸ����еı�������
////			 ˽��Ȩ�� private	��Ա ���ڿ��Է��� ���ⲻ���Է��� ���Ӳ����Է��ʸ����еı�������
//
//class Person {
//
//public:
//	// ����Ȩ��
//	string m_Name; //����
//
//protected:
//	// ����Ȩ�� 
//	string m_Car; // ����
//
//private:
//	// ˽��Ȩ��
//	int m_Password; // ���п�����
//
//public:
//	void func() {
//		m_Name = "����";
//		m_Car = "������";
//		m_Password = 123456;
//	}
//};
//
//
//// 02 struct��class������
//// struct Ĭ��Ȩ��Ϊ����
//// class Ĭ��Ȩ��Ϊ˽��
//class C1 {
//	int m_A; // Ĭ��Ȩ�� ��˽��
//};
//
//struct C2 {
//	int m_A; // Ĭ��Ȩ�� �ǹ���
//};
//
//
//// 03 ��Ա��������Ϊ˽��
//// 1. �����Լ����ƶ�дȨ��
//// 2. ����д���Լ�����ݵ���Ч��
//
//// �������
//class Human {
//
//public:
//	// ��������
//	void setName(string name) {
//		m_Name = name;
//	}
//
//	// ��ȡ����
//	string getName() {
//		return m_Name;
//	}
//
//	// ��ȡ���� �ɶ���д ������޸�(��Χ:0~150)
//	int getAge() {
//		//m_Age = 0; // ��ʼ��Ϊ0��
//		return m_Age;
//	}
//
//	// ��������
//	void setAge(int age) {
//
//		if (age < 0 || age >150) {
//			m_Age = 0;
//			cout << "�������������" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//
//	// �������� ֻд
//	void setLover(string lover) {
//
//		m_Lover = lover;
//	}
//
//private:
//	// ���� �ɶ���д
//	string m_Name;
//	// ���� ֻ��
//	int m_Age;
//	// ���� ֻд
//	string m_Lover;
//};
//int main() {
//
//	// 01_1��װ������
//	// ͨ��Բ�� ���������Բ(����)
//	// ʵ���� (ͨ��һ���� ����һ������Ĺ���)
//	Circle cl;
//	// ��Բ��������Ը�ֵ
//	cl.m_r = 10;
//	cout << "Բ���ܳ�Ϊ: " << cl.calculateZC() << endl;
//
//	// student
//	student s1;
//	s1.m_ID = 1;
//	//s1.m_name = "����"; // ����
//	s1.setName("����");
//	s1.showStudent();
//
//	// 01_2��װ�������
//
//	// ����Ȩ��
//	Person p1;
//	p1.m_Name = "����";
//	//p1.m_Car = "����"; // ����Ȩ������, ��������ʲ���
//	//p1.m_Password = 123456; // ˽������, ��������ʲ���
//
//
//	// 02 struct��class������
//	C1 c1;
//	//c1.m_A; // �޷�����
//
//	C2 c2;
//	c2.m_A; // ���Է���
//
//	// 03 ��Ա��������Ϊ˽��
//	Human H;
//	H.setName("����");
//	cout << "����Ϊ: " << H.getName() << endl;
//
//	//H.m_Age = 18;  // ���ܲ���
//	H.setAge(1000);
//	cout << "����Ϊ: " << H.getAge() << endl;
//
//	H.setLover("��Ůʿ");
//	//cout << "����Ϊ: " << H.m_Lover << endl; // ֻд���ܷ���
//
//
//	system("pause");
//
//	return 0;
//}