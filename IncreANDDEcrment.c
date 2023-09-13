#include <stdio.h>

int main()
{
	int x = 1; //x 정수 선언

	printf("x =%d\n", x++); //x에 x 더하기
	printf("x =%d\n", x++); //x에 x 더하기
	printf("x =%d\n", ++x); //x에 x 더하기
	printf("x =%d\n", x--); //x에 x 빼기
	printf("x =%d\n", x--); //x에 x 빼기
	printf("x =%d\n", --x); //x에 x 더하기
	return 0;
}