//#include <iostream>
//using namespace std;
//
//
//// ǳ���������
//class Person {
//
//public:
//	// ���캯��(��ͨ����)
//	Person() {
//		cout << "person���޲ι��캯������" << endl;
//	}
//	Person(int age, int height) {
//		m_Age = age;
//		m_Height = new int(height);
//		cout << "person���вι��캯������" << endl;
//	}
//
//	// �������캯��
//	Person(const Person& p) {
//		cout << "person�Ŀ������캯������" << endl;
//		m_Age = p.m_Age;
//		// ǳ����
//		m_Height = p.m_Height;  // ������Ĭ��ʵ�־������д���
//
//		//// ���
//		//m_Height = new int(*p.m_Height);
//	}
//
//
//	// ��������
//	~Person() {
//		// ��������, �����������������ͷŲ���
//		if (m_Height != NULL) {
//
//			delete m_Height;
//			m_Height = NULL;
//		}
//
//		cout << "person��������������" << endl;
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
//	cout << "p1������Ϊ: " << p1.m_Age << "���Ϊ: " << *p1.m_Height << endl;
//
//	Person p2(p1);
//
//	cout << "p2������Ϊ: " << p2.m_Age << "���Ϊ: " << *p2.m_Height << endl;
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
//// ����������ڶ������ٵģ�һ��Ҫ�Լ��ṩ�������캯������ֹǳ��������������