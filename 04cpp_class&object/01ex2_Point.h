#pragma once
#include <iostream>
using namespace std;

class Point {

public:
	// ����X
	void setX(int x);
	// ��ȡX
	int getX();
	// ����Y
	void setY(int Y);
	// ��ȡY
	int getY();
private:
	// ��������
	int m_X;
	int m_Y;
};