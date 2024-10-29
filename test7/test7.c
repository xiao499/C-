#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = rand();//获得一个随机的整数
	printf("%d\n", a);
	int b = 0;//初始化
	int c = 3;//机会次数
	while (c > 0)
	{
		printf("请输入你猜的数\n");
		scanf_s("%d", &b);//输入数字
		if (a == b)
		{
			printf("恭喜你猜到了\n");
			break;
		}
		else if (b > a)
		{
			printf("你猜大了请再猜\n");
			c--;

		}
		else
		{
			printf("你猜小了请再猜\n");
				c--;
		}
	}
	if (c == 0)
	{
		printf("你没有机会了\n");
	}
	return 0;
}