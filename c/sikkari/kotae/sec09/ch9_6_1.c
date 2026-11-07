#include <stdio.h>

int main(void)
{
    int dividend, divisor; // 割られる数と割る数
    int count = 0;         // 計算回数

    while (count < 3) { // 3回計算を繰り返す
        printf("整数を2つ入力してください＞ ");
        scanf("%d%d", &dividend, &divisor);

        if (divisor == 0) { // 割る数が0の場合
            printf("エラー：0で割ることはできません。\n");
            continue; // 次の入力へ
        }

        // 整数部を表示
        printf("%d / %d = %d", dividend , divisor, dividend / divisor);
        dividend %= divisor;

		// 小数部の表示
		for (int i = 1; i <= 50; i++) {
			// 割り切れればループ終了
			if (dividend % divisor == 0)
				break;
			
            // 小数点以下1桁なら小数点を表示
			if (i == 1)
				printf(".");

			// 余りを10倍する
			dividend = dividend % divisor * 10;

			// 商の表示
			printf("%d", dividend / divisor);
		}
        printf("\n");
        count++; // 計算回数を増やす
    }

    return 0;
}
