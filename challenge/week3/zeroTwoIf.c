#include <stdio.h>

int main() {
	int num;

	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%d", &num); //���ڸ� �Է¹޴´�.

	if (num == 0) {
		printf("zero"); //�Էµ� ���ڰ� 0�� ��� ���
	}
	else if (num == 1) {
		printf("one"); //�Էµ� ���ڰ� 1�� ��� ���
	}
	else if (num == 2) {
		printf("two"); //�Էµ� ���ڰ� 2�� ��� ���
	}
	else {
		printf("not 0~2"); //�Էµ� ���ڰ� 0,1,2�� �ƴ� ��� ���
	}
}