#include <stdio.h>

int main() {
	int num;

	printf("숫자를 입력하시오: ");
	scanf_s("%d", &num); //숫자를 입력받는다.

	if (num == 0) {
		printf("zero"); //입력된 숫자가 0일 경우 출력
	}
	else if (num == 1) {
		printf("one"); //입력된 숫자가 1일 경우 출력
	}
	else if (num == 2) {
		printf("two"); //입력된 숫자가 2일 경우 출력
	}
	else {
		printf("not 0~2"); //입력된 숫자가 0,1,2가 아닌 경우 출력
	}
}