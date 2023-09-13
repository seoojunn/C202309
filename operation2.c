#include <stdio.h>

int main()
{
	int x = 4; //x 선언
	int y = 2; //y 선언
	int z; //z 정수 선언

	z = (x+y)*(x-y); //z에 (x+y)*(x-y) 값 대입
	printf("z= (x+y) * (x-y) =%d\n", z); //(x+y) * (x-y)출력
	z = (x * y) * (x / y); //z에 (x * y) * (x / y) 값 대입
	printf("z= (x * y) * (x / y) =%d\n", z); //(x * y) * (x / y)출력
	z = x+y+2004; //z에 x+y+2004값 대입
	printf("z=x+y+2004=%d\n", z); //x+y+2004출력
	return 0;
}