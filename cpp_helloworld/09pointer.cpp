//#include <iostream>
//using namespace std;
//
//int main() {
//
//	// 指针
//	int a = 10;
//	int b = 20;
//	// 1.指针的定义语法: 数据类型 * 指针变量名;
//	int* p;
//	p = &a; 
//	cout << "a的地址" << &a << endl;
//	cout << "指针p为: " << p << endl;
//
//	// 2.使用指针
//	// 对指针变量解引用，可以操作指针指向的内存
//	// 指针前加一个*
//	*p = 100;
//	cout << "a = " << a << endl;
//
//	// 指针所占内存
//	// 所有指针类型在32位操作系统下是4个字节,64位是8字节
//
//	// 空指针与野指针
//	// 1.空指针用于给指针变量进行初始化
//	int* p1 = NULL;
//	// 2. 空指针是不可以进行访问的
//	// 0~255 之间的内存编号是系统占用的,不允许用户访问
//	
//	// 野指针
//	//指针变量p指向内存地址编号为0x1100的空间
//	// int* p = (int*)0x1100; //访问野指针报错 
//	
//	// const 修饰指针
//	// const修饰指针有三种情况
//	// 1.const修饰指针-- - 常量指针
//	const int* p2 = &a; 
//	// * p = 20; 错误 // 指针指向的值不可以更改
//	p2 = &b;	//指针指针指向可以改，
//
//	// 2.const修饰常量-- - 指针常量
//	int* const p3 = &a;
//	//p2 = &b; //错误,指针指向不可以改
//	*p3 = 100; //正确,指针指向的值可以更改
//
//	// 3.const即修饰指针，又修饰常量
//	const int* const p4 = &a;
//	//p3 = &b; //错误 , 指针指向的值不可以更改
//	//*p3 = 100; //错误, 指针指向不可以改
//
//
//	// 数组与指针
//	// 利用指针访问数组中的元素
//
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	cout << "第一个元素" << arr[0] << endl;
//
//	int* p5 = arr; // arr就是数组首地址
//
//	cout << "利用指针访问第一个元素" << *p5 << endl;
//
//	p5++;
//	cout << "利用指针访问第二个元素" << *p5 << endl;
//
//	// 指针与函数
//	// 值传递 or 地址传递
//
//	system("pause");
//
//	return 0;
//}