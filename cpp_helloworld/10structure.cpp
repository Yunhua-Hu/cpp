﻿//#include <iostream>
//using namespace std;
//#include <string>
//
//// 结构体
//
///*
//通过结构体创建变量的方式有三种：
//	•struct 结构体名 变量名
//	•struct 结构体名 变量名 = { 成员1值 ， 成员2值... }
//	•定义结构体时顺便创建变量
//*/
//
//	//结构体定义
//struct student
//{
//	//成员列表
//	string name;  //姓名
//	int age;      //年龄
//	int score;    //分数
//}stu3; //结构体变量创建方式3 
//
//struct teacher {
//
//	//成员列表
//	int id; // 教师编号
//	string name; // 教师姓名
//	int age; // 教师年纪
//	struct student stu; // 所带学生
//};
//
//// 值传递
//void printStudent(student stu)
//{
//	stu.age = 28;
//	cout << "子函数中 姓名：" << stu.name << " 年龄： " << stu.age << " 分数：" << stu.score << endl;
//}
//
//// 地址传递
//// 将函数中的形参改为指针, 可以减少内存空间, 而且不会复制新的副本出来.
//void printStudent2(student* stu)
//{
//	stu->age = 28;
//	cout << "子函数中 姓名：" << stu->name << " 年龄： " << stu->age << " 分数：" << stu->score << endl;
//}
//
//int main() {
//
//	//结构体变量创建方式1
//	struct student stu1; //struct 关键字可以省略
//
//	stu1.name = "张三";
//	stu1.age = 18;
//	stu1.score = 100;
//
//	cout << "姓名：" << stu1.name << " 年龄：" << stu1.age << " 分数：" << stu1.score << endl;
//
//	//结构体变量创建方式2
//	struct student stu2 = { "李四",19,60 };
//
//	cout << "姓名：" << stu2.name << " 年龄：" << stu2.age << " 分数：" << stu2.score << endl;
//
//
//	stu3.name = "王五";
//	stu3.age = 18;
//	stu3.score = 80;
//
//
//	cout << "姓名：" << stu3.name << " 年龄：" << stu3.age << " 分数：" << stu3.score << endl;
//
//	// 结构体数组
//	struct student arr[3] =
//	{
//		{"张三",18,80 },
//		{"李四",19,60 },
//		{"王五",20,70 }
//	};
//
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "姓名：" << arr[i].name << " 年龄：" << arr[i].age << " 分数：" << arr[i].score << endl;
//	}
//
//	// 结构体指针
//	struct student * p = &stu1;
//
//	 // 结构体嵌套结构体
//	//创建老师
//	teacher t;
//	t.id = 1000;
//	t.name = "老王";
//	t.age = 50;
//	t.stu.age = 18;
//	t.stu.name = "小王";
//	t.stu.score = 90;
//
//	// 结构体做函数参数
//	//值传递
//	printStudent(stu1);
//	cout << "主函数中 姓名：" << stu1.name << " 年龄： " << stu1.age << " 分数：" << stu1.score << endl;
//
//	cout << endl;
//
//	//地址传递
//	printStudent2(&stu1);
//	cout << "主函数中 姓名：" << stu1.name << " 年龄： " << stu1.age << " 分数：" << stu1.score << endl;
//
//	// 结构体中 const使用场景
//	// 加const防止函数体中的误操作
//
//
//
//
//	system("pause");
//
//	return 0;
//}
