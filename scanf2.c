#include <stdio.h>

int main(void) {
	int input;
	printf("값을 입력하세요 : ");
	scanf_s("%d", &input); //&주소에 저장을 하겠다
	printf("입력값:%d\n", input);
	return 0;
}