//#include <iostream>
//using namespace std;
//#define Day 7 // 宏常量
//
//int main() 
// {
//	/* 变量 */
//	int a = 10;
//	cout << "a = " << a << endl;
//
//	/* 常量 */
//	// Day = 14; //错误,Day是常量,一旦修改就会报错
//	cout << "一周总共有: " << Day << " 天" << endl;
//
//	// const 修饰变量 
//	const int mouth = 12;
//	// mouth = 24; // 错误,const修饰的变量也成为常量
//
//	cout << "一年总共有: " << mouth << " 月" << endl;
//
//	/* 标识符命名规则*/
//	// 1.不可以是关键字. 
//	// int int = 1; // 错误
//	
//	// 2.由字母、数字、下划线组成. 
//	int abc = 10;
//	int _abc = 20;
//	int _123abc = 30;
//
//	// 3.第一个字符只能是字母或者下划线.
//	// int 123abc = 40; // 错误
//	
//	// 4.标识符是区分大小写的.
//	int aaa = 100;  // aaa 与 AAA 不同
//
//	//建议: 标识符起名,见名知意.
//
//	cout << aaa << endl;
//
//	system("pause");
//
//	return 0;
//}