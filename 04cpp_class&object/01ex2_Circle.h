#include <iostream>
using namespace std;
#include "01ex2_Point.h"
class Circle {

public:
	// 设置半径
	void setR(int r);
	// 获取半径
	int getR();
	// 设置圆心
	void setCenter(Point center);
	// 获取圆心
	// 在类中可以让另一个类作为成员
	Point getCenter();

private:

	// 半径
	int m_R;
	// 圆心
	Point m_Center;
};