#include <stdio.h>

int main()
{
	int x = 4; //x ����
	int y = 2; //y ����
	int z; //z ���� ����

	z = (x+y)*(x-y); //z�� (x+y)*(x-y) �� ����
	printf("z= (x+y) * (x-y) =%d\n", z); //(x+y) * (x-y)���
	z = (x * y) * (x / y); //z�� (x * y) * (x / y) �� ����
	printf("z= (x * y) * (x / y) =%d\n", z); //(x * y) * (x / y)���
	z = x+y+2004; //z�� x+y+2004�� ����
	printf("z=x+y+2004=%d\n", z); //x+y+2004���
	return 0;
}