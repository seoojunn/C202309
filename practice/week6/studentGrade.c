#include <stdio.h>
#define STUDENTS 5 //STUDENTS를 5로 선언

void classifyStudents(int scores[], char targetGrade) { //성적 분류하는 함수 생성
	printf("학생 성적 분류:\n"); 
	char grade = ' '; 
	for (int i = 0; i < STUDENTS; i++) { //i에 0,1,2,3,4 가 차례대로 들어가면서 각 조건에 비교하는 반복문 생성
		if (scores[i] >= 90) { //scores[i]배열에 점수가 90 이상일때
			grade = 'A'; //등급은 A
		}
		else if (scores[i] >= 80) {  //scores[i]배열에 점수가 80 이상일때
			grade = 'B'; //등급은 B
		}
		else if (scores[i] >= 70) { //scores[i]배열에 점수가 70 이상일때
			grade = 'C'; //등급은 C
		}
		else if (scores[i] >= 60) { //scores[i]배열에 점수가 60 이상일때
			grade = 'D'; //등급은 D
		}
		else { //scores[i]배열에 점수가 위에 조건들을 다 충족 못할때
			grade = 'F'; //등급은 F
		}
		if (targetGrade == grade) { //
			printf("%d 학생은 %c 점수를 받았습니다.", i + 1, targetGrade);
		}
	}
}

int main() {
	int scores[STUDENTS];

	for (int i = 0; i < STUDENTS; i++) {
		printf("학생 %d의 성적을 입력하세요: ", i + 1);
		scanf_s("%d", &scores[i]);
	}
	char ch = getchar(); //엔터를 지우기 위해 버퍼를 날리는 명령어

	char target;
	printf("특정 점수 (A, B, C, D, F)를 입력하시오:");
	scanf_s("%c", &target, 1);

	classifyStudents(scores, target);

	return 0;
}