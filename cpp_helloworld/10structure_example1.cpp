//#include <iostream>
//using namespace std;
//#include <string>
//#include <ctime>
//
//// 学生
//struct student {
//
//	string name; // 学生姓名
//	int scores; // 学生分数
//};
//
//// 老师
//struct teacher {
//
//	string name; // 老师姓名
//	struct student stuArray[5]; // 学生数组
//};
//
//// 赋值函数
//void allocateSpace(struct teacher tArray[], int len) {
//
//	string tName = "teacher_";
//	string sName = "student_";
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < len; i++) {
//
//		tArray[i].name = tName + nameSeed[i];
//
//		// 通过循环给老师带的学生的信息赋值
//		for (int j = 0; j < 5; j++) {
//
//			tArray[i].stuArray[j].name = sName + nameSeed[i];
//			int random = rand() % 61 + 40; // 40~100
//			tArray[i].stuArray[j].scores = random;
//		}
//	}
//	
//
//}
//
//// 打印信息
//void printInfo(struct teacher tArray[], int len) {
//
//	for (int i = 0; i < len; i++) {
//
//		cout << "老师的姓名: " << tArray[i].name << endl;
//
//		for (int j = 0; j < 5; j++) {
//
//			cout << "\t学生姓名: " << tArray[i].stuArray[j].name << 
//				" 考试分数: " << tArray[i].stuArray[j].scores << endl;
//				
//		}
//	}
//}
//
//int main() {
//
//	// 随机数种子
//	srand((unsigned int)time(NULL));
//	// Step1. 创建老师数组
//	teacher tArray[3];
//
//	// Step2. 通过函数给老师的信息赋值,并给老师带的学生的信息赋值
//	int len = sizeof(tArray) / sizeof(tArray[0]);
//	allocateSpace(tArray, len);
//
//	// Step3. 打印信息
//	printInfo(tArray,len);
//
//
//	system("pause");
//
//	return 0;
//}