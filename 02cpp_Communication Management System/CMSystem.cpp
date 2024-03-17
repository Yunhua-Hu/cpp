//// 封装函数显示该界面 如  void showMenu()
//// 在main函数中调用封装好的函数
//
//# include <iostream>
//using namespace std;
//#include <string>
//# define MAX 1000
//
//// 菜单界面
//void showMenu() {
//
//	cout << "***************************" << endl;
//	cout << "*****  1、添加联系人  *****" << endl;
//	cout << "*****  2、显示联系人  *****" << endl;
//	cout << "*****  3、删除联系人  *****" << endl;
//	cout << "*****  4、查找联系人  *****" << endl;
//	cout << "*****  5、修改联系人  *****" << endl;
//	cout << "*****  6、清空联系人  *****" << endl;
//	cout << "*****  0、退出通讯录  *****" << endl;
//	cout << "***************************" << endl;
//}
//
//// 联系人结构体
//struct Person {
//	// 姓名
//	string m_Name;
//
//	// 性别 1 男 2 女
//	int m_Sex;
//
//	// 年龄
//	int m_Age;
//
//	// 电话号码
//	string m_Phone;
//
//	// 地址
//	string m_Addr;
//};
//
//// 通讯录结构体
//struct Addressbooks {
//	// 通讯录中保存的联系人数组
//	struct Person personArray[MAX];
//
//	// 通讯录中的人数
//	int m_Size;
//};
//
//// 1.添加联系人
//void addPerson(Addressbooks* abs) {
//
//	// 判断通讯录是否已满,如果满了就不再添加
//	if (abs->m_Size == MAX) {
//		cout << "通讯录已满,无法添加! " << endl;
//		return;
//	}
//	else {
//		// 添加具体联系人
//
//		// 姓名
//		string name;
//		cout << "请输入姓名: " << endl;
//		cin >> name;
//		abs->personArray[abs->m_Size].m_Name = name;
//		
//		// 性别
//		cout << "请输入性别: " << endl;
//		cout << "1--男" << endl;
//		cout << "2--女" << endl;
//		int sex = 0;
//		while (1) {
//			cin >> sex;
//				if (sex == 1 || sex == 2) {
//					abs->personArray[abs->m_Size].m_Sex = sex;
//					break;
//				}
//				cout << "输入有误,请重新输入." << endl;
//		}
//		
//		// 年龄
//		cout << "请输入年龄: " << endl;
//		int age = 0;
//		cin >> age;
//		abs->personArray[abs->m_Size].m_Age = age;
//		
//		// 电话
//		cout << "请输入联系电话: " << endl;
//		string phone;
//		cin >> phone;
//		abs->personArray[abs->m_Size].m_Phone = phone;
//
//		// 地址
//		cout << "请输入地址: " << endl;
//		string address;
//		cin >> address;
//		abs->personArray[abs->m_Size].m_Addr = address;
//
//		// 更新人数
//		abs->m_Size++;
//
//		cout << "添加成功" << endl;
//
//		system("pause"); // 请按任意键继续
//		system("cls"); // 清屏
//	}
//}
//
//// 2.显示所有联系人
//void showPerson(Addressbooks* abs) {
//	// 判断通讯录是否为空
//
//	if (abs->m_Size == 0) {
//		cout << "当前记录为空." << endl;
//	}
//	else {
//		for (int i = 0; i < abs->m_Size; i++) {
//			cout << "姓名: " << abs->personArray[i].m_Name << "\t";
//			cout << "性别: " << (abs->personArray[i].m_Sex == 1 ?"男":"女" ) << "\t";
//			cout << "年龄: " << abs->personArray[i].m_Age << "\t";
//			cout << "电话: " << abs->personArray[i].m_Phone << "\t";
//			cout << "住址: " << abs->personArray[i].m_Addr << endl;
//		}
//	}
//
//	system("pause");
//	system("cls");
//}
//
//// 3.通过姓名来查找联系人是否存在
//// 若存在返回下标,不存在返回-1.
//int  isExist(Addressbooks* abs, string name) {
//	for (int i = 0; i < abs->m_Size; i++) {
//
//		if (abs->personArray[i].m_Name == name) {
//
//			return i; // 找到,返回下标
//		}
//	}
//	return -1; // 没有找到
//}
//
//// 4.删除联系人
//void deletePerson(Addressbooks* abs) {
//	// 该联系人是否在通讯录中
//	cout << "请输入你要删除的联系人: " << endl;
//
//	string name;
//	cin >> name;
//
//	int ret = isExist(abs, name);
//	if (ret != -1) {
//		// 找到,需要删除该人
//		for (int i = ret; i < abs->m_Size; i++) {
//			abs->personArray[i] = abs->personArray[i + 1];
//		}
//		abs->m_Size--;
//		cout << "删除成功" << endl;
//	}
//	else {
//		cout << "查无此人" << endl;
//	}
//
//	system("pause");
//	system("cls");
//}
//
//// 5. 查找联系人
//void findPerson(Addressbooks* abs) {
//	cout << "请输入你要查询的联系人" << endl;
//	string name;
//	cin >> name;
//
//	// 判断指定的联系人是否存在通讯录中
//	int ret = isExist(abs, name);
//
//	if (ret != -1) {
//		cout << "姓名: " << abs->personArray[ret].m_Name << "\t";
//		cout << "性别: " << (abs->personArray[ret].m_Sex == 1 ? "男" : "女") << "\t";
//		cout << "年龄: " << abs->personArray[ret].m_Age << "\t";
//		cout << "电话: " << abs->personArray[ret].m_Phone << "\t";
//		cout << "住址: " << abs->personArray[ret].m_Addr << endl;
//	}
//	else {
//		cout << "查无此人" << endl;
//	}
//
//	system("pause");
//	system("cls");
//
//}
//
//// 1.修改指定联系人信息
//void modifyPerson(Addressbooks * abs) {
//
//	cout << "输入需修改的联系人" << endl;
//	string name;
//	cin >> name;
//	int ret = isExist(abs, name);
//
//	if (ret != -1) {
//		// 姓名
//		string name;
//		cout << "请输入姓名: " << endl;
//		cin >> name;
//		abs->personArray[ret].m_Name = name;
//
//		// 性别
//		cout << "请输入性别: " << endl;
//		cout << "1--男" << endl;
//		cout << "2--女" << endl;
//		int sex = 0;
//		while (1) {
//			cin >> sex;
//			if (sex == 1 || sex == 2) {
//				abs->personArray[ret].m_Sex = sex;
//				break;
//			}
//			else {
//				cout << "输入错误,请重新输入: " << endl;
//			}
//		}
//		
//		// 年龄
//		int age = 0;
//		cout << "请输入年龄: " << endl;
//		cin >> age;
//		abs->personArray[ret].m_Age = age;
//
//		// 电话
//		string phone;
//		cout << "请输入电话: " << endl;
//		cin >> phone;
//		abs->personArray[ret].m_Phone = phone;
//
//		//住址
//		string address;
//		cout << "请输入住址: " << endl;
//		cin >> address;
//		abs->personArray[ret].m_Addr = address;
//
//		cout << "修改成功" << endl;
//	}
//	else {
//		cout << "查无此人" << endl;
//	}
//
//	system("pause");
//	system("cls");
//}
//
//// 6. 清空联系人
//void cleanPerson(Addressbooks* abs) {
//	cout << "您确定要清空吗" << endl;
//	cout << "1--确定" << endl;
//	cout << "2--取消" << endl;
//	int ret;
//	cin >> ret;
//	if (ret == 1) {
//		abs->m_Size = 0;
//		cout << "通讯录已清空" << endl;
//	}
//	system("pause");
//	system("cls");
//}
//
//
//
//int main() {
//
//	// 创建通讯录结构体变量
//	Addressbooks abs;
//	// 初始化通讯录中当前人员个数
//	abs.m_Size = 0;
//
//
//	// 用户选择
//	int select = 0;
//
//	
//	while(1) {
//
//		// 菜单调用
//		showMenu();
//
//		cin >> select;
//
//		switch (select) {
//
//		case 1: // 1、添加联系人
//			addPerson(&abs); // 利用地址传递,修改实参.
//			break; // break之前代码过长,可能会报错,加个{}括起来就对了.
//		case 2: // 2、显示联系人
//			showPerson(&abs);
//			break;
//		case 3: // 3、删除联系人
//			deletePerson(&abs);
//			break;
//		case 4: // 4、查找联系人
//			findPerson(&abs);
//			break;
//		case 5: // 5、修改联系人
//			modifyPerson(&abs);
//			break;
//		case 6: // 6、清空联系人
//			cleanPerson(&abs);
//			break;
//		case 0: //  0、退出通讯录
//			cout << "欢迎下次使用" << endl;
//			system("pause");
//			return 0;
//			break;
//		default:
//			break;
//		}
//	}
//	cin.get();
//
//	//system("pause");
//
//	return 0;
//
//}