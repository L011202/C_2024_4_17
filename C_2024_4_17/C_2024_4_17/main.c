#define _CRT_SECURE_NO_DEPRECATE    
/*  ʹ��ָ���������������ֽ��н���   */
/*           ������⺯��              */
#include <stdio.h>
/*
	������:Swap
	����:ͨ�����յ�ַ��������������
*/
void Swap(int* x, int* y) {				//����Ҫ����ֵ����void�����������ǵ�ַ����ָ�������մ������Ĳ���
	int temp = *x;						//������ʱ�������洢��һ������ֵ
	*x = *y;
	*y = temp;
}
int main()
{
	int a = 0;
	int b = 0;
	printf("^��������������Ҫ���������֣�����ʱ�����������ÿո����^\n");
	printf("^ʾ��:10 20^\n");
	scanf("%d %d",&a,&b);
	printf("�޸�ǰ:a=%d,b=%d\n", a, b);
	Swap(&a, &b);		//��a��b�ĵ�ַ��Ϊ�βΣ��Ӷ����Լ���޸�a��b��ֵ
	printf("�޸ĺ�:a=%d,b=%d\n", a, b);
	return 0;
}