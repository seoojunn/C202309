#include <stdio.h>

int main()
{
	int x = +4; //x 선언
	int y = -2; //y 선언

	printf("x +(-y) =%d\n", x + (-y)); //x +(-y)출력
	printf("-x +(+y) =%d\n", -x + (+y)); //-x +(+y)출력
	return 0;
}