#include <stdio.h>

int main() {
    char name[50];
    int age;
    float weight;
    float height;
    char crime[100];

    // �̸� �Է�
    printf("�̸��� �Է��ϼ���: ");
    scanf_s("%s", name);

    // ���� �Է�
    printf("���̸� �Է��ϼ���: ");
    scanf_s("%d", &age);

    // ������ �Է�
    printf("�����Ը� �Է��ϼ���: ");
    scanf_s("%f", &weight);

    // Ű �Է�
    printf("Ű�� �Է��ϼ��� (cm): ");
    scanf_s("%f", &height);

    // ���˸� �Է�
    printf("���˸��� �Է��ϼ���: ");
    scanf_s("%s", crime);

    // �Է� ���� ���� ���
    printf("\n�Էµ� ����:\n");
    printf("�̸�: %s\n", name);
    printf("����: %d\n", age);
    printf("������: %.2f kg\n", weight);
    printf("Ű: %.2f cm\n", height);
    printf("���˸�: %s\n", crime);

    return 0;
}