// 「A」を入力するプログラム
#include <stdio.h>

int main(void)
{
	char c;
	unsigned int n;

	printf("AキーとEnterキーを押してください。＞ ");
	scanf ("%c", &c);
	printf("入力データを10進出力 :%d\n", c);

	printf("\nAキーとEnterキーを押してください。＞ ");
	scanf("%x", &n);
	printf("入力データを10進出力 :%d\n", n);

	return 0;
}
