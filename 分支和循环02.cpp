#define _CRT_SECURE_NO_WARNINGS 1

/*
时间：2021年2月5日12:58:08；
author：李子；
内容：代码笔记；
*/

#include <stdio.h>

//*********************闰年计算(1000到2000年之间的闰年)*************************
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i=1000;i<2000;i++) //生成1000到2000年的年份
//	{
//		/*闰年的判断条件有两条：
//		1、与4取模等于0并且与100取模不等于0；
//		2、与400取模等于0；*/
//		if (((i%4==0)&&(i%100!=0))||(i%400==0))
//		{
//			printf("%d", i);
//			sum++;
//		}
//	}
//	printf("\n%d", sum);
//	return 0;
//}
//**********************素数计算(找100到200之间的素数)*************************
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2) //生成100到200之间的数,且偶数不可能为素数
//	{
//		/*
//		素数的判断：
//		1、试除法：
//			除了1和他本身外不能被其他数整除——>从2到i-1不能被整除
//		*/
//		for (n = 2; n <= sqrt(i) ; n++)
//		{
//			if (i % n == 0)
//			{
//				break;
//			}
//		}
//		//sqrt开平方的数学库函数
//		if (n >sqrt(i))
//		{
//			printf("%d\n", i);
//			count++;
//		}
//	}
//	printf("素数有：%d个\n", count);
//	return 0;
//}
////文章：《素数求解的n种境界》
//*******************************1到100之间所有带9的数**************************
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if ((i % 10 == 9) || (i / 10 == 9))
//		{
//			printf("%d\n", i);
//			count++;
//		}
//	}
//	count = count + 1;
//	printf("\n有%d个", count);
//	return 0;
//}
//**************************************分数求和**********************************
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("\n%lf\n", sum);
//	return 0;
//}
//**********************************求10个整数中的最大值***************************
//int main()
//{
//	char arr[] = { -1,-4,6,2,8,-2,7,4,9,-8};
//	int i = 0;
//	int max = arr[0];
//	for ( i = 0; i <= 10; i++ )
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("\n%d\n", max);
//	return 0;
//}
//*******************************乘法口诀表****************************************
int main()
{
	int m = 0;
	int n = 0;
	int time = 0;
	for (m = 1; m <= 9; m++)
	{
		for ( n = 1; n <=m; n++)
		{
			time = m * n;
			//printf("%d*%d=%2d ", m, n, time);//%2d表示打印时打印两位，不够两位用空格补齐。（右对齐）
			printf("%d*%d=%-2d ", m, n, time);//%-2d表示打印时打印两位，不够两位用空格补齐。（左对齐）

		}
		printf("\n");
	}
	return 0;
}
