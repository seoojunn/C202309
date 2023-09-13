#include <stdio.h>

int main()
{
	int x = 4; //x 정수 선언
	int y = 2; //y 정수 선언
	int z; //z 정수 선언

	z = x + y; //z에 x + y값 대입
	printf("z=x+y=%d\n", z); //z출력
	z = x - y; //z에  x - y값 대입
	printf("z=x-y=%d\n", z); //z출력
	z = x * y; //z에 x * y값 대입
	printf("z=x*y=%d\n", z); //z출력
	z = x / y; //z에 x / y값 대입
	printf("z=x/y=%d\n", z); //z출력
	return 0;
}