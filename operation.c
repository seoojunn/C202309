#include <stdio.h>

int main()
{
	int x = 4; //x ���� ����
	int y = 2; //y ���� ����
	int z; //z ���� ����

	z = x + y; //z�� x + y�� ����
	printf("z=x+y=%d\n", z); //z���
	z = x - y; //z��  x - y�� ����
	printf("z=x-y=%d\n", z); //z���
	z = x * y; //z�� x * y�� ����
	printf("z=x*y=%d\n", z); //z���
	z = x / y; //z�� x / y�� ����
	printf("z=x/y=%d\n", z); //z���
	return 0;
}