#include <stdio.h>

int main()
{
	int i = 0; //int �ڽ� �����ϰ� 0 ����
	do { //do�� ����
		if (i % 2 == 0) { //i�� 2�� ������ �������� ���´ٸ�
			i++; // i�� 1�߰�
			continue; //�ٽ� ó������ ���ư���
		}
		printf("%d Hello Woeld!\n", i++); // i�� 1 �߰��ϰ� ���
	} while (i < 10); //i�� 10 �̸��� �� ���� �ݺ�
	return 0; //Ż��
}