#include<iostream>
using namespace std;
#include <fstream>
#include <string>


// �ı��ļ� д�ļ�
void test01() {

	// 1) ����ͷ�ļ� fstream

	// 2) ����������

	ofstream ofs;

	// 3) ָ���򿪷�ʽ
	ofs.open("test.txt", ios::out);

	// 4) д����
	ofs << "����: ����" << endl;
	ofs << "�Ա�: ��" << endl;
	ofs << "����: 18" << endl;

	// 5) �ر��ļ�
	ofs.close();
}

// �ı��ļ� ���ļ�
void test02() {
	// 1)����ͷ�ļ�
	// 2)����������
	ifstream ifs;

	// 3)���ļ� �����ж��Ƿ�򿪳ɹ�
	ifs.open("test.txt", ios::in);

	if (!ifs.is_open()) {
		cout << "�ļ���ʧ��" << endl;
		return;
	}
	// 4) ������
	//// ��һ��
	//char buf[1024] = { 0 };
	//while (ifs >> buf) {
	//	cout << buf << endl;
	//}

	//// �ڶ���
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf, sizeof(buf))) {
	//	cout << buf << endl;
	//}
	
	// ������
	string buf;
	while (getline(ifs, buf)) {
		cout << buf << endl;
	}

	//// ������ ���Ƽ�
	//char c;
	//while ((c = ifs.get()) != EOF) {   // EOF : end of file 
	//	cout << c;
	//}


	// 5)�ر��ļ� !!!!�ǵ��ⲽ
	ifs.close();
}


// �������ļ� д�ļ�
class Person {
public:
	char m_Name[64];  // ���� ������������� ����string
	int m_Age; // ����
};

void test03() {
	// 1) ����ͷ�ļ� fstream

	// 2) ����������

	ofstream ofs("person.txt", ios::out | ios::binary);

	// 3) ָ���򿪷�ʽ 
	// ofs.open("person.txt", ios::out | ios::binary);  // �ɼ���

	// 4) д����
	Person p = { "����", 18 };
	ofs.write((const char*)&p, sizeof(Person));

	// 5) �ر��ļ�
	ofs.close();
}


// �������ļ� ���ļ�
void test04() {
	// 1)����ͷ�ļ�
	// 2)����������
	ifstream ifs;

	// 3)���ļ� �����ж��Ƿ�򿪳ɹ�
	ifs.open("Person.txt", ios::in | ios::binary);
	// �Ƿ�򿪳ɹ�
	if (!ifs.is_open()) {
		cout << "�ļ���ʧ��" << endl;
		return;
	}

	// 4) ������
	Person p;
	ifs.read((char*)&p, sizeof(Person));
	cout << "���� : " << p.m_Name << "  ���� : " << p.m_Age << endl;

	// 5)�ر��ļ� !!!!�ǵ��ⲽ
	ifs.close();
}

int main() {


	//test01();
	//test02();
	//test03();
	test04();
}