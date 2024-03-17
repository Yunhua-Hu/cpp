//#include <iostream>
//using namespace std;
//#include<string>
//
//// 01_1 封装的意义
//// 圆周率
//const double PI = 3.14;
//
//// 设计一个圆类, 求圆的周长
//// 圆求周长的公式 : 2 * PI * 半径
//
//// class 代表设计一个类, 类后面紧跟着的就是类名称
//class Circle {
//
//	// 访问权限
//	// 公共权限
//public:
//
//	// 属性
//	// 半径
//	int m_r;
//
//	// 行为
//	// 获取圆的周长
//	double calculateZC() {
//
//		return 2 * PI * m_r;
//	}
//};
//
//// student 
//// 设计一个学生类，属性有姓名和学号
//// 可以给姓名和学号赋值，可以显示学生的姓名和学号
//class student {
//
//public:
//
//	// 类中的属性和行为 我们统一称为成员
//	// 属性 又称 成员属性 成员变量
//	// 行为 又称 成员函数 成员方法
//	string m_name;  // 姓名
//	int m_ID;	// 学号
//
//	void showStudent() {
//
//		cout << "学生的姓名是: " << m_name << endl;
//		cout << "学生的学号是: " << m_ID << endl;
//	}
//
//	// 还可以通过行为给属性赋值
//	void setName(string name) {
//		m_name = name;
//	}
//
//};
//
//// 01_2 封装的意义二
//
//// 访问权限: 公共权限 public    成员 类内可以访问 类外也可以访问
////			 保护权限 protected 成员 类内可以访问 类外不可以访问 儿子可以访问父亲中的保护内容
////			 私有权限 private	成员 类内可以访问 类外不可以访问 儿子不可以访问父亲中的保护内容
//
//class Person {
//
//public:
//	// 公共权限
//	string m_Name; //姓名
//
//protected:
//	// 保护权限 
//	string m_Car; // 汽车
//
//private:
//	// 私有权限
//	int m_Password; // 银行卡密码
//
//public:
//	void func() {
//		m_Name = "张三";
//		m_Car = "拖拉机";
//		m_Password = 123456;
//	}
//};
//
//
//// 02 struct和class的区别
//// struct 默认权限为公共
//// class 默认权限为私有
//class C1 {
//	int m_A; // 默认权限 是私有
//};
//
//struct C2 {
//	int m_A; // 默认权限 是公共
//};
//
//
//// 03 成员属性设置为私有
//// 1. 可以自己控制读写权限
//// 2. 对于写可以检测数据的有效性
//
//// 设计人类
//class Human {
//
//public:
//	// 设置姓名
//	void setName(string name) {
//		m_Name = name;
//	}
//
//	// 获取姓名
//	string getName() {
//		return m_Name;
//	}
//
//	// 获取年龄 可读可写 如果想修改(范围:0~150)
//	int getAge() {
//		//m_Age = 0; // 初始化为0岁
//		return m_Age;
//	}
//
//	// 设置年龄
//	void setAge(int age) {
//
//		if (age < 0 || age >150) {
//			m_Age = 0;
//			cout << "输入的年龄有误" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//
//	// 设置情人 只写
//	void setLover(string lover) {
//
//		m_Lover = lover;
//	}
//
//private:
//	// 姓名 可读可写
//	string m_Name;
//	// 年龄 只读
//	int m_Age;
//	// 情人 只写
//	string m_Lover;
//};
//int main() {
//
//	// 01_1封装的意义
//	// 通过圆类 创建具体的圆(对象)
//	// 实例化 (通过一个类 创建一个对象的过程)
//	Circle cl;
//	// 给圆对象的属性赋值
//	cl.m_r = 10;
//	cout << "圆的周长为: " << cl.calculateZC() << endl;
//
//	// student
//	student s1;
//	s1.m_ID = 1;
//	//s1.m_name = "张三"; // 张三
//	s1.setName("李四");
//	s1.showStudent();
//
//	// 01_2封装的意义二
//
//	// 访问权限
//	Person p1;
//	p1.m_Name = "李四";
//	//p1.m_Car = "奔驰"; // 保护权限内容, 在类外访问不到
//	//p1.m_Password = 123456; // 私有内容, 在类外访问不到
//
//
//	// 02 struct和class的区别
//	C1 c1;
//	//c1.m_A; // 无法访问
//
//	C2 c2;
//	c2.m_A; // 可以访问
//
//	// 03 成员属性设置为私有
//	Human H;
//	H.setName("张三");
//	cout << "姓名为: " << H.getName() << endl;
//
//	//H.m_Age = 18;  // 不能操作
//	H.setAge(1000);
//	cout << "年龄为: " << H.getAge() << endl;
//
//	H.setLover("苍女士");
//	//cout << "情人为: " << H.m_Lover << endl; // 只写不能访问
//
//
//	system("pause");
//
//	return 0;
//}