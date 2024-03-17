//#include <iostream>
//using namespace std;
//
//int main() //为避免多个main 无法执行所以在其后加了个数字,运行时记得删除.
//{
//	// 循环结构
//	// while
//	// 猜数字游戏(while的应用)
//	int num = rand() % 100 + 1; // 生成 0 + 1~99 + 1的随机数 ,伪随机数
//	// #include <ctime>
//	// srand((unsigned int)time(NULL);   // 根据时间生成的真随机数. 
//	int val = 0; // 玩家输入数据
//
//	while (1)
//	{
//		cin >> val;
//		if (val > num)
//		{
//			cout << "high" << endl;
//		}
//		else if (val < num)
//		{
//			cout << "low" << endl;
//		}
//		else
//		{
//			cout << "good" << endl;
//			break;
//		}
//	}
//
//	// do-while
//	// 水仙花数
//	num = 100;
//	do {
//		int a = num / 100; // 百位
//		int b = num / 10 % 10; // 十位
//		int c = num % 10; // 个位
//		if (a * a * a + b * b * b + c * c * c == num)
//		{
//			cout << num << endl;
//		}
//		num++;
//	} while (num < 1000);
//
//	// for
//	// 敲桌子小游戏
//	for (int i = 1; i < 101; i++){
//		if (i % 7 == 0) {
//			cout << i << endl;
//		}
//
//	}
//
//	// 嵌套循环
//	// 乘法口诀表
//	for (int i = 1; i < 10; i++) {
//		for (int j = 1; j < i; j++) {
//			cout << j << " * " <<  i << " = " << j * i << " ";  // 
//		}
//		cout << endl;
//	}
//
//	// break 跳出当前循环; continue 跳出当前循环的本次循环; goto 跳转到标志语句;
//	// goto 
//	cout << " 1 " << endl;
//	cout << " 2 " << endl;
//	goto Falg;
//	cout << " 3 " << endl;
//Falg:
//	cout << " 4 " << endl;
//
//
//	system("pause");
//
//	return 0;
//}