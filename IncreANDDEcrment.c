#include <stdio.h>

int main()
{
	int x = 1; //x ���� ����

	printf("x =%d\n", x++); //x�� x ���ϱ�
	printf("x =%d\n", x++); //x�� x ���ϱ�
	printf("x =%d\n", ++x); //x�� x ���ϱ�
	printf("x =%d\n", x--); //x�� x ����
	printf("x =%d\n", x--); //x�� x ����
	printf("x =%d\n", --x); //x�� x ���ϱ�
	return 0;
}