#include <stdio.h>

int main() {
	int choice;
	
	printf("1. 파일저장\n");
	printf("2. 저장 없이 닫기\n");
	printf("3. 종료\n"); // 선택사항을 출력한다. 
	scanf_s("%d", &choice); //선택을 입력받는다.

	if (choice == 1) { 
		printf("파일을 저장합니다.\n"); //1을 선택한 경우 출력한다.
	}
	else if (choice == 2) {
		printf("저장 없이 닫습니다.\n"); //2를 선택한 경우 출력한다.
	}
	else if (choice == 3) {
		printf("종료합니다.\n"); //3을 선택한 경우 출력한다.
	}
	else {
		printf("잘못 입력하셨습니다."); //선택지에 없는 선택을 하면 오류 메세지를 출력한다.
	}
}