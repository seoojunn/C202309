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

	calculateTravelDays(); //�Լ�ȣ��

	return 0;
}
int getSum(int numArray[],int length) { //��ü �� ���� ���ϴ� �Լ� �����
	int totalDays=0; //��ü �ϼ� �ʱ�ȭ
	for (int i = 0; i < length; i++) { //������ŭ �ݺ�
		totalDays += numArray[i]; //�迭�� ��Ҹ� �հ迡 ���ϱ�
	}
	return totalDays;//��� �� ��ȯ
}

double getAverage(int numArray[],int length) { //����� ���ϴ� �Լ� �����
	int totalDays = 0; //��ü �ϼ� �ʱ�ȭ
	for (int i = 0; i < length; i++) { //������ŭ �ݺ�
		totalDays += numArray[i]; //�迭�� ��Ҹ� �հ迡 ���ϱ�
	}
	double averageDays = (double)totalDays / length; //����� ����ϰ� �Ҽ������� ��ȯ
	return averageDays;//����� ��ȯ
}

void getFamousCity(double dayArray[],int length) { //�α��ִ� ���� ���ϴ� �Լ� �����
	double maxDay = 0; //�ִ� ��� �ϼ��� �����ϴ� ���� �ʱ�ȭ
	int maxDayIndex = 0; //�ִ� ��� �ϼ��� ���� ������ �ε��� ������ ������ ���� �ʱ�ȭ
	for (int i = 0; i < length; i++) { //�迭�� �ݺ�
		if (dayArray[i] > maxDay) { //���� ������ ����ϼ��� �ִ� ��� �ϼ����� ũ��
			maxDay = dayArray[i]; //�ִ� ��� �ϼ��� �缳��
			maxDayIndex = i; //�ִ� ����ϼ��� ���� ���� �ε��� ����
		}
	}
	printf("����� �������� ���� �α��־��� ���ô� %s�Դϴ�. (��� �ӹ���: %.2f)\n", cities[maxDayIndex], maxDay); //���� ���
}

void calculateTravelDays() {
	int travelDays[NUMCITY][NUMPEOPLE];
	for (int i = 0; i < NUMCITY; i++) { //���� �� ��ŭ �ݺ�
		for (int j = 0; j < NUMPEOPLE; j++) { //��� �� ��ŭ �ݺ�
			printf("���� %s���� ��� %s�� ���� �� ���� �Է��ϼ���:", cities[i], names[j]); //���� ���
			scanf_s("%d", &travelDays[i][j]); //���� ��� �Է¹ޱ�
		}
	}
	double averageDays[NUMCITY]; //��� �Լ� ȣ��
	for (int i = 0; i < NUMCITY; i++) { //������ ������ ������ ����
		int totalDay = getSum(travelDays[i], NUMPEOPLE); //��ü �ϼ� ����
		double aveargeDay = getAverage(travelDays[i], NUMPEOPLE); //����ϼ� ����
		printf("���� %s���� ���� �� �ϼ�: %d, ��� �� ��: %.2f\n", cities[i], totalDay, aveargeDay); //���� ���
		averageDays[i] = aveargeDay; //����� �ϼ��� ������ ���� �ε����� ����� ����
	}
	getFamousCity(averageDays, NUMCITY); //����ϼ� �������� �α� ���� ����ϴ� �Լ� ȣ��
}