//#include <iostream>
//using namespace std;
//
//int main() //为避免多个main 无法执行所以在其后加了个数字,运行时记得删除.
//{
//	// 顺序 选择 循环结构
//	int score = 0;
//	cout << "请输入分数" << endl;
//	cin >> score;
//	// if
//	if (score > 600)
//	{
//		cout << "恭喜你考上一本" << endl;
//	}
//
//	// if -else
//	if (score > 600)
//	{
//		cout << "恭喜你考上一本" << endl;
//	}
//	else
//	{
//		cout << "没考上一本" << endl;
//	}
//
//	// if-elseif-else
//	if (score > 600)
//	{
//		cout << "一本" << endl;
//	}
//	else if (score > 500)
//	{
//		cout << "二本" << endl;
//	}
//	else
//	{ 
//		cout << "加油" << endl;
//	}
//
//	// if嵌套
//	
//	// 三目运算符
//	// 创建三个变量 a b c
//	// 将a和b做比较,将变量大的值赋值给变量c
//
//	int a = 10;
//	int b = 20;
//	int c = 0;
//
//	c = (a > b ? a : b); 
//	cout << "c = " << c << endl; 
//	
//	(a > b ? a : b) = 100; // c++中三目运算符返回的是变量,可以继续赋值.
//						  // 即: b = 100
//
//	// switch语句
//	switch (score)
//	{
//	case 10:
//		cout << "非常好" << endl;
//		break; // 退出当前分支
//	case 9:
//		cout << "好" << endl;
//		break;
//	default:
//		cout << "差" << endl;
//		break;
//	}
//
//	// if与switch 
//	// switch缺点: 判断时候只能是整型或者字符型,不可以是一个区间.
//	// switch优点: 结构清晰,执行效率高.
//
//	system("pause");
//
//	return 0;
//}