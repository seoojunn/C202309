#include <stdio.h>
#include <stdlib.h>

#define STUDENTS 5

// �л� ����ü ����
struct Student {
    char name[50];
    int score;
};

// �Լ� ����
void inputStudents(struct Student* students, int Students);
void classifyStudents(struct Student* students, int Students, char targetGrade);
int sumScores(struct Student* students, int Students);
double averageScores(struct Student* students, int Students);

int main() {
    int Students;

    // ����ڿ��� �л� �� �Է� �ޱ�
    printf("�л� ���� �Է��ϼ���: ");
    scanf_s("%d", &Students);

    // �������� �л� ����ü �迭 �Ҵ�
    struct Student* students = (struct Student*)malloc(Students * sizeof(struct Student));

    // ����ڿ��� �л� �̸� + ���� �Է¹ް� ����ü�� ����
    inputStudents(students, Students);

    // ������ ��ɵ鿡�� ����ü���� ��� ������ �ҷ��ͼ� ����� �����ϰԲ� �ڵ� Ȯ��
    char ch;
    printf("Ư�� ���� (A, B, C, D, F)�� �Է��Ͻÿ�: ");
    scanf_s(" %c", &ch, 1);

    classifyStudents(students, Students, ch);
    int sum = sumScores(students, Students);
    double average = averageScores(students, Students);
    printf("�л����� ������ �� ���� %d �̰�, ��� ���� %lf�Դϴ�.\n", sum, average);

    free(students);

    return 0;
}

// �л� ���� �Է� �Լ�
void inputStudents(struct Student* students, int Students) {
    for (int i = 0; i < Students; i++) {
        printf("�л� %d�� �̸��� �Է��ϼ���: ", i + 1);
        scanf_s("%s", students[i].name, sizeof(students[i].name));

        printf("�л� %d�� ������ �Է��ϼ���: ", i + 1);
        scanf_s("%d", &students[i].score);
    }
}

// ���� �з� �Լ�
void classifyStudents(struct Student* students, int Students, char targetGrade) {
    printf("�л� ���� �з�:\n");
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
            printf("%s �л��� %c ������ �޾ҽ��ϴ�.\n", students[i].name, targetGrade);
        }
    }
}

// ���� ���ϴ� �Լ�
int sumScores(struct Student* students, int Students) {
    int sum = 0;
    for (int i = 0; i < Students; i++) {
        sum += students[i].score;
    }
    return sum;
}

// ��� ���ϴ� �Լ�
double averageScores(struct Student* students, int Students) {
    int sum = sumScores(students, Students);
    double average = (double)sum / Students;
    return average;
}
