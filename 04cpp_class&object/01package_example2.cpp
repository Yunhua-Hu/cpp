//#include <iostream>
//using namespace std;
//#include "01ex2_Circle.h"
//#include "01ex2_Point.h"
//
//// ���Բ�Ĺ�ϵ
//// ���һ������ ��Բ��
//
//// �жϵ��Բ��ϵ
//void isInCircle(Circle& c, Point& p) {
//	// ��������֮��ľ��� ƽ��
//	int distance =
//		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
//		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
//
//	// ����뾶��ƽ��
//	int rDistance = c.getR() * c.getR();
//
//	// �жϹ�ϵ
//	if (distance > rDistance) {
//		cout << "����Բ��" << endl;
//	}
//	else if (distance == rDistance) {
//		cout << "����Բ��" << endl;
//	}
//	else {
//		cout << "����Բ��" << endl;
//	}
//}
//
//int main() {
//
//	// ����һ��Բ
//	Circle c;
//	c.setR(10); // �뾶
//	Point center; // Բ��
//	center.setX(10);
//	center.setY(0);
//	c.setCenter(center); // ����Բ��
//
//	// ����һ����
//	Point p;
//	p.setX(10);
//	p.setY(10);
//
//	isInCircle(c, p);
//
//	system("pause");
//
//	return 0;
//}