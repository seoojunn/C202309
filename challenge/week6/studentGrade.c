#include <stdio.h>
#define STUDENTS 5

void classifyStudents(int scores[], char targetGrade) {
	printf("학생 성적 분류:\n");
	char grade = ' ';
	for (int i = 0; i < STUDENTS; i++) {
		if (scores[i] >= 90) {
			grade = 'A';
		}
		else if (scores[i] >= 80) {
			grade = 'B';
		}
		else if (scores[i] >= 70) {
			grade = 'C';
		}
		else if (scores[i] >= 60) {
			grade = 'D';
		}
		else {
			grade = 'F';
		}
		if (targetGrade == grade) {
			printf("%d 학생은 %c 점수를 받았습니다.", i + 1, targetGrade);
		}
	}
}

int sumScores(int scores[]) {
	int sum = 0;

	for (int i = 0; i < STUDENTS; i++) {
		sum += scores[i];
	}
	return sum;
}

double averageScores(int scores[]) {
	int average = 0;
	int sum = sumScores(scores);
	average = sum / STUDENTS;
	return average;
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
	int sum = sumScores(scores);
	printf("%d", sum);
	double average = averageScores(scores);
	printf("학생들의 점수의 총 합은 %d 이고, 평균 값은 %lf입니다.\n", sum, average);

	return 0;
}