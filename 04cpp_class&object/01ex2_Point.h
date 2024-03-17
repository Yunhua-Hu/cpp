#pragma once
#include <iostream>
using namespace std;

class Point {

public:
	// 设置X
	void setX(int x);
	// 获取X
	int getX();
	// 设置Y
	void setY(int Y);
	// 获取Y
	int getY();
private:
	// 横纵坐标
	int m_X;
	int m_Y;
};