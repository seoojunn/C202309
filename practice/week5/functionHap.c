#include <stdio.h>
int hapf(int value);

int main()
{
	printf("1���� 10������ ���� %d\n", hapf(10)); //���ϱ� �Լ� ȣ�� �� value�� 10�ֱ�
	printf("1���� 100������ ���� %d\n", hapf(100)); //���ϱ� �Լ� ȣ�� value�� 100�ֱ�
	printf("1���� 1000������ ���� %d\n", hapf(1000)); //���ϱ� �Լ� ȣ�� value�� 1000�ֱ�
	return 0;
}
int hapf(int value) // ���ϱ� �Լ� �����
{
	int i=1; //i=1
	int hap = 0; //hap=0

	while (i <= value) //i�� value���� �۰ų� ����������
	{
		hap = hap + i; //hap�� i���ϱ�
		i = i + 1; //i�� 1�߰�(for�� �������� while�� ������ �� �Ʒ� �ؾ� ����� ��ȭ ���� ����)
	}
	return hap; //��� �� ��ȯ
}