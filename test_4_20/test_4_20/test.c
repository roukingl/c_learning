#define  _CRT_SECURE_NO_WARNINGS 1


//
//int main()
//{
//	char ch = 0;
//
//	printf("���ú�ѧϰ��?:>Y/N\n");
//	scanf("%c", &ch);//�������ѡ��
//
//	if (ch == 'Y')//ѡ���һ�����
//	{
//		printf("���������۷�\n");
//	}
//	else if (ch == 'N')//ѡ��ĵڶ������
//	{
//		printf("�����\n");
//	}
//	else//ѡ��ĵ��������
//	{
//		printf("�������\n");
//	}
//	//ע��:else���һ��ѡ����ǰ������ѡ�񼯺ϵĲ���
//
//	return 0;
//}
//
//
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	
//	while (i < 3)//�ж�Ϊ��Ϊ��
//	{
//		printf("���ע,�����,���ղ�\n");
//		i = i + 1;
//	}
//	//i = 0ʱ,0<3����,Ϊ�����{ }ִ�д�ӡ��i��Ϊ1,����ѭ��
//	//ֱ��i = 3ʱ,3<3ʱ������Ϊ�ٽ��� 
//
//	return 0;
//}
//
//
//#include <stdio.h>
//
//extern int Add(int, int);//��������,�Ա�����˵��һ������������
//
//int main()//������ʵ��һ���������԰���������������
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int ret = Add(a, b);//�������� //����ѧ����f(x, y) = x + yһ������,
//	                               //��������ʵ��=�ұߵĲ���
//	printf("%d", ret);
//
//	return 0;
//}
//
//int Add(int x, int y)//����ʵ�ֲ���(��������)
//{
//	return x + y;//���ĵ��þͰ����ֵ���ص���
//}
//
//
//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,10 };
//
//	int a = arr[3];//��arr[3]�ڵ�������a
//	printf("%d", a);
//
//	return 0;
//}

//ʵ��һ���������ж�һ�����ǲ���������
//��������ʵ�ֵĺ�����ӡ100��200֮���������


//#include <stdio.h>
//#include <math.h>
//
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j < sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		int ret = is_prime(i);
//		if (ret == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}


//ʵ�ֺ����ж�year�ǲ������ꡣ


#include <stdio.h>

int main()
{
	int year = 0;
	scanf("%d", &year);
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		printf("%d��������\n", year);
	}
	else
	{
		printf("%d�겻������\n", year);
	}

	return 0;
}
