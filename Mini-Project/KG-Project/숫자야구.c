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
		printf("���ھ߱�\n");
		printf("1. ����, 2. ���� -> ");
		scanf_s("%d", &choice);
		printf("������������������\n");

		if (choice == 1) {
			int com[3] = { 0 }, player[3] = { 0 }, strike = 0, ball = 0, cnt = 0, tf = 1;

			while (com[0] == com[1] || com[0] == com[2] || com[1] == com[2])
			{
				srand((int)time(NULL));
				for (int i = 0; i < 3; i++) {
					com[i] = rand() % 10;
				}
			}

			while (tf) {
				printf("\n0~9���� �ߺ� ���� �ʴ� ���� 3���� �Է����ּ��� >> ");
				for (int i = 0; i < 3; i++) {
					scanf_s("%d", &player[i]);
				}
				if (player[0] == player[1] || player[0] == player[2] || player[1] == player[2]) {
					printf("ERROR(�ߺ��� ���ڰ� �ԷµǾ����ϴ�.)\n");
					printf("������ �����մϴ�!!\n");
					exit(0);
				}
				if (player[0] > 9 || player[1] > 9 || player[2] > 9) {
					printf("ERROR(0~9������ ���� �Է����ּ���.)\n");
					printf("������ �����մϴ�!!\n");
					exit(0);
				}
				if (player[0] < 0 || player[1] < 0 || player[2] < 0) {
					printf("ERROR(0~9������ ���� �Է����ּ���.)\n");
					printf("������ �����մϴ�!!\n");
					exit(0);
				}
				for (int i = 0; i < 3; i++) {
					if (com[i] == player[i]) {
						strike += 1;
					}
					for (int j = 0; j < 3; j++) {
						if (com[i] == player[j]) {
							ball += 1;
							break;
						}
					}
				}
				cnt++;
				if (strike == 3) {
					printf("%d��° �õ� : %dS\n\n", cnt, strike);
					printf("\nYOU WIN!!(���� : %d %d %d)\n\n", player[0], player[1], player[2]);
					tf = 0;
				}
				else {
					printf("%d��° �õ� : %dS %dB\n", cnt, strike, ball - strike);
				}
				strike = 0;
				ball = 0;
			}
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