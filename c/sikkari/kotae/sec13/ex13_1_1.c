// 税込み金額を求めるプログラム
#include <stdio.h>

int total_with_tax(int amount);

int main(void)
{
    int price = 10000;           // 小計

    // 税込み金額を求める
    int total = total_with_tax(price);

    printf("%d円の税込み金額は%d円です。\n", price, total);

    return 0;
}

// 消費税込み金額を計算する関数
int total_with_tax(int amount)
{
    const double TAX_RATE = 0.10;   // 消費税率（10%）
    int tax_included = amount * (1.0 + TAX_RATE);
    return tax_included;
}
