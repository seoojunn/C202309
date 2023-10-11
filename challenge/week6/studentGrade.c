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
		if (targetGrade == grade) { //타겟 등급과 등급이 일치할때
			printf("%d 학생은 %c 점수를 받았습니다.", i + 1, targetGrade); // 점수와 등급 출력
		}
	}
}

int sumScores(int scores[]) { //총합 함수 만들기
	int sum = 0;

	for (int i = 0; i < STUDENTS; i++) {
		sum += scores[i]; //총합 구하기
	}
	return sum;
}

double averageScores(int scores[]) { //평균 함수 만들기
	int average = 0;
	int sum = sumScores(scores); //sum값 불러오기
	average = sum / STUDENTS; //average구하기
	return average;
}

int main() {
	int scores[STUDENTS];

	for (int i = 0; i < STUDENTS; i++) { //i가 STUDENTS보다 작을 때 까지 반복
		printf("학생 %d의 성적을 입력하세요: ", i + 1); //1부터 입력문구 출력
		scanf_s("%d", &scores[i]); //학생의 성적 입력받기
	}
	char ch = getchar(); //엔터를 지우기 위해 버퍼를 날리는 명령어

	char target; //문자열
	printf("특정 점수 (A, B, C, D, F)를 입력하시오:"); //특정점수 입력문구 출력
	scanf_s("%c", &target, 1); //특정 점수 입력받기

	classifyStudents(scores, target);  //함수 호출
	int sum = sumScores(scores); //sum에 함수 호출
	double average = averageScores(scores); //average에 averageScores함수 호출
	printf("학생들의 점수의 총 합은 %d 이고, 평균 값은 %lf입니다.\n", sum, average); //총합과 평균 출력

	return 0;
}