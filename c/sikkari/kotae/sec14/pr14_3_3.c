#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int is_prime(int num);

int main(int argc, char *argv[])
{
    if (argc != 2) {
        printf("エラー: 1つの正の整数を指定してください。\n");
        return 1;
    }

    int num = atoi(argv[1]);

    if (num <= 0) {
        printf("エラー: 正の整数を入力してください。\n");
        return 1;
    }

    // 素数判定
    if (is_prime(num)) {
        printf("%d は素数です。\n", num);
    } else {
        printf("%d は素数ではありません。\n", num);
    }

    return 0;
}

// 素数判定関数
int is_prime(int num)
{
    if (num < 2)
        return 0; // 0と1は素数ではない

    double end = sqrt(num); 
    for (int i = 2; i <= end; i++) {
        if (num % i == 0) {
            return 0; // 割り切れる数がある場合は素数ではない
        }
    }
    return 1; // 素数
}






