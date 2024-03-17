//#include<iostream>
//using namespace	std;
//#include <string>
//
//// 多态
//// 1.基本概念
//// 多态分为两类
////*静态多态: 函数重载 和 运算符重载属于静态多态，复用函数名
////* 动态多态 : 派生类和虚函数实现运行时多态
//
////静态多态和动态多态区别：
////* 静态多态的函数地址早绑定 - 编译阶段确定函数地址
////* 动态多态的函数地址晚绑定 - 运行阶段确定函数地址
//
//// 动物类
//class Animal {
//
//public:
//	// 不加virtual时 Animal类只有1个字节用于占位置
//	// 加了之后变为4个字节,有了一个 vfptr(虚函数(表)指针)(virtual function pointer)
//	// 
//	// 虚函数
//	virtual void speak() {
//		cout << "动物说话" << endl;
//	}
//};
//
//// 猫类
//class Cat : public Animal {
//public:
//	 void speak() {
//		cout << "小猫说话" << endl;
//	}
//};
//
//// 狗类
//class Dog : public Animal {
//public:
//	// 函数重写 : 函数返回值类型 函数名 参数列表 完全相同
//	void speak() {
//		cout << "小狗说话" << endl;
//	}
//};
//
//// 执行说话函数
//// 地址早绑定 在编译阶段确定函数地址
//// 如果想要执行猫说话, 那么这个函数地址就不能提前绑定, 需要在运行阶段进行绑定, 地址晚绑定
//
//// 动态多态满足条件
//// 1)有继承关系
//// 2)子类要重新父类的虚函数
//
//// 动态多态使用
//// 父类的指针或引用 指向子类对象
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
////总结：C++开发提倡利用多态设计程序架构，因为多态优点很多
//
//
//
//// 2. 多态案例一 --- 计算器类
//// 案例描述：
//// 分别利用普通写法和多态技术，设计实现两个操作数进行运算的计算器类
//
//// 多态的优点：
//// 代码组织结构清晰
//// 可读性强
//// 利于前期和后期的扩展以及维护
//
//// 用普通写法与多态写法实现计算器
//
//// 普通写法
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
//		// 如果想扩展新的功能, 需要修改源码
//		// 在真实的开发中 提倡 开闭原则
//		// 开闭原则: 对扩展进行开放, 对修改进行关闭
//	}
//
//	int m_Num1;
//	int m_Num2;
//};
//
//
//void test02() {
//
//	// 创建一个计算器对象
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
//// 利用多态实现计算器
//// 实现计算器抽象类
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
//// 加法计算器类
//class AddCalculator : public AbstructCalculator {
//public:
//	int getResult() {
//		return m_Num1 + m_Num2;
//	}
//};
//
//// 减法计算器类
//class SubCalculator : public AbstructCalculator {
//public:
//	int getResult() {
//		return m_Num1 - m_Num2;
//	}
//};
//
//// 乘法计算器类
//class MulCalculator : public AbstructCalculator {
//public:
//	int getResult() {
//		return m_Num1 * m_Num2;
//	}
//};
//
//void test02_1() {
//
//	// 多态使用条件
//	// 父类指针或者引用指向子类对象
//
//	// 加法运算
//	AbstructCalculator* abc = new AddCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 10;
//
//	cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;
//	// 用完记得销毁
//	delete abc; // 释放堆区数据, 指针类型不变
//
//	// 减法运算
//	abc = new SubCalculator;
//	abc->m_Num1 = 100;
//	abc->m_Num2 = 100;
//	cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult() << endl;
//	// 用完记得销毁
//	delete abc; 
//
//	// 乘法运算
//	abc = new SubCalculator;
//	abc->m_Num1 = 100;
//	abc->m_Num2 = 100;
//	cout << abc->m_Num1 << " * " << abc->m_Num2 << " = " << abc->getResult() << endl;
//	// 用完记得销毁
//	delete abc;
//}
//
//
//
//
//// 3.纯虚函数和抽象类
//// 在多态中，通常父类中虚函数的实现是毫无意义的，主要都是调用子类重写的内容
//// 因此可以将虚函数改为 纯虚函数
////
//// 纯虚函数语法：virtual 返回值类型 函数名 （参数列表） = 0; 
//// 当类中有了纯虚函数，这个类也称为 抽象类
////
//// 抽象类特点：
//// 无法实例化对象
//// 子类必须重写抽象类中的纯虚函数，否则也属于抽象类
//
//class Base03 {
//public:
//	// 纯虚函数
//	// 只要有一个纯虚函数, 这个类就被称为抽象类
//	// 抽象类特点:
//	// 1)无法实例化对象
//	// 2)子类必须重写抽象类中的纯虚函数，否则也属于抽象类
//	virtual void func() = 0;
//
//};
//
//class Son03 : public Base03 {
//
//public:
//	virtual void func() {
//		cout << "func函数调用" << endl;
//	}
//};
//
//void test03() {
//
//	//Base03 b; // 抽象类是无法实例化对象
//	//new Base03; // 抽象类是无法实例化对象
//
//	//Son03 s; // 子类必须重写抽象类中的纯虚函数, 否则无法实例化对象
//	
//	Base03* base = new Son03;
//	base->func();
//
//}
//
//
//
//// 4.多态案例二 --- 制作饮品
//// 制作饮品的大致流程为：煮水 -  冲泡 - 倒入杯中 - 加入辅料
//// 利用多态技术实现本案例，提供抽象制作饮品基类，提供子类制作咖啡和茶叶
//class AbstructDriniking {
//
//public:
//
//	// 煮水
//	virtual void Boil() = 0;
//
//	// 冲泡
//	virtual void Brew() = 0;
//
//	// 倒入杯中
//	virtual void PourInCup() = 0;
//
//	// 加入辅料
//	virtual void PutSomething() = 0;
//
//	// 制作饮品
//	void makeDrink() {
//
//		Boil();
//		Brew();
//		PourInCup();
//		PutSomething();
//	}
//};
//
//// 制作咖啡
//class Coffee :public AbstructDriniking {
//public:
//	// 煮水
//	virtual void Boil() {
//		cout << "农夫山泉" << endl;
//	}
//
//	// 冲泡
//	virtual void Brew() {
//		cout << "冲泡咖啡" << endl;
//	}
//
//	// 倒入杯中
//	virtual void PourInCup() {
//		cout << "加入杯中" << endl;
//	}
//
//	// 加入辅料
//	virtual void PutSomething() {
//		cout << "加入糖和奶" << endl;
//	}
//};
//
//// 制作茶
//class Tea :public AbstructDriniking {
//public:
//	// 煮水
//	virtual void Boil() {
//		cout << "农夫山泉" << endl;
//	}
//
//	// 冲泡
//	virtual void Brew() {
//		cout << "冲泡茶叶" << endl;
//	}
//
//	// 倒入杯中
//	virtual void PourInCup() {
//		cout << "加入杯中" << endl;
//	}
//
//	// 加入辅料
//	virtual void PutSomething() {
//		cout << "加入柠檬" << endl;
//	}
//};
//
//// 制作函数
//void doWork(AbstructDriniking * abs) {   // AbusturctDrinking *abs = new Coffee; 
//	abs->makeDrink();
//	delete abs; // 释放
//}
//
//void test04() {
//
//	// 制作咖啡
//	doWork(new Coffee);
//
//	// 制作茶叶
//	doWork(new Tea);
//}
//
//// 5. 虚析构和纯虚析构
//// 多态使用时，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构代码
//// 解决方式：将父类中的析构函数改为 虚析构 或者 纯虚析构
//// 虚析构和纯虚析构共性：
////		可以解决父类指针释放子类对象
////		都需要有具体的函数实现
//// 虚析构和纯虚析构区别：
////		如果是纯虚析构，该类属于抽象类，无法实例化对象
//
//// 虚析构语法：
//// virtual ~类名() {}
//// 纯虚析构语法：
//// virtual ~类名() = 0; 
//// 类名::~类名() {}
//
//// 动物类
//class Animal01 {
//
//public:
//	Animal01() {
//		cout << "Animal01构造函数" << endl;
//	}
//	
//	//// 虚析构
//	//// 利用虚析构 可以解决 父类指针释放子类对象时不干净的问题
//	//virtual ~Animal01() {
//	//	cout << "Animal01析构函数" << endl;
//	//}
//
//	// 纯虚析构 需要声明 也需要有实现
//	// 如果是纯虚析构，该类属于抽象类，无法实例化对象
//	virtual ~Animal01() = 0;
//
//
//	// 纯虚函数
//	virtual void speak() = 0;
//};
//
//Animal01:: ~Animal01() {
//
//	cout << "Animal01析构函数" << endl;
//}
//
//// 猫类
//class Cat01 : public Animal01 {
//public:
//
//	Cat01(string name) {
//		cout << "Cat01的构造函数调用" << endl;
//		m_Name = new string(name);
//	}
//	void speak() {
//		cout << *m_Name << "小猫说话" << endl;
//	}
//
//	string *m_Name;
//
//	~Cat01() {
//		if (m_Name != NULL) {
//			cout << "Cat01的析构函数调用" << endl;
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
//	// 父类指针在析构时候 不会调用子类中析构函数, 导致子类中若存在堆区数据时, 会产生内存泄露的问题
//	delete animal;
//}
//
//// 总结：
//// 虚析构或纯虚析构就是用来解决通过父类指针释放子类对象
//// 如果子类中没有堆区数据，可以不写为虚析构或纯虚析构
//// 拥有纯虚析构函数的类也属于抽象类
//
////  6.多态案例三 -- 电脑组装
//
//// 抽象不同零件类
//// 抽象CPU类
//class CPU {
//public:
//	// 抽象计算函数
//	 virtual void calculate() = 0;
//};
//
//// 抽象显卡类
//class VideoCard {
//public:
//	// 抽象显示函数
//	virtual void dispaly() = 0;
//};
//
//// 抽象内存条类
//class Memory {
//public:
//	// 抽象存储函数
//	virtual void Storage() = 0;
//};
//
//// 电脑类
//class Computer {
//public:
//	// 
//	Computer(CPU* cpu, VideoCard* videocard, Memory* memory) {
//		m_Cpu = cpu;
//		m_Videocard = videocard;
//		m_Memory = memory;
//	}
//
//	// 提供工作函数
//	void work() {
//		// 让零件工作起来, 调用接口
//		m_Cpu->calculate();
//		m_Videocard->dispaly();
//		m_Memory->Storage();
//	}
//
//	// 提供一个析构函数 释放3个电脑零件
//	~Computer() {
//		// 释放CPU零件
//		if (m_Cpu != NULL) {
//			delete m_Cpu;
//			m_Cpu = NULL;
//		}
//
//		// 释放显卡零件
//		if (m_Videocard != NULL) {
//			delete m_Videocard;
//			m_Videocard = NULL;
//		}
//
//		// 释放内存零件
//		if (m_Memory != NULL) {
//			delete m_Memory;
//			m_Memory = NULL;
//		}
//	}
//
//
//private:
//	CPU *m_Cpu; // CPU显卡指针
//	VideoCard *m_Videocard; // 显卡零件指针
//	Memory *m_Memory; // 内存条零件指针
//};
//
//// 具体厂商
//// intel 厂商
//class IntelCPU : public CPU {
//
//public:
//	virtual void calculate(){
//		cout << "Intel的CPU开始计算了" << endl;
//	}
//};
//
//class IntelVideoCard : public VideoCard {
//
//public:
//	virtual void dispaly() {
//		cout << "Intel的显卡开始显示了" << endl;
//	}
//};
//
//class IntelMemory : public Memory {
//
//public:
//	virtual void Storage() {
//		cout << "Intel的内存卡开始存储了" << endl;
//	}
//};
//
//// Lenovo厂商
//class LenovoCPU : public CPU {
//
//public:
//	virtual void calculate() {
//		cout << "Lenovo的CPU开始计算了" << endl;
//	}
//};
//
//class LenovoVideoCard : public VideoCard {
//
//public:
//	virtual void dispaly() {
//		cout << "Lenovo的显卡开始显示了" << endl;
//	}
//};
//
//class LenovoMemory : public Memory {
//
//public:
//	virtual void Storage() {
//		cout << "Lenovo的内存卡开始存储了" << endl;
//	}
//};
//
//void test06() {
//	
//	// 第一台电脑零件
//	CPU* intelCpu = new IntelCPU;
//	VideoCard* intelCard = new IntelVideoCard;
//	Memory* intelMemory = new IntelMemory;
//
//	// 创建第一台电脑
//	Computer* computer1 = new Computer(intelCpu, intelCard, intelMemory);
//	computer1->work();
//	delete computer1;
//
//	cout << "------------------" << endl;
//	cout << "第二台电视开始工作" << endl;
//	// 创建第二台电脑
//	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
//	computer2->work();
//	delete computer2;
//
//	cout << "------------------" << endl;
//	cout << "第三台电视开始工作" << endl;
//	// 创建第三台电脑
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