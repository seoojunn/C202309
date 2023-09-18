#include <stdio.h>

int main()
{
	int i = 0; //int 박스 생성하고 0 저장
	do { //do로 실행
		if (i % 2 == 0) { //i를 2로 나누고 나머지가 나온다면
			i++; // i에 1추가
			continue; //다시 처음으로 돌아가기
		}
		printf("%d Hello Woeld!\n", i++); // i에 1 추가하고 출력
	} while (i < 10); //i가 10 미만일 때 까지 반복
	return 0; //탈출
}