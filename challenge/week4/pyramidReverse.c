#include <stdio.h>

int main() {
    int i, j, rpy; //i, j, rows ����
    printf("�� ���� ���Ƕ�̵带 �װڽ��ϱ�? ");
    scanf_s("%d", &rpy);
    for (i = rpy; i >= 1; i--) { //i�� 1���� ũ�ų� ���� �� ���� �ݺ� i�� 1�� ����
        for (j = 1; j <= rpy - i; j++) { //
            printf("s"); //s���
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*"); // ��ǥ ���
        }
        printf("\n");//�� �ٲٱ�
    }
    return 0;
}