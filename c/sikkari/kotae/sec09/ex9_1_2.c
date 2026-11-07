// whileループで負の値を入力するまで、入力値を合計するプログラム
#include <stdio.h>

int main(void)
{
	int n, sum = 0;

	printf("整数値を入力してください（負の数で終了）＞ ");
	scanf("%d", &n);	// この入力がないと20行目のnが不定値になる
	
	while (n >= 0) {	// whileループは「～の間処理を繰り返す」場合に向く
		sum += n;
		printf("整数値を入力してください（負の数で終了）＞ ");
		scanf("%d", &n);
	}
	printf("合計値は%dです。\n", sum);
	
	return 0;
}