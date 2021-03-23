#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#define _CRT_SECURE_NO_WARNING

int main()
{
	while (1) {
		int choice;
		printf("■■■■■■■■■■■■■■■■■\n");
		printf("로또\n");
		printf("1. 시작, 2. 종료 -> ");
		scanf_s("%d", &choice);
		printf("■■■■■■■■■■■■■■■■■\n");

		if (choice == 1) {
			int lotto[6];
			int player[6];
			int co = 0;

			srand((int)time(NULL));
			for (int i = 0; i < 6; i++) {
				printf("\n");
				lotto[i] = (rand() % 45) + 1;
				printf("%d번째 숫자(1~45) : ", i + 1);
				scanf_s("%d", &player[i]);

				if (player[i] > 45 || player[i] < 1) {
					printf("ERROR(1~45까지의 수로 입력해주세요.)\n");
					printf("프로그램 종료!!\n");
					exit(0);
				}
			}
			printf("\n■■■■■■■■■■■■■■■■■");
			printf("\n\n\n");

			for (int i = 0; i < 6; i++) {
				printf("%d번째 입력 숫자 : %d\n", i + 1, player[i]);
				printf("%d번째 당첨 숫자 : %d\n", i + 1, lotto[i]);
				if (lotto[i] == player[i]) {
					co++;
					printf("현재 %d개 일치!!\n", co);
				}
				else {
					printf("%d번째 자리 불일치!!\n", i + 1);
					printf("현재 %d개 일치!!\n", co);
				}
				if (i == 5) {
					printf("\n6개의 숫자 중, 총 %d개 일치!!\n", co);
				}

				printf("\n");
			}
			printf("--------------------------\n");

			printf("입력한 숫자 6개 : %d %d %d %d %d %d\n", player[0], player[1], player[2], player[3], player[4], player[5]);
			printf("당첨된 숫자 6개 : %d %d %d %d %d %d\n", lotto[0], lotto[1], lotto[2], lotto[3], lotto[4], lotto[5]);
			printf("--------------------------\n\n");

			printf("1등 -> 일치한 개수 : 6개, 상금 : 10억원\n");
			printf("2등 -> 일치한 개수 : 5개, 상금 : 1억원\n");
			printf("3등 -> 일치한 개수 : 4개, 상금 : 5000만원\n");
			printf("\n");

			printf("결과 : ");
			switch (co) {
			case 0:
				printf("등수에 들지 못함!!\n");
				printf("일치한 개수 : 0개, 상금 : 0원\n");
				break;
			case 1:
				printf("등수에 들지 못함!!\n");
				printf("일치한 개수 : 1개, 상금 : 0원\n");
				break;
			case 2:
				printf("등수에 들지 못함!!\n");
				printf("일치한 개수 : 2개, 상금 : 0원\n");
				break;
			case 3:
				printf("등수에 들지 못함!!\n");
				printf("일치한 개수 : 3개, 상금 : 0원\n");
				break;
			case 4:
				printf("3등!!\n");
				printf("일치한 개수 : 4개, 상금 : 5000만원\n");
				break;
			case 5:
				printf("2등!!\n");
				printf("일치한 개수 : 5개, 상금 : 1억원\n");
				break;
			case 6:
				printf("1등!!\n");
				printf("일치한 개수 : 6개, 상금 : 10억원\n");
				break;
			}
			printf("\n");
		}
		else if (choice == 2) {
			exit(0);
		}
		else {
			printf("잘못입력!! 프로그램 종료!!\n");
			return 0;
		}
	}
	return 0;
}