//#include <iostream>
//using namespace std;
//#include <string> 
//// 1.�Ӻ�(+)���������
//// 1.1 ��Ա��������+��
//// 1.2 ȫ�ֺ�������+��
//// ע������: 1. �������õ��������͵ı��ʽ��������ǲ����ܸı��
////           2. ��Ҫ�������������
//
//// 2.����(<<)���������
//
//class Person {
//
//public:
//
//	//// 1.1 ��Ա��������+��
//	//Person operator+(Person& p) {
//
//	//	Person temp;
//	//	temp.m_A = this->m_A + p.m_A;
//	//	temp.m_B = this->m_B + p.m_B;
//	//	return temp;
//	//}
//
//	// 2.1 ��Ա��������<<�� p.operator<<(cout) �򻯰汾 p << cout
//	// һ�㲻�����ó�Ա��������<<��,��Ϊ�޷�ʵ��cout�����
//	//void operator<<(ostream cout) {
//	// 
//	//}
//
//
//	int m_A;
//	int m_B; 
//};
//
//// 1.2 ȫ�ֺ�������+��
//Person operator+(Person& p1, Person &p2) {
//
//	Person temp;
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	return temp;
//}
//
//// 1.2 �������ذ汾
//Person operator+(Person& p1, int num) {
//
//	Person temp;
//	temp.m_A = p1.m_A + num;
//	temp.m_B = p1.m_B + num;
//	return temp;
//}
//
//// 2.1 ֻ����ȫ�ֺ�������<<
//// ����: operator<< (cout, p)   �� cout << p
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
//	// ԭʼд��(���ʵ���)
//	// ��Ա����: p3 = p1.operator+(p2);
//	// ȫ�ֺ���: p3 = operator+(p1,p2);
//	p3 = p1 + p2;
//
//	// ��������� Ҳ��ѽ������������
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
//// 3.����(++)���������   (--)�Լ�д
//// 3.1ǰ�õ���
//// 3.2���õ���
//
//// 4. ��ֵ(=)���������
//
//// �Զ������ͱ���
//class MyInteger {
//
//	friend ostream& operator<<(ostream& cout, MyInteger myint);
//
//public:
//	MyInteger() {
//		m_Num = 0;
//	}
//	// 3.1 ǰ�õ������� ��������
//	// �������õ�ԭ��:  һֱ��һ��myint���в���
//	// �����������,ֵ����
//	// cout << ++(++myint) << endl;   ���2
//	// cout << myint << endl;  ���1
//	// ��Ϊ��һ�е�++myint�󷵻ص���һ���µ�myint
//	// �����ò���һֱ��ͬһ��myint���в���
//	MyInteger& operator++() {
//		// +1
//		++m_Num;
//		// ��������
//		return  *this;
//	}
//
//
//	// 3.2 ���õ������� ����ֵ
//	// int ����ռλ����, ������������ǰ���õ���
//	// ����ֵ����Ϊ�������������temp������, temp�Ǿֲ�����
//	// ������������, temp�ͻᱻ�ͷ�
//	MyInteger operator++(int) {
//
//		// �� ��¼���
//		MyInteger temp = *this;
//		// �� ����
//		m_Num++;
//		// ���ؽ��
//		return temp;
//	}
//private:
//	int m_Num;
//};
//
//// ����һ��<< �������MyInteger
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
//// 4. ��ֵ(=)���������
//class Person1 {
//
//public:
//	Person1(int age) {
//
//		m_Age = new int(age);
//	}
//
//	// ��������
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
//	// ���� ��ֵ�����
//	Person1& operator=(Person1& p) {
//
//		// ���������ṩ��ǳ����
//		// ��: m_Age = p.m_Age;
//
//
//		// Ӧ���ж��Ƿ��������ڶ���,��������ͷŸɾ�,Ȼ�������
//		if (m_Age != NULL) {
//
//			delete m_Age;
//			m_Age = NULL;
//		}
//
//		// ���
//		m_Age = new int(*p.m_Age);
//
//		// ���ض�����
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
//	p2 = p1; // ��ֵ���� ǳ���� ���ܻᵼ���ڴ��ظ��ͷ�
//
//	cout << "p1������Ϊ: " << *p1.m_Age << endl;
//
//	cout << "p2������Ϊ: " << *p2.m_Age << endl;
//
//
//	p3 = p2 = p1;
//
//	cout << "p3������Ϊ: " << *p3.m_Age << endl;
//
//}
//
//// 5. ��ϵ�����(== !=)����
//class Person2 {
//public:
//	Person2(string name, int age) {
//
//		m_Name = name;
//		m_Age = age;
//	}
//
//	// ���� == ��
//	bool operator==(Person2 &p) {
//		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age) {
//			return true;
//		}
//
//		return false;
//	}
//
//	// ���� != ��
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
//		cout << "���" << endl;
//	}
//	else {
//		cout << "�����" << endl;
//	}
//
//	if (p1 != p2) {
//		cout << "�����" << endl;
//	}
//}
//
//// 6. �������������( () )����
//
//// ��ӡ�����
//class MyPrint {
//public:
//	void operator()(string test){
//		cout << test << endl;
//	}
//};
//
//// �ú���ʵ�����()�Ĺ���
//void myPrint02(string test) {
//	cout << test << endl;
//}
//
//
//void test06() {
//	MyPrint myprint;
//	myprint("love"); // ����ʹ�������ǳ������ں�������, ��˳�Ϊ�º���.
//	myPrint02("love");
//}
//
//// �º����ǳ������, û�й̶���д��
//// �ӷ���
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
//	// ������������
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