#include <stdio.h> 

int main()
{
	int i = 0; //int 박스 생성하고 0 저장
	while (i < 10) { //i가 10보다 작을때까지 반복
		if (i % 2 == 0) { //i를 2로 나눌때 나머지가 0인지 조건 부여
			i++; //i에 수 추가
			continue; //다시 처음으로 돌아가기
		}
		printf("%d Hello Woeld!\n",i); //출력
		i++; //출력 후 i에 1 추가
	}
	return 0; //조건문 탈출
}