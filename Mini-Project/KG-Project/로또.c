#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#define _CRT_SECURE_NO_WARNING

int main()
{
	while (1) {
		int choice;
		printf("������������������\n");
		printf("�ζ�\n");
		printf("1. ����, 2. ���� -> ");
		scanf_s("%d", &choice);
		printf("������������������\n");

		if (choice == 1) {
			int lotto[6];
			int player[6];
			int co = 0;

			srand((int)time(NULL));
			for (int i = 0; i < 6; i++) {
				printf("\n");
				lotto[i] = (rand() % 45) + 1;
				printf("%d��° ����(1~45) : ", i + 1);
				scanf_s("%d", &player[i]);

				if (player[i] > 45 || player[i] < 1) {
					printf("ERROR(1~45������ ���� �Է����ּ���.)\n");
					printf("���α׷� ����!!\n");
					exit(0);
				}
			}
			printf("\n������������������");
			printf("\n\n\n");

			for (int i = 0; i < 6; i++) {
				printf("%d��° �Է� ���� : %d\n", i + 1, player[i]);
				printf("%d��° ��÷ ���� : %d\n", i + 1, lotto[i]);
				if (lotto[i] == player[i]) {
					co++;
					printf("���� %d�� ��ġ!!\n", co);
				}
				else {
					printf("%d��° �ڸ� ����ġ!!\n", i + 1);
					printf("���� %d�� ��ġ!!\n", co);
				}
				if (i == 5) {
					printf("\n6���� ���� ��, �� %d�� ��ġ!!\n", co);
				}

				printf("\n");
			}
			printf("--------------------------\n");

			printf("�Է��� ���� 6�� : %d %d %d %d %d %d\n", player[0], player[1], player[2], player[3], player[4], player[5]);
			printf("��÷�� ���� 6�� : %d %d %d %d %d %d\n", lotto[0], lotto[1], lotto[2], lotto[3], lotto[4], lotto[5]);
			printf("--------------------------\n\n");

			printf("1�� -> ��ġ�� ���� : 6��, ��� : 10���\n");
			printf("2�� -> ��ġ�� ���� : 5��, ��� : 1���\n");
			printf("3�� -> ��ġ�� ���� : 4��, ��� : 5000����\n");
			printf("\n");

			printf("��� : ");
			switch (co) {
			case 0:
				printf("����� ���� ����!!\n");
				printf("��ġ�� ���� : 0��, ��� : 0��\n");
				break;
			case 1:
				printf("����� ���� ����!!\n");
				printf("��ġ�� ���� : 1��, ��� : 0��\n");
				break;
			case 2:
				printf("����� ���� ����!!\n");
				printf("��ġ�� ���� : 2��, ��� : 0��\n");
				break;
			case 3:
				printf("����� ���� ����!!\n");
				printf("��ġ�� ���� : 3��, ��� : 0��\n");
				break;
			case 4:
				printf("3��!!\n");
				printf("��ġ�� ���� : 4��, ��� : 5000����\n");
				break;
			case 5:
				printf("2��!!\n");
				printf("��ġ�� ���� : 5��, ��� : 1���\n");
				break;
			case 6:
				printf("1��!!\n");
				printf("��ġ�� ���� : 6��, ��� : 10���\n");
				break;
			}
			printf("\n");
		}
		else if (choice == 2) {
			exit(0);
		}
		else {
			printf("�߸��Է�!! ���α׷� ����!!\n");
			return 0;
		}
	}
	return 0;
}