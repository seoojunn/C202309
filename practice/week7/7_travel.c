#include <stdio.h>
#define NUMCITY 3
#define NUMPEOPLE 2

char names[NUMPEOPLE][10];
char cities[NUMCITY][10];

void calculateTravelDays();

int main() {

	printf("%d���� ���ø��� ���ʴ�� �Է����ּ���. \n", NUMCITY); //����ڷκ��� �����̸� �Է¹ޱ�
	for (int i = 0; i < NUMCITY; i++) {
		scanf_s("%s", cities[i], (int)sizeof(cities[i]));
	}

	printf("%d���� ������ �̸��� ���ʴ�� �Է����ּ���. \n", NUMPEOPLE); //����ڷκ��� ��� �̸� �Է¹ޱ�
	for (int i = 0; i < NUMPEOPLE; i++) {
		scanf_s("%s", names[i], (int)sizeof(names[i]));
	}

	calculateTravelDays(names); //�Լ�ȣ��

	return 0;
}

void calculateTravelDays() { //calculateTravelDays()�Լ� ����
	int travelDays[NUMCITY][NUMPEOPLE]; //2���� �迭�� �����

	for (int i = 0; i < NUMCITY; i++) { //���� �� ��ŭ �ݺ�
		for (int j = 0; j < NUMPEOPLE; j++) { //��� �� ��ŭ �ݺ�
			printf("���� %s���� ��� %s�� ���� �� ���� �Է��ϼ���:", cities[i], names[j]); //���� ���
			scanf_s("%d", &travelDays[i][j]); //���� ��� �Է¹ޱ�
		}
	}

	for (int i = 0; i < NUMCITY; i++) { //���� �� ��ŭ �ݺ�
		int totalDays = 0; //��ü �ϼ� �ʱ�ȭ
		for (int j = 0; j < NUMPEOPLE; j++) { //��� �� ��ŭ �ݺ�
			totalDays += travelDays[i][j]; //��ü �ϼ��� 2���� �迭 �ε��� �ؼ� ���ϱ�
		}
		float averageDays = (float)totalDays / NUMPEOPLE; //��ü �� ���� ��� ���� ������ ����ϼ� ���ϱ�
		printf("���� %s���� ���� �� �ϼ�: %d, ��� �� ��: %.2f\n", cities[i], totalDays, averageDays); //���� ���
	}
}