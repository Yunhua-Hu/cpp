//#include <iostream>
//using namespace std;
//
//// �����������
//// 1.������������
//// 2.�������
//// 3.�����Ϊ ��ȡ���������������
//// 4. �ֱ�����ȫ�ֺ����ͳ�Ա���� �ж������������Ƿ����
//
//class Cube {
//
//public:
//	// ��Ϊ
//	// ��ȡ��
//	int getL() {
//		return m_L;
//	}
//	// ���ó�
//	void setL(int L) {
//		m_L = L;
//	}
//	// ��ȡ��
//	int getW() {
//		return m_W;
//	}
//	// ���ÿ�
//	void setW(int W) {
//		m_W = W;
//	}
//	// ��ȡ��
//	int getH() {
//		return m_H;
//	}
//	// ���ø�
//	void setH(int H) {
//		m_H = H;
//	}
//
//	// ��ȡ����������
//	int calculateS() {
//		return 2 * m_L * m_W + 2 * m_W * m_H + 2 * m_L * m_H;
//	}
//
//	// ��ȡ���������
//	int calculateV() {
//		return m_H * m_L * m_W;
//	}
//
//	// ���ó�Ա�����ж� �����������Ƿ����
//	bool isSameByClass(Cube &c) {
//
//		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH()) {
//
//			return true;
//		}
//		return false;
//	}
//private:
//	// ����
//	int m_L;
//	int m_W;
//	int m_H;
//
//
//};
//
//// ����ȫ�ֺ����ж� �����������Ƿ����
//bool isSame(Cube& c1, Cube& c2) {
//
//	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH()) {
//
//		return true;
//	}
//	return false;
//}
//
//int main() {
//
//	// �������������
//	Cube c1;
//	c1.setL(10);
//	c1.setW(10);
//	c1.setH(10);
//
//	cout << "c1�ı����Ϊ: " << c1.calculateS() << endl;
//	cout << "c1�����Ϊ: " << c1.calculateV() << endl;
//
//	// �����ڶ���������
//	Cube c2;
//	c2.setL(10);
//	c2.setW(10);
//	c2.setH(11);
//
//	// ����ȫ�ֺ����ж� �ж��Ƿ����
//	bool ret = isSame(c1, c2);
//	if (ret){
//		cout << "c1��c2���" << endl;
//	}
//	else {
//		cout << "c1��c2�����" << endl;
//	}
//
//
//	// ���ó�Ա�����ж� �����������Ƿ����
//	ret = c1.isSameByClass(c2);
//	if (ret) {
//		cout << "c1��c2���" << endl;
//	}
//	else {
//		cout << "c1��c2�����" << endl;
//	}
//
//	system("pause");
//
//	return 0;
//}