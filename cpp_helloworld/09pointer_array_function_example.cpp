//#include <iostream>
//using namespace std;
//
////  ð������
//void bubbleSort(int* arr,int len){
//	
//	for (int i = 0; i < len - 1; i++) {
//
//		for (int j = 0; j < len - i - 1; j++) {
//
//			// ���j > j+1��ֵ ��������
//			if (arr[j] > arr[j + 1]) {
//
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//// ��ӡ����
//void printArray(int* arr, int len) {
//
//	for (int i = 0; i < len; i++) {
//		cout << arr[i] << endl;
//	}
//}
//
//int main() {
//
//	// Step1. ����һ������
//	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
//	// ���鳤��
//	int len = sizeof(arr) / sizeof(arr[0]);
//
//	// Step2. ��������,ʵ��ð������
//	bubbleSort(arr, len);
//
//	// Step3. ��ӡ����������
//	printArray(arr, len);
//
//
//	system("pause");
//
//	return 0;
//}