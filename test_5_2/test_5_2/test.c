#define  _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	int i = 9;
//	char ch = 3;
//	double j = 2.4;
//	float f = 6.4f;
//	printf("%d\n", sizeof(i));//(��i������int�������ڴ��з���Ŀռ�)
//	printf("%d\n", sizeof (int));
//
//	printf("%d\n", sizeof ch);//������ȥ��Ҳ���������С
//						 //�ɴ˿��Կ���sizeof�²��������Ǻ���
//	printf("%d\n", sizeof (char)); 
//
//
//	printf("%d\n", sizeof(j));
//	printf("%d\n", sizeof(double));
//
//	printf("%d\n", sizeof(f));
//	printf("%d\n", sizeof(float));
//
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//
//	//����д��ѭ����ӡ1-10����
//
//	i = 1; // ��1��ʼ��ӡ
//	while (i <= 10)//i ������������ѭ��
//	{
//		printf("%d ", i);
//		//Ҫ�ı�i����д��i = i + 1;
//		i++;//Ҳ����д������
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//typedef unsigned int u_int;
//
//int main()
//{
//	u_int i = 20;
//
//	printf("%u\n", i);
//
//	return 0;
//}


//#include <stdio.h>
//
//void test()
//{
//    int j = 0;//���Ƕ�֪��j��test��������ʱ���٣���ʼʱ����
//              //��ӡʱ��һֱ��ӡ1���ﲻ����ӡ0-9��Ч��
//    j++;
//    printf("%d ", j);
//}
//
//int main()
//{
//    int i = 0;
//    for (i = 0; i < 10; i++)//��ӡ0-9
//    {
//        test();
//    }
//    return 0;
//}


#include <stdio.h>

void test()
{
    //static���ξֲ�����
    static int i = 0;//��������������������
    i++;
    printf("%d ", i);
}

int main()
{
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        test();
    }
    return 0;
}
