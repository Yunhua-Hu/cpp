//#include<iostream>
//using namespace	std;
//#include <string>
//
//// ��̬
//// 1.��������
//// ��̬��Ϊ����
////*��̬��̬: �������� �� ������������ھ�̬��̬�����ú�����
////* ��̬��̬ : ��������麯��ʵ������ʱ��̬
//
////��̬��̬�Ͷ�̬��̬����
////* ��̬��̬�ĺ�����ַ��� - ����׶�ȷ��������ַ
////* ��̬��̬�ĺ�����ַ��� - ���н׶�ȷ��������ַ
//
//// ������
//class Animal {
//
//public:
//	// ����virtualʱ Animal��ֻ��1���ֽ�����ռλ��
//	// ����֮���Ϊ4���ֽ�,����һ�� vfptr(�麯��(��)ָ��)(virtual function pointer)
//	// 
//	// �麯��
//	virtual void speak() {
//		cout << "����˵��" << endl;
//	}
//};
//
//// è��
//class Cat : public Animal {
//public:
//	 void speak() {
//		cout << "Сè˵��" << endl;
//	}
//};
//
//// ����
//class Dog : public Animal {
//public:
//	// ������д : ��������ֵ���� ������ �����б� ��ȫ��ͬ
//	void speak() {
//		cout << "С��˵��" << endl;
//	}
//};
//
//// ִ��˵������
//// ��ַ��� �ڱ���׶�ȷ��������ַ
//// �����Ҫִ��è˵��, ��ô���������ַ�Ͳ�����ǰ��, ��Ҫ�����н׶ν��а�, ��ַ���
//
//// ��̬��̬��������
//// 1)�м̳й�ϵ
//// 2)����Ҫ���¸�����麯��
//
//// ��̬��̬ʹ��
//// �����ָ������� ָ���������
//void doSpeak(Animal& animal) {  // Animal & animal = cat;
//
//	animal.speak();
//}
//
//void test01() {
//	Cat cat;
//	doSpeak(cat);
//
//
//	Dog dog;
//	doSpeak(dog);
//}
////�ܽ᣺C++�����ᳫ���ö�̬��Ƴ���ܹ�����Ϊ��̬�ŵ�ܶ�
//
//
//
//// 2. ��̬����һ --- ��������
//// ����������
//// �ֱ�������ͨд���Ͷ�̬���������ʵ��������������������ļ�������
//
//// ��̬���ŵ㣺
//// ������֯�ṹ����
//// �ɶ���ǿ
//// ����ǰ�ںͺ��ڵ���չ�Լ�ά��
//
//// ����ͨд�����̬д��ʵ�ּ�����
//
//// ��ͨд��
//class Calculator {
//
//public:
//	int getResult(string oper) {
//		if (oper == "+") {
//			return m_Num1 + m_Num2;
//		}
//		else if (oper == "-") {
//			return m_Num1 - m_Num2;
//		}
//		else if (oper == "*") {
//			return m_Num1 * m_Num2;
//		}
//		// �������չ�µĹ���, ��Ҫ�޸�Դ��
//		// ����ʵ�Ŀ����� �ᳫ ����ԭ��
//		// ����ԭ��: ����չ���п���, ���޸Ľ��йر�
//	}
//
//	int m_Num1;
//	int m_Num2;
//};
//
//
//void test02() {
//
//	// ����һ������������
//	Calculator c;
//	c.m_Num1 = 10;
//	c.m_Num2 = 10;
//
//	cout << c.m_Num1 << " + " << c.m_Num2 << " = " << c.getResult("+") << endl;
//	cout << c.m_Num1 << " - " << c.m_Num2 << " = " << c.getResult("-") << endl;
//	cout << c.m_Num1 << " * " << c.m_Num2 << " = " << c.getResult("*") << endl;
//
//}
//
//// ���ö�̬ʵ�ּ�����
//// ʵ�ּ�����������
//class AbstructCalculator {
//public:
//	virtual int getResult() {
//		return 0;
//	}
//
//	int m_Num1;
//	int m_Num2;
//};
//
//// �ӷ���������
//class AddCalculator : public AbstructCalculator {
//public:
//	int getResult() {
//		return m_Num1 + m_Num2;
//	}
//};
//
//// ������������
//class SubCalculator : public AbstructCalculator {
//public:
//	int getResult() {
//		return m_Num1 - m_Num2;
//	}
//};
//
//// �˷���������
//class MulCalculator : public AbstructCalculator {
//public:
//	int getResult() {
//		return m_Num1 * m_Num2;
//	}
//};
//
//void test02_1() {
//
//	// ��̬ʹ������
//	// ����ָ���������ָ���������
//
//	// �ӷ�����
//	AbstructCalculator* abc = new AddCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 10;
//
//	cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;
//	// ����ǵ�����
//	delete abc; // �ͷŶ�������, ָ�����Ͳ���
//
//	// ��������
//	abc = new SubCalculator;
//	abc->m_Num1 = 100;
//	abc->m_Num2 = 100;
//	cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult() << endl;
//	// ����ǵ�����
//	delete abc; 
//
//	// �˷�����
//	abc = new SubCalculator;
//	abc->m_Num1 = 100;
//	abc->m_Num2 = 100;
//	cout << abc->m_Num1 << " * " << abc->m_Num2 << " = " << abc->getResult() << endl;
//	// ����ǵ�����
//	delete abc;
//}
//
//
//
//
//// 3.���麯���ͳ�����
//// �ڶ�̬�У�ͨ���������麯����ʵ���Ǻ�������ģ���Ҫ���ǵ���������д������
//// ��˿��Խ��麯����Ϊ ���麯��
////
//// ���麯���﷨��virtual ����ֵ���� ������ �������б� = 0; 
//// ���������˴��麯���������Ҳ��Ϊ ������
////
//// �������ص㣺
//// �޷�ʵ��������
//// ���������д�������еĴ��麯��������Ҳ���ڳ�����
//
//class Base03 {
//public:
//	// ���麯��
//	// ֻҪ��һ�����麯��, �����ͱ���Ϊ������
//	// �������ص�:
//	// 1)�޷�ʵ��������
//	// 2)���������д�������еĴ��麯��������Ҳ���ڳ�����
//	virtual void func() = 0;
//
//};
//
//class Son03 : public Base03 {
//
//public:
//	virtual void func() {
//		cout << "func��������" << endl;
//	}
//};
//
//void test03() {
//
//	//Base03 b; // ���������޷�ʵ��������
//	//new Base03; // ���������޷�ʵ��������
//
//	//Son03 s; // ���������д�������еĴ��麯��, �����޷�ʵ��������
//	
//	Base03* base = new Son03;
//	base->func();
//
//}
//
//
//
//// 4.��̬������ --- ������Ʒ
//// ������Ʒ�Ĵ�������Ϊ����ˮ -  ���� - ���뱭�� - ���븨��
//// ���ö�̬����ʵ�ֱ��������ṩ����������Ʒ���࣬�ṩ�����������ȺͲ�Ҷ
//class AbstructDriniking {
//
//public:
//
//	// ��ˮ
//	virtual void Boil() = 0;
//
//	// ����
//	virtual void Brew() = 0;
//
//	// ���뱭��
//	virtual void PourInCup() = 0;
//
//	// ���븨��
//	virtual void PutSomething() = 0;
//
//	// ������Ʒ
//	void makeDrink() {
//
//		Boil();
//		Brew();
//		PourInCup();
//		PutSomething();
//	}
//};
//
//// ��������
//class Coffee :public AbstructDriniking {
//public:
//	// ��ˮ
//	virtual void Boil() {
//		cout << "ũ��ɽȪ" << endl;
//	}
//
//	// ����
//	virtual void Brew() {
//		cout << "���ݿ���" << endl;
//	}
//
//	// ���뱭��
//	virtual void PourInCup() {
//		cout << "���뱭��" << endl;
//	}
//
//	// ���븨��
//	virtual void PutSomething() {
//		cout << "�����Ǻ���" << endl;
//	}
//};
//
//// ������
//class Tea :public AbstructDriniking {
//public:
//	// ��ˮ
//	virtual void Boil() {
//		cout << "ũ��ɽȪ" << endl;
//	}
//
//	// ����
//	virtual void Brew() {
//		cout << "���ݲ�Ҷ" << endl;
//	}
//
//	// ���뱭��
//	virtual void PourInCup() {
//		cout << "���뱭��" << endl;
//	}
//
//	// ���븨��
//	virtual void PutSomething() {
//		cout << "��������" << endl;
//	}
//};
//
//// ��������
//void doWork(AbstructDriniking * abs) {   // AbusturctDrinking *abs = new Coffee; 
//	abs->makeDrink();
//	delete abs; // �ͷ�
//}
//
//void test04() {
//
//	// ��������
//	doWork(new Coffee);
//
//	// ������Ҷ
//	doWork(new Tea);
//}
//
//// 5. �������ʹ�������
//// ��̬ʹ��ʱ����������������Կ��ٵ���������ô����ָ�����ͷ�ʱ�޷����õ��������������
//// �����ʽ���������е�����������Ϊ ������ ���� ��������
//// �������ʹ����������ԣ�
////		���Խ������ָ���ͷ��������
////		����Ҫ�о���ĺ���ʵ��
//// �������ʹ�����������
////		����Ǵ����������������ڳ����࣬�޷�ʵ��������
//
//// �������﷨��
//// virtual ~����() {}
//// ���������﷨��
//// virtual ~����() = 0; 
//// ����::~����() {}
//
//// ������
//class Animal01 {
//
//public:
//	Animal01() {
//		cout << "Animal01���캯��" << endl;
//	}
//	
//	//// ������
//	//// ���������� ���Խ�� ����ָ���ͷ��������ʱ���ɾ�������
//	//virtual ~Animal01() {
//	//	cout << "Animal01��������" << endl;
//	//}
//
//	// �������� ��Ҫ���� Ҳ��Ҫ��ʵ��
//	// ����Ǵ����������������ڳ����࣬�޷�ʵ��������
//	virtual ~Animal01() = 0;
//
//
//	// ���麯��
//	virtual void speak() = 0;
//};
//
//Animal01:: ~Animal01() {
//
//	cout << "Animal01��������" << endl;
//}
//
//// è��
//class Cat01 : public Animal01 {
//public:
//
//	Cat01(string name) {
//		cout << "Cat01�Ĺ��캯������" << endl;
//		m_Name = new string(name);
//	}
//	void speak() {
//		cout << *m_Name << "Сè˵��" << endl;
//	}
//
//	string *m_Name;
//
//	~Cat01() {
//		if (m_Name != NULL) {
//			cout << "Cat01��������������" << endl;
//			delete m_Name;
//			m_Name == NULL;
//		}
//	}
//};
//
//void test05() {
//
//	Animal01 * animal = new Cat01("Tom");
//	animal->speak();
//	// ����ָ��������ʱ�� ���������������������, ���������������ڶ�������ʱ, ������ڴ�й¶������
//	delete animal;
//}
//
//// �ܽ᣺
//// �������������������������ͨ������ָ���ͷ��������
//// ���������û�ж������ݣ����Բ�дΪ��������������
//// ӵ�д���������������Ҳ���ڳ�����
//
////  6.��̬������ -- ������װ
//
//// ����ͬ�����
//// ����CPU��
//class CPU {
//public:
//	// ������㺯��
//	 virtual void calculate() = 0;
//};
//
//// �����Կ���
//class VideoCard {
//public:
//	// ������ʾ����
//	virtual void dispaly() = 0;
//};
//
//// �����ڴ�����
//class Memory {
//public:
//	// ����洢����
//	virtual void Storage() = 0;
//};
//
//// ������
//class Computer {
//public:
//	// 
//	Computer(CPU* cpu, VideoCard* videocard, Memory* memory) {
//		m_Cpu = cpu;
//		m_Videocard = videocard;
//		m_Memory = memory;
//	}
//
//	// �ṩ��������
//	void work() {
//		// �������������, ���ýӿ�
//		m_Cpu->calculate();
//		m_Videocard->dispaly();
//		m_Memory->Storage();
//	}
//
//	// �ṩһ���������� �ͷ�3���������
//	~Computer() {
//		// �ͷ�CPU���
//		if (m_Cpu != NULL) {
//			delete m_Cpu;
//			m_Cpu = NULL;
//		}
//
//		// �ͷ��Կ����
//		if (m_Videocard != NULL) {
//			delete m_Videocard;
//			m_Videocard = NULL;
//		}
//
//		// �ͷ��ڴ����
//		if (m_Memory != NULL) {
//			delete m_Memory;
//			m_Memory = NULL;
//		}
//	}
//
//
//private:
//	CPU *m_Cpu; // CPU�Կ�ָ��
//	VideoCard *m_Videocard; // �Կ����ָ��
//	Memory *m_Memory; // �ڴ������ָ��
//};
//
//// ���峧��
//// intel ����
//class IntelCPU : public CPU {
//
//public:
//	virtual void calculate(){
//		cout << "Intel��CPU��ʼ������" << endl;
//	}
//};
//
//class IntelVideoCard : public VideoCard {
//
//public:
//	virtual void dispaly() {
//		cout << "Intel���Կ���ʼ��ʾ��" << endl;
//	}
//};
//
//class IntelMemory : public Memory {
//
//public:
//	virtual void Storage() {
//		cout << "Intel���ڴ濨��ʼ�洢��" << endl;
//	}
//};
//
//// Lenovo����
//class LenovoCPU : public CPU {
//
//public:
//	virtual void calculate() {
//		cout << "Lenovo��CPU��ʼ������" << endl;
//	}
//};
//
//class LenovoVideoCard : public VideoCard {
//
//public:
//	virtual void dispaly() {
//		cout << "Lenovo���Կ���ʼ��ʾ��" << endl;
//	}
//};
//
//class LenovoMemory : public Memory {
//
//public:
//	virtual void Storage() {
//		cout << "Lenovo���ڴ濨��ʼ�洢��" << endl;
//	}
//};
//
//void test06() {
//	
//	// ��һ̨�������
//	CPU* intelCpu = new IntelCPU;
//	VideoCard* intelCard = new IntelVideoCard;
//	Memory* intelMemory = new IntelMemory;
//
//	// ������һ̨����
//	Computer* computer1 = new Computer(intelCpu, intelCard, intelMemory);
//	computer1->work();
//	delete computer1;
//
//	cout << "------------------" << endl;
//	cout << "�ڶ�̨���ӿ�ʼ����" << endl;
//	// �����ڶ�̨����
//	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
//	computer2->work();
//	delete computer2;
//
//	cout << "------------------" << endl;
//	cout << "����̨���ӿ�ʼ����" << endl;
//	// ��������̨����
//	Computer* computer3 = new Computer(new LenovoCPU, new IntelVideoCard, new LenovoMemory);
//	computer3->work();
//	delete computer3;
//}
//
//
//int main() {
//
//
//	//test01();
//	//test02();
//	//test02_1();
//	//test03();
//	//test04();
//	//test05();
//	test06();
//	return 0;
//}