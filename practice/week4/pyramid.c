#include <stdio.h>

int main()
{
	int floor;
	printf("몇 층으로 쌓을까요?"); //몇 층으로 쌓을지 질문
		scanf_s("%d", &floor); //입력받은 floor를 변수에 저장
		for (int i=0;i<floor;i++){ //i에 0을 넣고 floor수 전까지 반복, i에 숫자 추가
			for (int j = 0; j < floor - i-1; j++) // floor -i -1만큼 s출력
				printf("S");
			for (int a = 0; a < i * 2 + 1; a++)//a에 i에 홀수로 *출력
			printf("*");
			printf("\n"); //줄 바꾸기
		}
		return 0;
}