#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = rand();//���һ�����������
	printf("%d\n", a);
	int b = 0;//��ʼ��
	int c = 3;//�������
	while (c > 0)
	{
		printf("��������µ���\n");
		scanf_s("%d", &b);//��������
		if (a == b)
		{
			printf("��ϲ��µ���\n");
			break;
		}
		else if (b > a)
		{
			printf("��´������ٲ�\n");
			c--;

		}
		else
		{
			printf("���С�����ٲ�\n");
				c--;
		}
	}
	if (c == 0)
	{
		printf("��û�л�����\n");
	}
	return 0;
}