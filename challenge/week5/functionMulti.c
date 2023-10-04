#include <stdio.h>
long mul(int value); //int보다 더 큰 단위인 long로 반환

void main()
{
	printf("1부터 2까지의 곱은 %d\n", mul(2)); //곱하기 함수 호출 후 value에 2넣기
	printf("1부터 3까지의 곱은 %d\n", mul(3)); //곱하기 함수 호출 후 value에 3넣기
	printf("1부터 5까지의 곱은 %d\n", mul(5)); //곱하기 함수 호출 후 value에 5넣기
}
long mul(int value) //곱하기 함수 만들기
{
	int i = 1; //i=1
	long mul = 1; //mul=1

	while (i <= value) //i가 value 보다 작거나 같을때까지
	{
		mul = mul * i; //mul에 i곱하기
		i = i + 1; //반복문이 실행될 때 마다 i에 1 더하기
	}
	return mul; //결과값 반환
}