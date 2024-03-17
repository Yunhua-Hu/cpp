//#include <iostream>
//using namespace std;
//#include <string>
//// 英雄结构体
//struct hero {
//
//	// 姓名
//	string name;
//	// 年龄
//	int age;
//	// 性别
//	string gender;
//};
//
//// 冒泡排序
//void bubbleSort(struct hero heroArray[], int len) {
//
//	// 循环
//	for (int i = 0; i < len - 1; i++) {
//
//		for (int j = 0; j < len - i - 1; j++) {
//
//			if (heroArray[j].age > heroArray[j + 1].age) {
//
//				struct hero temp = heroArray[j];
//				heroArray[j] = heroArray[j + 1];
//				heroArray[j + 1] = temp;
//			}
//		}
//	}
//}
//
//// 打印数组
//void printHero(struct hero heroArray[], int len) {
//	for (int i = 0; i < len; i++) {
//		cout << "名字: " << heroArray[i].name << "年龄: " << heroArray[i].age
//			<< "性别: " << heroArray[i].gender << endl;
//	}
//}
//int main() {
//
//	// 1. 设计英雄结构体
//	// 2. 创建数组存放5名英雄
//	struct hero heroArray[5] =
//	{
//		{"刘备",23,"男"},
//		{"关羽",22,"男"},
//		{"张飞",20,"男"},
//		{"赵云",21,"男"},
//		{"貂蝉",19,"女"},
//	};
//
//	int len = sizeof(heroArray) / sizeof(heroArray[0]);
//
//	/*for (int i = 0; i < len; i++) {
//		
//			cout << "姓名： " << arr[i].name << " 性别： " << arr[i].sex 
//				<< " 年龄： " << arr[i].age << endl;
//	}*/
//	// 3. 对数组进行排序, 按照年龄
//	bubbleSort(heroArray, len);
//
//	// 4. 打印数组
//	printHero(heroArray, len);
//
//	system("pause");
//
//	return 0;
//}