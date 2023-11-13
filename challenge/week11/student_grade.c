#include <stdio.h>
#define STUDENTS 5 //STUDENTS�� 5�� ����

//���� �з��ϴ� �Լ� ����
void classifyStudents(int* scores, char targetGrade) {
    printf("�л� ���� �з�:\n");
    char grade = ' ';
    for (int i = 0; i < STUDENTS; i++) {
        if (*(scores + i) >= 90) {
            grade = 'A';
        }
        else if (*(scores + i) >= 80) {
            grade = 'B';
        }
        else if (*(scores + i) >= 70) {
            grade = 'C';
        }
        else if (*(scores + i) >= 60) {
            grade = 'D';
        }
        else {
            grade = 'F';
        }
        if (targetGrade == grade) {
            printf("%d �л��� %c ������ �޾ҽ��ϴ�.\n", i + 1, targetGrade);
        }
    }
}
//���� ���ϴ� �Լ� �����
int sumScores(int* scores) {
    int sum = 0;
    for (int i = 0; i < STUDENTS; i++) {
        sum += *(scores + i);
    }
    return sum;
}
//��� ���ϴ� �Լ� �����
double averageScores(int* scores) {
    int average = 0;
    int sum = sumScores(scores);
    average = sum / STUDENTS;
    return average;
}
//���� ���ϴ� �Լ� ����
void printRanks(int* scores) {
    int ranks[STUDENTS];
    for (int i = 0; i < STUDENTS; i++) {
        ranks[i] = 1;
        for (int j = 0; j < STUDENTS; j++) { //�񱳺� �����
            if (*(scores + j) > *(scores + i)) { //i���� j�� ũ�� ��ũ �ö󰡱� i��ũ �ö�
                ranks[i]++;
            }
        }
        printf("%d �л��� ������ %d�Դϴ�.\n", i + 1, ranks[i]);
    }
}

int main() {
    int scores[STUDENTS];

    for (int i = 0; i < STUDENTS; i++) {
        printf("�л� %d�� ������ �Է��ϼ���: ", i + 1);
        scanf_s("%d", scores + i);
    }

    char ch = getchar(); //���͸� ����� ���� ���۸� ������ ��ɾ�

    char target;
    printf("Ư�� ���� (A, B, C, D, F)�� �Է��Ͻÿ�:");
    scanf_s(" %c", &target, 1);

    classifyStudents(scores, target);
    int sum = sumScores(scores);
    double average = averageScores(scores);
    printf("�л����� ������ �� ���� %d �̰�, ��� ���� %lf�Դϴ�.\n", sum, average);

    printRanks(scores);

    return 0;
}