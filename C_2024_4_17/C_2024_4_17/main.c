#define _CRT_SECURE_NO_DEPRECATE    
/*  使用指针对输入的两个数字进行交换   */
/*           初步理解函数              */
#include <stdio.h>
/*
	函数名:Swap
	作用:通过接收地址来交换两个数字
*/
void Swap(int* x, int* y) {				//不需要返回值，用void，传过来的是地址，用指针来接收传过来的参数
	int temp = *x;						//创建临时变量来存储第一个数的值
	*x = *y;
	*y = temp;
}
int main()
{
	int a = 0;
	int b = 0;
	printf("^请你输入两个你要交换的数字，输入时两个数字请用空格隔开^\n");
	printf("^示例:10 20^\n");
	scanf("%d %d",&a,&b);
	printf("修改前:a=%d,b=%d\n", a, b);
	Swap(&a, &b);		//将a，b的地址作为形参，从而可以间接修改a，b的值
	printf("修改后:a=%d,b=%d\n", a, b);
	return 0;
}