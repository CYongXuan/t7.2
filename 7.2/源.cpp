#define _CRP_SECURE_NO_WARNINGS 1

//����һ����stdio.h ���ļ�
//std-��׼ standard input output
#include <stdio.h>
//	//���˵Ķ���-���к�
//	//#include 

//int������
//mainǰ���int��ʾ�溯�����÷���һ������ֵ
//int main()//������-�������-main��������ֻ��һ��
//
//{
//	printf("hello world\n");
//
//	//   \n�ǻ���
//	 //print function - printf - ��ӡ����
//	//�⺯��-c���Ա����ṩ������ʹ�õĺ���

//	return 0;//����0
//}


//%f - ��ӡ�������� - ��С��
//%p -  �Ե�ַ����ʽ��ӡ
//%x - ��ӡ16������ֵ 
//%c--��ӡ�ַ���ʽ������
//%d -- ��ӡ����ʮ�������� 
//char-�ַ�����
//int main()
//{
//	//char ch='A';//�ڴ�
//	//printf("%c\n", ch); 
//	//20;
//	//short int - ������
//	//int - ����
//
//
//	//int age = 20;
//	//printf("%d", age);
//	
//	//long long - ����������
//	//long - ������
//	//long num = 99;
//	//printf("%d", num);
//
//	//float - �����ȸ�����
//	//float f = 5.12;
//	//printf("%f\n", f);
//
//	//double - ˫���ȸ�����
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
//	printf("%d\n", sizeof(char));//      1 - 1�ֽ�
//	printf("%d\n", sizeof(short));//     2 - 2�ֽ�
//	printf("%d\n", sizeof(int));//       4
//	printf("%d\n", sizeof(long));//      4/8  C���Ա�׼�涨sizeof(long)>=sizeof(int)
//	printf("%d\n", sizeof(long long));// 8
//	printf("%d\n", sizeof(float));//     4
//	printf("%d\n", sizeof(double));//    8
//		return 0;
//}
//�ֽ�
//������еĵ�λ
//bit - ����λ - ���Դ洢һ����λ 1����0
//byte - �ֽ� - ����8��bit��01234567��
//kb - ����1024��byte
//mb - 
//gb
//tb
// 123 ʮ����
// 1*10^2 + 2*10^1 + 3*10^0  100+20+3=123
//
//010 ������
// 0*2^2 + 1*2^1 + 0*2^0   0+2+0=2
// ������ 

//int main()
//{
//	//����
//	//20
//	short age = 20;//���ڴ�����2���ֽ�=16bitλ���������20
//	float weight = 95.6;//���ڴ�����4���ֽ�=32bitλ�����С��
//	return 0;
//}
//

//int num2 = 20;//ȫ�ֱ���-�����ڴ����({})֮��ģ�������������
//int main()
//{
//	int num1 = 10;//�ֲ����� - �����ڴ����({})֮�ڵ�
//	return 0;
//}

//int a = 100;
//int main()
//{
//	int a = 10;
//	//�ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ��ͬ-������ᣬ����bug
//	//���ֲ�������ȫ�ֱ���������ͬʱ���ֲ���������
//	printf("%d\n", a);
//	return 0;
//}
//


//int main()
//{
//	{
//		int a = 10;//�ֲ��������ܱ�ʶ���������ڴ����ţ�Ҫ��printf�ŵ�ͬһ��������
//	}              //�ֲ����������������ǣ�����������ʼ�������������
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//
//	//����2�����ĺ�
//	int num1 ;
//	int num2 ;
//	int sum ;
//	//��������-ʹ�����뺯��scanf
//	scanf_s("%d%d", &num1 , &num2);//&ȡ��ַ����
//	
//	//C�����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ��
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
//	//δ�����ı�ʶ��
//	//����extern�ⲿ���ŵ�
//	//ȫ�ֱ�������������������
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



