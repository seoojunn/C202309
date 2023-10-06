#include <stdio.h>
int hapf(int value);

int main()
{
	printf("1부터 10까지의 합은 %d\n", hapf(10)); //더하기 함수 호출 후 value에 10넣기
	printf("1부터 100까지의 합은 %d\n", hapf(100)); //더하기 함수 호출 value에 100넣기
	printf("1부터 1000까지의 합은 %d\n", hapf(1000)); //더하기 함수 호출 value에 1000넣기
	return 0;
}
int hapf(int value) // 더하기 함수 만들기
{
	int i=1; //i=1
	int hap = 0; //hap=0

	while (i <= value) //i가 value보다 작거나 같을때까지
	{
		hap = hap + i; //hap에 i더하기
		i = i + 1; //i에 1추가(for의 증감식은 while로 변형시 맨 아래 해야 결과값 변화 없이 나옴)
	}
	return hap; //결과 값 반환
}