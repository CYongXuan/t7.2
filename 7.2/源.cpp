#define _CRP_SECURE_NO_WARNINGS 1

//包含一个叫stdio.h 的文件
//std-标准 standard input output
#include <stdio.h>
//	//别人的东西-打招呼
//	//#include 

//int是整型
//main前面的int表示面函数调用返回一个整型值
//int main()//主函数-程序入口-main函数有且只有一个
//
//{
//	printf("hello world\n");
//
//	//   \n是换行
//	 //print function - printf - 打印函数
//	//库函数-c语言本身提供给我们使用的函数

//	return 0;//返回0
//}


//%f - 打印浮点数字 - 打小数
//%p -  以地址的形式打印
//%x - 打印16进制数值 
//%c--打印字符格式的数据
//%d -- 打印整型十进制数据 
//char-字符类型
//int main()
//{
//	//char ch='A';//内存
//	//printf("%c\n", ch); 
//	//20;
//	//short int - 短整型
//	//int - 整型
//
//
//	//int age = 20;
//	//printf("%d", age);
//	
//	//long long - 更长的整型
//	//long - 长整型
//	//long num = 99;
//	//printf("%d", num);
//
//	//float - 单精度浮点数
//	//float f = 5.12;
//	//printf("%f\n", f);
//
//	//double - 双精度浮点数
//	//double d = 3.14;
//	//printf("%lf", d);
//
//	return 0;
//
//}
// 
// 
// 
//int main()
//{
//	printf("%d\n", sizeof(char));//      1 - 1字节
//	printf("%d\n", sizeof(short));//     2 - 2字节
//	printf("%d\n", sizeof(int));//       4
//	printf("%d\n", sizeof(long));//      4/8  C语言标准规定sizeof(long)>=sizeof(int)
//	printf("%d\n", sizeof(long long));// 8
//	printf("%d\n", sizeof(float));//     4
//	printf("%d\n", sizeof(double));//    8
//		return 0;
//}
//字节
//计算机中的单位
//bit - 比特位 - 可以存储一个单位 1或者0
//byte - 字节 - 等于8个bit（01234567）
//kb - 等于1024个byte
//mb - 
//gb
//tb
// 123 十进制
// 1*10^2 + 2*10^1 + 3*10^0  100+20+3=123
//
//010 二进制
// 0*2^2 + 1*2^1 + 0*2^0   0+2+0=2
// 二进制 

//int main()
//{
//	//年龄
//	//20
//	short age = 20;//向内存申请2个字节=16bit位，用来存放20
//	float weight = 95.6;//向内存申请4个字节=32bit位，存放小数
//	return 0;
//}
//

//int num2 = 20;//全局变量-定义在代码块({})之外的，定义整个程序
//int main()
//{
//	int num1 = 10;//局部变量 - 定义在代码块({})之内的
//	return 0;
//}

//int a = 100;
//int main()
//{
//	int a = 10;
//	//局部变量和全局变量的名字建议不要相同-容易误会，产生bug
//	//当局部变量和全局变量名字相同时，局部变量优先
//	printf("%d\n", a);
//	return 0;
//}
//


//int main()
//{
//	{
//		int a = 10;//局部变量不能被识别，作用域在大括号，要把printf放到同一个大括号
//	}              //局部变量的生命周期是：进入作用域开始，出作用域结束
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//
//	//计算2个数的和
//	int num1 ;
//	int num2 ;
//	int sum ;
//	//输入数据-使用输入函数scanf
//	scanf_s("%d%d", &num1 , &num2);//&取地址符号
//	
//	//C语言语法规定，变量要定义在当前代码块的最前面
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int global = 2020;
//void test()
//{
//	printf("test()---%d\n", global);
//}
//
//int main()
//{
//	test();
//	printf("%d\n", global);
//	return 0;
//}

//
//int main()
//{
//	//未声明的标识符
//	//声明extern外部符号的
//	//全局变量的作用是整个工程
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//}

//int main()
//{
//
//	printf("", );
//	return 0;
//}5615156
//



