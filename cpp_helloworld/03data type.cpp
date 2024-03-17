//#include <iostream>
//using namespace std;
//#include <string> // 用C++ 风格字符串, 要包含这个头文件
//
//int main() 
//{
//	//  整型 short < int <= long < long long
//	// 1. 短整型 (-32768 ~ 32767) 2^15+-1
//	short num1 = 10;
//
//	// 2. 整型  2^31+-1
//	int num2 = 10;
//
//	// 3. 长整型 2^31+-1
//	long num3 = 10;
//
//	// 4. 长长整型 2^63+-1
//	long long num4 = 10;
//
//	cout << "num1 = " << num1 << endl;
//	cout << "num2 = " << num2 << endl;
//	cout << "num3 = " << num3 << endl;
//	cout << "num4 = " << num4 << endl;
//
//	// sizeof 求内存大小
//	// 语法: sizeof( 数据类型 / 变量 )
//	cout << "short占用内存空间为: " << sizeof(num1) << endl;
//
//	// 实型(浮点型)
//	// 1. 单精度 float
//	// 2. 双精度 double
//	float f1 = 3.14f; // 默认最多显示六位有效数字. 4字节
//
//	cout << "f1 = " << f1 << endl;
//
//	double d1 = 3.1415926;  // 默认最多显示六位有效数字. 8字节
//
//	cout << "d1 = " << d1 << endl;
//
//	// 科学计数法
//	float f2 = 3e2; // 3 * 10 ^ 2;
//	float f3 = 3e-2; // 3 * 0.1 ^ 2;
//
//	// 字符型 占1个字节
//	// 1. 字符型变量创建方式
//	char ch = 'a';
//	cout << ch << endl;
//
//	// 2. 内存大小
//	cout << "char 字符型变量所占内存: " << sizeof(char) << endl;
//
//	// 3. 常见错误
//	// char ch2 = "b"; // 创建字符型变量时候, 要用单引号
//	// char ch2 = 'abcdf'; // 创建字符型变量时候, 单引号内只能有一个字符
//
//	// 4. 字符型变量对应的ASCII编码 计算机中存储的是其ASCII码
//	// a : 97, A : 65;
//	cout << (int)ch << endl;
//
//	// 转义字符
//	// 
//	// 1. 换行符 \n
//	cout << "123\n" << endl;
//	// 2. 反斜杠 "\\"
//	cout << "\\" << endl;
//	// 3. 水平制表符 \t  :整齐的输出
//	cout << "aaa\t123" << endl;
//	cout << "aa\t123" << endl;
//	cout << "aaaaaaa\t123" << endl;
//
//	// 字符串型
//	// 1. C风格字符串
//	// 注意事项 char  字符串名 []
//	//          等号后面 要用双引号 包含起来字符串
//	char str[] = "hello world";
//	cout << str << endl;
//
//	// 2. C++ 风格字符串
//	// 需要 #include <string>
//	string str2 = "hello world";
//	cout << str2 << endl;
//
//	// 布尔数据类型 bool
//	// 1. 创建 bool
//	bool flag = true; // true 真 1或非0
//	bool flag1 = false; // false 假 0
//	// 本质上 1代表真 0代表假
//
//	// 2. bool 内存空间 1字节
//	cout << "bool 所占空间大小: " << sizeof(bool) << endl;
//
//	// 数据的输入
//	// 1. 整型输入
//	int a = 0;
//	cout << "请给整型变量a赋值: " << endl;
//	cin >> a;
//	cout << "整型变量a = " << a << endl;
//
//	// 2. 浮点型
//	float f = 3.14f;
//	cout << "请给浮点型变量f赋值: " << endl;
//	cin >> f;
//	cout << "浮点型变量f = " << f << endl;
//
//	// 3. 字符
//	// 4. 字符串
//	// 5. bool
//	cout << "请给布尔类型 flag 赋值" << endl;
//	cin >> flag; 
//	// 赋值非0就为真,但是输出ture,falg会变为0. ture会被认为是个字符串.
//	// 字符串 字符 绝对值正负数小于1 都是 flase
//	cout << "flag = " << flag;
//	 
//	system("pause");
//
//	return 0;
//}