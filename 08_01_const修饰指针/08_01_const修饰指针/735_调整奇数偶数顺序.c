#define _CRT_SECURE_NO_WARNINGS 1
//调整数组使奇数全部都位于偶数前面。
//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中
//所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
#include<stdio.h>
int main()
{
	int i = 0;
	int a[100];
	int b [100];
	int* p = &b[0];
	int* m = &b[5];
	printf("请输入一个整数数组：");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	//判断a[i]是奇数还是偶数
	for (i = 0; i < 10; i++)
	{
		if (a[i] % 2 != 0)//奇数
		{
			*p = a[i];
			p++;
		}
		if (a[i] % 2 == 0)//偶数
		{
			*m = a[i];
			m++;
		}
	}
	printf("调整后：");
	for (i = 0; i < 10;i++)
	{
		printf("%d ",b[i]);
	}
	return 0;
}
