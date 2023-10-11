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
		if (targetGrade == grade) { //
			printf("%d �л��� %c ������ �޾ҽ��ϴ�.", i + 1, targetGrade);
		}
	}
}

int main() {
	int scores[STUDENTS];

	for (int i = 0; i < STUDENTS; i++) {
		printf("�л� %d�� ������ �Է��ϼ���: ", i + 1);
		scanf_s("%d", &scores[i]);
	}
	char ch = getchar(); //���͸� ����� ���� ���۸� ������ ��ɾ�

	char target;
	printf("Ư�� ���� (A, B, C, D, F)�� �Է��Ͻÿ�:");
	scanf_s("%c", &target, 1);

	classifyStudents(scores, target);

	return 0;
}