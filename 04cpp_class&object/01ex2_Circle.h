#include <iostream>
using namespace std;
#include "01ex2_Point.h"
class Circle {

public:
	// ���ð뾶
	void setR(int r);
	// ��ȡ�뾶
	int getR();
	// ����Բ��
	void setCenter(Point center);
	// ��ȡԲ��
	// �����п�������һ������Ϊ��Ա
	Point getCenter();

private:

	// �뾶
	int m_R;
	// Բ��
	Point m_Center;
};