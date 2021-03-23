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
		printf("숫자야구\n");
		printf("1. 시작, 2. 종료 -> ");
		scanf_s("%d", &choice);
		printf("■■■■■■■■■■■■■■■■■\n");

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
				printf("\n0~9까지 중복 되지 않는 숫자 3개를 입력해주세요 >> ");
				for (int i = 0; i < 3; i++) {
					scanf_s("%d", &player[i]);
				}
				if (player[0] == player[1] || player[0] == player[2] || player[1] == player[2]) {
					printf("ERROR(중복된 숫자가 입력되었습니다.)\n");
					printf("게임을 종료합니다!!\n");
					exit(0);
				}
				if (player[0] > 9 || player[1] > 9 || player[2] > 9) {
					printf("ERROR(0~9까지의 수로 입력해주세요.)\n");
					printf("게임을 종료합니다!!\n");
					exit(0);
				}
				if (player[0] < 0 || player[1] < 0 || player[2] < 0) {
					printf("ERROR(0~9까지의 수로 입력해주세요.)\n");
					printf("게임을 종료합니다!!\n");
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
					printf("%d번째 시도 : %dS\n\n", cnt, strike);
					printf("\nYOU WIN!!(정답 : %d %d %d)\n\n", player[0], player[1], player[2]);
					tf = 0;
				}
				else {
					printf("%d번째 시도 : %dS %dB\n", cnt, strike, ball - strike);
				}
				strike = 0;
				ball = 0;
			}
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