#include <stdio.h>

int main()
{
	int floor;
	printf("�� ������ �������?"); //�� ������ ������ ����
		scanf_s("%d", &floor); //�Է¹��� floor�� ������ ����
		for (int i=0;i<floor;i++){ //i�� 0�� �ְ� floor�� ������ �ݺ�, i�� ���� �߰�
			for (int j = 0; j < floor - i-1; j++) // floor -i -1��ŭ s���
				printf("S");
			for (int a = 0; a < i * 2 + 1; a++)//a�� i�� Ȧ���� *���
			printf("*");
			printf("\n"); //�� �ٲٱ�
		}
		return 0;
}