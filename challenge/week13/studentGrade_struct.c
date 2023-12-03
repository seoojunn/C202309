#include <stdio.h>
#include <stdlib.h>

#define STUDENTS 5

// 학생 구조체 정의
struct Student {
    char name[50];
    int score;
};

// 함수 선언
void inputStudents(struct Student* students, int Students);
void classifyStudents(struct Student* students, int Students, char targetGrade);
int sumScores(struct Student* students, int Students);
double averageScores(struct Student* students, int Students);

int main() {
    int Students;

    // 사용자에게 학생 수 입력 받기
    printf("학생 수를 입력하세요: ");
    scanf_s("%d", &Students);

    // 동적으로 학생 구조체 배열 할당
    struct Student* students = (struct Student*)malloc(Students * sizeof(struct Student));

    // 사용자에게 학생 이름 + 점수 입력받고 구조체에 저장
    inputStudents(students, Students);

    // 나머지 기능들에서 구조체에서 멤버 변수를 불러와서 기능이 동작하게끔 코드 확장
    char ch;
    printf("특정 점수 (A, B, C, D, F)를 입력하시오: ");
    scanf_s(" %c", &ch, 1);

    classifyStudents(students, Students, ch);
    int sum = sumScores(students, Students);
    double average = averageScores(students, Students);
    printf("학생들의 점수의 총 합은 %d 이고, 평균 값은 %lf입니다.\n", sum, average);

    free(students);

    return 0;
}

// 학생 정보 입력 함수
void inputStudents(struct Student* students, int Students) {
    for (int i = 0; i < Students; i++) {
        printf("학생 %d의 이름을 입력하세요: ", i + 1);
        scanf_s("%s", students[i].name, sizeof(students[i].name));

        printf("학생 %d의 점수를 입력하세요: ", i + 1);
        scanf_s("%d", &students[i].score);
    }
}

// 성적 분류 함수
void classifyStudents(struct Student* students, int Students, char targetGrade) {
    printf("학생 성적 분류:\n");
    char grade = ' ';
    for (int i = 0; i < Students; i++) {
        if (students[i].score >= 90) {
            grade = 'A';
        }
        else if (students[i].score >= 80) {
            grade = 'B';
        }
        else if (students[i].score >= 70) {
            grade = 'C';
        }
        else if (students[i].score >= 60) {
            grade = 'D';
        }
        else {
            grade = 'F';
        }
        if (targetGrade == grade) {
            printf("%s 학생은 %c 점수를 받았습니다.\n", students[i].name, targetGrade);
        }
    }
}

// 총합 구하는 함수
int sumScores(struct Student* students, int Students) {
    int sum = 0;
    for (int i = 0; i < Students; i++) {
        sum += students[i].score;
    }
    return sum;
}

// 평균 구하는 함수
double averageScores(struct Student* students, int Students) {
    int sum = sumScores(students, Students);
    double average = (double)sum / Students;
    return average;
}
