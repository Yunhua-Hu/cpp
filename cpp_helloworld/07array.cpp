//#include <iostream>
//using namespace std;
//#include <string>
//
//int main() { //为避免多个main 无法执行所以在其后加了个数字,运行时记得删除.
//
//	// 一维数组
//
//	//
//	一维数组定义的三种方式：
//	1. 数据类型 数组名[数组长度];
//	2. 数据类型 数组名[数组长度] = { 值1，值2 ... };
//	3. 数据类型 数组名[] = { 值1，值2 ... };
//	*/
//
//	// 一维数组名
//	
//	/*
//	一维数组名称的用途：
//	1.可以统计整个数组在内存中的长度
//	2.可以获取数组在内存中的首地址
//	 */
//
//	// 数组元素逆置
//	// Step1.创建数组
//	int arr[5] = {1, 2, 3, 4, 5};
//	cout << "数组逆置前: " << endl;
//	for (int i = 0; i < 5; i++) {
//		cout << arr[i] << endl;
//	}
//	// Step2.实现逆置
//	// 2.1记录起始与结束下标位置
//	// 2.2起始下标与结束下标的元素互换
//	// 2.3起始位置++,结束位置--
//	// 2.4循环执行2.2-2.4,直到起始位置>=结束位置
//	int start = 0; // 起始下标
//	int end = sizeof(arr) / sizeof(arr[0]) - 1; // 结束下标
//
//	while (start < end) {
//		// 元素互换
//		int temp = arr[start];
//		arr[start] = arr[end];
//		arr[end] = temp;
//
//		// 下标更新
//		start++;
//		end--;
//	}
//
//	// Step3.打印逆置后数组
//	cout << "数组逆置后: " << endl;
//	for (int i = 0; i < 5; i++) {
//		cout << arr[i] << endl;
//	}
//
//
//	// 利用冒泡排序实现升序序列
//	// Step1. 
//	int arr1[] = { 4, 2, 8, 0, 5, 7, 1, 3, 9 };
//	
//	cout << "排序前: " << endl;
//	for (int i = 0; i < 9; i++) {
//		cout << arr1[i] << endl;
//	}
//	// 开始冒泡排序
//	for (int i = 0; i < 9 - 1; i++) {
//		
//		// 内层循环对比 次数 = 元素个数 - 当前轮数 - 1;
//		for (int j = 0; j < 9 - i - 1; j++) {
//
//			// 如果第一个数字比第二个数字大,则交换两数字.
//			if (arr1[j] > arr1[j + 1]) {
//				int temp = arr1[j];
//				arr1[j] = arr1[j + 1];
//				arr1[j + 1] = temp;
//			}
//		}
//	}
//	// 排序后
//	cout << "排序后: " << endl;
//	for (int i = 0; i < 9; i++) {
//		cout << arr1[i] << endl;
//	}
//
//	// 二维数组
//	/*
//	二维数组定义的四种方式：
//	1. 数据类型 数组名[行数][列数];
//	2. 数据类型 数组名[行数][列数] = { {数据1，数据2 } ，{数据3，数据4 } };
//	3. 数据类型 数组名[行数][列数] = { 数据1，数据2，数据3，数据4 };
//	4. 数据类型 数组名[][列数] = { 数据1，数据2，数据3，数据4 };
//	*/
//
//	// 二维数组名称用途
//	// 查看二维数组所占内存空间
//	// 获取二维数组首地址
//
//	// 二维数组应用案例 - 考试成绩统计
//	//  Step1. 创建二维数组
//	int scores[3][3] = {
//		{100, 100, 100},
//		{90, 50, 100},
//		{60, 70, 80}
//	};
//
//	string name[3] = { "张三", "李四", "王五" };
//
//	// Step2. 统计每个人的总和分数
//	for (int i = 0; i < 3; i++) {
//		int sum = 0;
//		for (int j = 0; j < 3; j++) {
//			sum += scores[i][j];
//		}
//		cout << name[i] << "同学的总成绩是: " << sum << endl;
//	}
//
//	system("pause");
//
//	return 0;
//}