#include <stdio.h>
#define STUDENTS 5
#define SUBJECTS 3
#define CHARNUM 20

//�л� �� ��� ������ ����ϴ� �ڵ� ���
void calculateStudentAverages(char studentNames[][CHARNUM], double studentScores[][SUBJECTS]) {
	for (int i = 0; i < STUDENTS; i++) {
		double sum = 0;
		for (int j = 0; j < SUBJECTS; j++) {
			sum += studentScores[i][j];
		}
		double studentAverage = sum / SUBJECTS;
		printf("%s�� ��� ����: %.2lf\n", studentNames[i], studentAverage);
	}
}
//���� �� ��� ������ ����ϴ� �ڵ� ���
void calculateSubjectAverages(char subjectNames[][CHARNUM], double studentScores[][SUBJECTS]) {
	for (int i = 0; i < SUBJECTS; i++) {
		double subjectSum = 0;
		for (int j = 0; j < STUDENTS; j++) {
			subjectSum += studentScores[j][i];
		}
		double subjectAverage = subjectSum / STUDENTS;
		printf("%s�� ��� ������ %.2lf �Դϴ�.\n", subjectNames[i], subjectAverage);
	}
}

int main() {
	char subjectNames[SUBJECTS][CHARNUM] = { "����", "�߰����", "�⸻���" };
	char studentNames[STUDENTS][CHARNUM] = { "" }; // �л� �̸��� ����� �迭
	double studentScores[STUDENTS][SUBJECTS] = { 0.0 }; // �л��� ���� �� ������ ������ ����� �迭
	printf("�л� %d���� �̸��� �Է��� �����մϴ�. \n", STUDENTS);

	for (int i = 0; i < STUDENTS; i++) {
		printf("%d �л��� �̸��� �Է��ϼ���: ", i + 1);
		scanf_s("%s", studentNames[i], (int)sizeof(studentNames[i]));
	}
// �Էµ� �л� �̸��� �� ����Ǿ����� Ȯ���ϴ� �ڵ� ���
	printf("�л� �̸��� ��� �ԷµǾ����ϴ�. \n");
	printf("�Էµ� �л� �̸��� ������ �����ϴ�. \n");
	for (int i = 0; i < STUDENTS; i++) {
		printf("%s", studentNames[i]);
		if (i != STUDENTS - 1) {
			printf(", ");
		}
	}
	printf("\n");
	printf("--------------------\n");
	printf("�� �л��� %s, %s, %s ������ ���ʴ�� �Է����ּ���. (���� ����)\n ", subjectNames[0], subjectNames[1], subjectNames[2]);

	for (int i = 0; i < STUDENTS; i++) {
		printf("%s�� ����: ", studentNames[i]);
		scanf_s("%lf %lf %lf", &studentScores[i][0], &studentScores[i][1], &studentScores[i][2]);
	}

	printf("�л����� ���� ������ ��� �Է� �Ǿ����ϴ�.\n");
	printf("--------------------\n");
	printf("�л� �� ������ ������ �����ϴ� \n");

	calculateStudentAverages(studentNames, studentScores);

	printf("--------------------\n");
	printf("���� �� ��� ������ �Ʒ��� �����ϴ�. \n");

	calculateSubjectAverages(subjectNames, studentScores);

	printf("���α׷��� �����մϴ�. ");
	return 0;
}