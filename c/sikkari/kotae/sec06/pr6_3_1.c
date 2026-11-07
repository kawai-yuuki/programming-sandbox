#include <stdio.h>

int main(void)
{
    int hamburger = 450, potato = 200, drink = 150;
 
    // 合計金額を計算する
    int total_price = hamburger + potato + drink;
    printf("合計金額 = %d円\n", total_price);

    // クーポンを適用して100円引き
    total_price -= 100;
    printf("クーポン適用後の金額 = %d円\n", total_price);

    // 消費税を加算 (消費税率10%)
    total_price *= 1.10;
    printf("税込み金額 = %d円\n", total_price);

    return 0;
}
