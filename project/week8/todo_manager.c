#include <stdio.h>
#define MAX_TASKS 10
#define CHAR_NUM 100
#include <string.h>

int main() {
	char tasks[MAX_TASKS][CHAR_NUM] = { "" }; // 2차원 배열 만들기
	int taskCount = 0; // 할 일 수 초기화

	printf("TODO 리스트 시작! \n"); //문구 출력

	while (1) {
		int choice = -1; // 사용자 입력 초기화

		// 사용자에게 메뉴를 출력하고, 입력받기
		printf("------------------\n");
		printf("메뉴를 입력해주세요.\n");
		printf("1. 할 일 추가\n2. 할 일 삭제\n3. 목록 보기\n4. 종료\n5.할 일 수정\n");
		printf("현재 할 일 수 = %d\n", taskCount);
		printf("------------------\n");
		scanf_s("%d", &choice);

		int terminate = 0; // 종료를 위한 변수 초기화
		int delIndex = -1;  // 할 일 삭제 변수
		int changeIndex = -1; // 할 일 수정을 위한 index 저장 변수
		char ch; // 할 일 수정시 버퍼를 받기 위한 문자 변수
		
		//선택에 따라 실행되는 기능 코드 블록
		switch (choice) {
		case 1: //choice=1일때
			printf("할 일을 입력하세요 (공백 없이 입력하세요): ");
			scanf_s("%s", tasks[taskCount], (int)sizeof(tasks[taskCount]));
			printf("할 일 ""%s""가 저장되었습니다\n\n", tasks[taskCount]);
			taskCount++; //할 일 변수에 1추가
			break;
		case 2://choice=2일때
			// 할 일 삭제하는 코드 블록 
			printf("삭제할 할 일의 번호를 입력해주세요. (1부터 시작):");
			scanf_s("%d", &delIndex);
			if (delIndex > taskCount || delIndex <= 0) {
				printf("삭제 범위가 벗어났습니다.\n");
			}
			else {
				printf("%d. %s : 할 일을 삭제합니다.\n", delIndex, tasks[delIndex - 1]);

				// 배열간 대입 (=배열에 문자 배열인 문자열의 대입) 이 불가능하기 때문에
				// 문자열을 정의된 문자 배열에 대입
				strcpy_s(tasks[delIndex - 1], sizeof(tasks[delIndex - 1]), "");

				// 특정 인덱스의 할 일 삭제 후 뒤에 있는 할 일을 앞 번호로 가져오기
				for (int i = delIndex; i < taskCount + 1; i++) {
					strcpy_s(tasks[i - 1], sizeof(tasks[i]), tasks[i]);
				}
				taskCount -= 1;
			}
			break;
		case 3://choice=3일때
			printf("할 일 목록\n"); //문구 출력
			for (int i = 0; i < taskCount; i++) { //할 일 변수에 저장된 수보다 작을 때까지
				printf("%d. %s \n", i + 1, tasks[i]); //할 일 목록 순서대로 하나씩 반환
			}
			printf("\n");
			break;
		case 4://choice=4일때
			terminate = 1; //종료를 위한 변수에 1대입
			break;
		case 5://choice=5일때
			printf("수정할 할 일의 번호를 입력해주세요. (1부터 시작):"); //문구 출력
			scanf_s("%d", &changeIndex); //수정할 인덱스 입력받기
			printf("할 일을 입력하세요 (공백 없이 입력하세요): "); //문구 출력
			scanf_s("%s", tasks[taskCount], (int)sizeof(tasks[taskCount])); //할 일 입력받기
			strcpy_s(tasks[changeIndex - 1], sizeof(tasks[changeIndex - 1]), tasks[taskCount]); //문자열을 정의된 문자 배열에 대입
			printf("할 일 ""%s""가 저장되었습니다\n\n", tasks[taskCount]); //문구 출력
			break;
		default:
			printf("잘못된 선택입니다. 다시 선택하세요.\n");
		}
		//코드를 종료하는 코드 블록
		if (taskCount == 10) { //할일이 10일때
			printf("할 일이 다 찼습니다. 프로그램을 종료합니다.\n"); //문구 출력
			break; //반복문 탈출
		}
		if (terminate == 1) { //종료를 위한 변수가 1일때
			printf("종료를 선택하셨습니다. 프로그램을 종료합니다.\n"); //문구 출력
			break; //반복문 탈출
		}
	}
}