//#include <iostream>
//using namespace std;
//#include "01ex2_Circle.h"
//#include "01ex2_Point.h"
//
//// 点和圆的关系
//// 设计一个点类 和圆类
//
//// 判断点和圆关系
//void isInCircle(Circle& c, Point& p) {
//	// 计算两点之间的距离 平方
//	int distance =
//		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
//		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
//
//	// 计算半径的平方
//	int rDistance = c.getR() * c.getR();
//
//	// 判断关系
//	if (distance > rDistance) {
//		cout << "点在圆外" << endl;
//	}
//	else if (distance == rDistance) {
//		cout << "点在圆上" << endl;
//	}
//	else {
//		cout << "点在圆内" << endl;
//	}
//}
//
//int main() {
//
//	// 创建一个圆
//	Circle c;
//	c.setR(10); // 半径
//	Point center; // 圆心
//	center.setX(10);
//	center.setY(0);
//	c.setCenter(center); // 设置圆心
//
//	// 创建一个点
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