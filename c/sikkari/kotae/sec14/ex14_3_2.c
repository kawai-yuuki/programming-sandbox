// コマンドライン引数で受け取った整数値を合計するプログラム
#include <stdio.h>
#include <stdlib.h>  // atoiを使うためにインクルード

int main(int argc, char *argv[])
{
    if (argc != 3) {  // プログラム名を含めると、引数は合計3個
        printf("使い方: %s 数値1 数値2\n", argv[0]);
        return 1;
    }

    // 文字列を整数に変換
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    printf("%d + %d = %d\n", num1, num2, num1 + num2);

    return 0;
}
