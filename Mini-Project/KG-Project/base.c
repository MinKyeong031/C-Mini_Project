 ���� 1
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

���� 2
#include <stdio.h>
#include <windows.h>
#include <conio.h>
int main()
{
	char ch;
	while (1)
	{
		printf("Ű�� �Է��ϼ���\n");
		Sleep(150);
		if(_kbhit()){
			ch = _getch();
			_putch(ch);
			printf("\n");
		}
	}
	return 0;
}

���� 3
#include <stdio.h>
#include <windows.h>
#include <conio.h>
int test;
int main()
{
	for (int i = 0; i < 4; i++) {
		test = _getch();
		printf("test �� : %d\n", test);
		if (test == 224) {
			test = _getch();
		}
		printf("%d\n", test);
	}
	return 0;
}
up : 224, 72  ��ȯ
left : 224, 75 ��ȯ
down : 224, 80 ��ȯ
right : 224, 77 ��ȯ

���� 4
#include <stdio.h>
#include <windows.h>
#include <conio.h>
int main()
{
	char ch;
	while (1)
	{
		printf("Ű�� �Է��ϼ���\n");
		Sleep(200);
		if (_kbhit()) {
			ch = _getch();
			switch (ch) {
			case 72:
				printf("��\n");
				break;
			case 80:
				printf("�Ʒ�\n");
				break;
			case 75:
				printf("����\n");
				break;
			case 77:
				printf("������\n");
				break;
			}
		}
	}
	return 0;
}

���� 5
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

���� 6
#include <stdio.h>
#include <stdlib.h>
int main()
{ // rand : ���� seed
	printf("rand : %d\n", rand());
	printf("rand : %d\n", rand());
	printf("rand : %d\n", rand());
	printf("rand : %d\n", rand());
	printf("rand : %d\n", rand());

	return 0;
}

���� 7
#include <stdio.h>
#include <stdlib.h>
int main()
{ //srand : seed�� �ٸ��� ����
	printf("time�Լ� ��� : %d\n", time(NULL));
	printf("time�Լ� ��� : %d\n", time(NULL));
	printf("-------SEED�� ���� ��-------\n");
	printf("rand : %d\n", rand());
	printf("rand : %d\n", rand());
	printf("rand : %d\n", rand());
	srand(time(NULL));
	printf("-------SEED�� ���� ��-------\n");
	printf("rand : %d\n", rand()%10);
	printf("rand : %d\n", rand()%10);
	printf("rand : %d\n", rand()%10);

	return 0;
}
