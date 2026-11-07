// ビット単位のシフト演算子を確認するプログラム
#include <stdio.h>
#include <stdint.h>

int main(void)
{
    // 正の整数の左シフトの例
    uint16_t x1 = 100;
    printf("%huを2ビット左シフト: ", x1);
    x1 <<= 2;
    printf("%hu\n", x1);

    // 正の整数の右シフトの例
    uint16_t x2 = 100;
    printf("%huを2ビット右シフト: ", x2);
    x2 >>= 2;
    printf("%hu\n", x2);

    // 負の整数の右シフトの例
    int16_t x3 = -100;
    printf("%hdを2ビット右シフト: ", x3);
    x3 >>= 2;
    printf("%hd\n", x3);  // （結果は環境依存）

    return 0;
}
