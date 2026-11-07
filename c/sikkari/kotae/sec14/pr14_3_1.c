#include <stdio.h>
#include <stdlib.h>     // atof関数を使用するためにインクルード

int main(int argc, char *argv[])
{
    // 計算する前にコマンドライン引数の数を必ずチェック
	if (argc < 2) {
        printf("エラー: 少なくとも1つ以上の数を指定してください。\n");
        return 1;
    }

    // 合計する
    double sum = 0.0;
	for (int i = 1; i < argc; i++) {
        sum += atof(argv[i]);
	}

    // 平均を表示する
    printf("平均 = %f\n", sum / (argc - 1));

	return 0;
}