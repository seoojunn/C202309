#include <stdio.h>
#define STUDENTS 5 //STUDENTS�� 5�� ����

void classifyStudents(int scores[], char targetGrade) { //���� �з��ϴ� �Լ� ����
	printf("�л� ���� �з�:\n");
	char grade = ' ';
	for (int i = 0; i < STUDENTS; i++) { //i�� 0,1,2,3,4 �� ���ʴ�� ���鼭 �� ���ǿ� ���ϴ� �ݺ��� ����
		if (scores[i] >= 90) { //scores[i]�迭�� ������ 90 �̻��϶�
			grade = 'A'; //����� A
		}
		else if (scores[i] >= 80) {  //scores[i]�迭�� ������ 80 �̻��϶�
			grade = 'B'; //����� B
		}
		else if (scores[i] >= 70) { //scores[i]�迭�� ������ 70 �̻��϶�
			grade = 'C'; //����� C
		}
		else if (scores[i] >= 60) { //scores[i]�迭�� ������ 60 �̻��϶�
			grade = 'D'; //����� D
		}
		else { //scores[i]�迭�� ������ ���� ���ǵ��� �� ���� ���Ҷ�
			grade = 'F'; //����� F
		}
		if (targetGrade == grade) { //Ÿ�� ��ް� ����� ��ġ�Ҷ�
			printf("%d �л��� %c ������ �޾ҽ��ϴ�.", i + 1, targetGrade); // ������ ��� ���
		}
	}
}

int sumScores(int scores[]) { //���� �Լ� �����
	int sum = 0;

	for (int i = 0; i < STUDENTS; i++) {
		sum += scores[i]; //���� ���ϱ�
	}
	return sum;
}

double averageScores(int scores[]) { //��� �Լ� �����
	int average = 0;
	int sum = sumScores(scores); //sum�� �ҷ�����
	average = sum / STUDENTS; //average���ϱ�
	return average;
}

int main() {
	int scores[STUDENTS];

	for (int i = 0; i < STUDENTS; i++) { //i�� STUDENTS���� ���� �� ���� �ݺ�
		printf("�л� %d�� ������ �Է��ϼ���: ", i + 1); //1���� �Է¹��� ���
		scanf_s("%d", &scores[i]); //�л��� ���� �Է¹ޱ�
	}
	char ch = getchar(); //���͸� ����� ���� ���۸� ������ ��ɾ�

	char target; //���ڿ�
	printf("Ư�� ���� (A, B, C, D, F)�� �Է��Ͻÿ�:"); //Ư������ �Է¹��� ���
	scanf_s("%c", &target, 1); //Ư�� ���� �Է¹ޱ�

	classifyStudents(scores, target);  //�Լ� ȣ��
	int sum = sumScores(scores); //sum�� �Լ� ȣ��
	double average = averageScores(scores); //average�� averageScores�Լ� ȣ��
	printf("�л����� ������ �� ���� %d �̰�, ��� ���� %lf�Դϴ�.\n", sum, average); //���հ� ��� ���

	return 0;
}