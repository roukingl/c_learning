#define  _CRT_SECURE_NO_WARNINGS 1

//
//#include <stdio.h>
//
//int main()
//{
//	const int x = 10;
//	x = 20;
//	return 0;
//}


#include <stdio.h>

int main()
{
	int i = 10;
	printf("�ı�ǰ��%d\n", i);
	      //&��ȡ��ַ������������ȡ����ַ
	int* pi = &i; //���ǰ�i�����ĵ�ַȥ�����ŵ�ָ�����pi��

	*pi = 20; //��Ϊpi��ŵ���i�ĵ�ַ������ͨ�������ò������ҵ�i��λ�÷�20  

	printf("�ı��%d\n", i);


	return 0;
}
