 문제 1
#include <stdio.h>
#include <conio.h> 
#define ESC 0x1b
int main()
{
	char ch;
	while (1)
	{
		ch = _getch();
		if (ch == ESC) {
			break;
		}
		if (ch >= 'a' && ch <= 'z') {
			ch = ch - 32;
		}
		_putch(ch);
		printf("\n");
	}
	return 0;
}

문제 2
#include <stdio.h>
#include <windows.h>
#include <conio.h>
int main()
{
	char ch;
	while (1)
	{
		printf("키를 입력하세요\n");
		Sleep(150);
		if(_kbhit()){
			ch = _getch();
			_putch(ch);
			printf("\n");
		}
	}
	return 0;
}

문제 3
#include <stdio.h>
#include <windows.h>
#include <conio.h>
int test;
int main()
{
	for (int i = 0; i < 4; i++) {
		test = _getch();
		printf("test 값 : %d\n", test);
		if (test == 224) {
			test = _getch();
		}
		printf("%d\n", test);
	}
	return 0;
}
up : 224, 72  반환
left : 224, 75 반환
down : 224, 80 반환
right : 224, 77 반환

문제 4
#include <stdio.h>
#include <windows.h>
#include <conio.h>
int main()
{
	char ch;
	while (1)
	{
		printf("키를 입력하세요\n");
		Sleep(200);
		if (_kbhit()) {
			ch = _getch();
			switch (ch) {
			case 72:
				printf("위\n");
				break;
			case 80:
				printf("아래\n");
				break;
			case 75:
				printf("왼쪽\n");
				break;
			case 77:
				printf("오른쪽\n");
				break;
			}
		}
	}
	return 0;
}

문제 5
#include <stdio.h>
#include <windows.h>
void SetColor(int color);
int main()
{
	for (int i = 0; i < 16; i++) {
		SetColor(i);
		printf("SetColor : %d\n", i);
	}
	return 0;
}
void SetColor(int color) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

문제 6
#include <stdio.h>
#include <stdlib.h>
int main()
{ // rand : 고정 seed
	printf("rand : %d\n", rand());
	printf("rand : %d\n", rand());
	printf("rand : %d\n", rand());
	printf("rand : %d\n", rand());
	printf("rand : %d\n", rand());

	return 0;
}

문제 7
#include <stdio.h>
#include <stdlib.h>
int main()
{ //srand : seed값 다르게 전달
	printf("time함수 사용 : %d\n", time(NULL));
	printf("time함수 사용 : %d\n", time(NULL));
	printf("-------SEED값 변경 전-------\n");
	printf("rand : %d\n", rand());
	printf("rand : %d\n", rand());
	printf("rand : %d\n", rand());
	srand(time(NULL));
	printf("-------SEED값 변경 후-------\n");
	printf("rand : %d\n", rand()%10);
	printf("rand : %d\n", rand()%10);
	printf("rand : %d\n", rand()%10);

	return 0;
}
