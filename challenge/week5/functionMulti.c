#include <stdio.h>
long mul(int value); //int���� �� ū ������ long�� ��ȯ

void main()
{
	printf("1���� 2������ ���� %d\n", mul(2)); //���ϱ� �Լ� ȣ�� �� value�� 2�ֱ�
	printf("1���� 3������ ���� %d\n", mul(3)); //���ϱ� �Լ� ȣ�� �� value�� 3�ֱ�
	printf("1���� 5������ ���� %d\n", mul(5)); //���ϱ� �Լ� ȣ�� �� value�� 5�ֱ�
}
long mul(int value) //���ϱ� �Լ� �����
{
	int i = 1; //i=1
	long mul = 1; //mul=1

	while (i <= value) //i�� value ���� �۰ų� ����������
	{
		mul = mul * i; //mul�� i���ϱ�
		i = i + 1; //�ݺ����� ����� �� ���� i�� 1 ���ϱ�
	}
	return mul; //����� ��ȯ
}