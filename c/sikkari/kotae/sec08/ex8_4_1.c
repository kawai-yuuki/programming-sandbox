// switch文を使って果物の名前を表示するプログラム
#include <stdio.h>

int main(void)
{
    char ch;

    printf("アルファベットを入力してください＞ ");
    scanf(" %c", &ch);

	switch (ch) {
		case 'a':
			printf("apple\n");
			break;
		case 'b':
			printf("banana\n");
			break;
		case 'c':
			printf("cherry\n");
			break;
		default:
			printf("tomato\n");
			break;
	}

    return 0;
}