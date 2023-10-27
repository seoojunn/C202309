#include <stdio.h>
#define MAX_TASKS 10
#define CHAR_NUM 100
#include <string.h>

int main() {
	char tasks[MAX_TASKS][CHAR_NUM] = { "" }; // 2���� �迭 �����
	int taskCount = 0; // �� �� �� �ʱ�ȭ

	printf("TODO ����Ʈ ����! \n"); //���� ���

	while (1) {
		int choice = -1; // ����� �Է� �ʱ�ȭ

		// ����ڿ��� �޴��� ����ϰ�, �Է¹ޱ�
		printf("------------------\n");
		printf("�޴��� �Է����ּ���.\n");
		printf("1. �� �� �߰�\n2. �� �� ����\n3. ��� ����\n4. ����\n5.�� �� ����\n");
		printf("���� �� �� �� = %d\n", taskCount);
		printf("------------------\n");
		scanf_s("%d", &choice);

		int terminate = 0; // ���Ḧ ���� ���� �ʱ�ȭ
		int delIndex = -1;  // �� �� ���� ����
		int changeIndex = -1; // �� �� ������ ���� index ���� ����
		char ch; // �� �� ������ ���۸� �ޱ� ���� ���� ����
		
		//���ÿ� ���� ����Ǵ� ��� �ڵ� ���
		switch (choice) {
		case 1: //choice=1�϶�
			printf("�� ���� �Է��ϼ��� (���� ���� �Է��ϼ���): ");
			scanf_s("%s", tasks[taskCount], (int)sizeof(tasks[taskCount]));
			printf("�� �� ""%s""�� ����Ǿ����ϴ�\n\n", tasks[taskCount]);
			taskCount++; //�� �� ������ 1�߰�
			break;
		case 2://choice=2�϶�
			// �� �� �����ϴ� �ڵ� ��� 
			printf("������ �� ���� ��ȣ�� �Է����ּ���. (1���� ����):");
			scanf_s("%d", &delIndex);
			if (delIndex > taskCount || delIndex <= 0) {
				printf("���� ������ ������ϴ�.\n");
			}
			else {
				printf("%d. %s : �� ���� �����մϴ�.\n", delIndex, tasks[delIndex - 1]);

				// �迭�� ���� (=�迭�� ���� �迭�� ���ڿ��� ����) �� �Ұ����ϱ� ������
				// ���ڿ��� ���ǵ� ���� �迭�� ����
				strcpy_s(tasks[delIndex - 1], sizeof(tasks[delIndex - 1]), "");

				// Ư�� �ε����� �� �� ���� �� �ڿ� �ִ� �� ���� �� ��ȣ�� ��������
				for (int i = delIndex; i < taskCount + 1; i++) {
					strcpy_s(tasks[i - 1], sizeof(tasks[i]), tasks[i]);
				}
				taskCount -= 1;
			}
			break;
		case 3://choice=3�϶�
			printf("�� �� ���\n"); //���� ���
			for (int i = 0; i < taskCount; i++) { //�� �� ������ ����� ������ ���� ������
				printf("%d. %s \n", i + 1, tasks[i]); //�� �� ��� ������� �ϳ��� ��ȯ
			}
			printf("\n");
			break;
		case 4://choice=4�϶�
			terminate = 1; //���Ḧ ���� ������ 1����
			break;
		case 5://choice=5�϶�
			printf("������ �� ���� ��ȣ�� �Է����ּ���. (1���� ����):"); //���� ���
			scanf_s("%d", &changeIndex); //������ �ε��� �Է¹ޱ�
			printf("�� ���� �Է��ϼ��� (���� ���� �Է��ϼ���): "); //���� ���
			scanf_s("%s", tasks[taskCount], (int)sizeof(tasks[taskCount])); //�� �� �Է¹ޱ�
			strcpy_s(tasks[changeIndex - 1], sizeof(tasks[changeIndex - 1]), tasks[taskCount]); //���ڿ��� ���ǵ� ���� �迭�� ����
			printf("�� �� ""%s""�� ����Ǿ����ϴ�\n\n", tasks[taskCount]); //���� ���
			break;
		default:
			printf("�߸��� �����Դϴ�. �ٽ� �����ϼ���.\n");
		}
		//�ڵ带 �����ϴ� �ڵ� ���
		if (taskCount == 10) { //������ 10�϶�
			printf("�� ���� �� á���ϴ�. ���α׷��� �����մϴ�.\n"); //���� ���
			break; //�ݺ��� Ż��
		}
		if (terminate == 1) { //���Ḧ ���� ������ 1�϶�
			printf("���Ḧ �����ϼ̽��ϴ�. ���α׷��� �����մϴ�.\n"); //���� ���
			break; //�ݺ��� Ż��
		}
	}
}