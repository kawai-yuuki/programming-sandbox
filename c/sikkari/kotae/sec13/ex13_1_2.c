// 税込み金額を求める商品コードで決定するプログラム
#include <stdio.h>

#define BASE_CODE 10000   // 軽減税率の基準コード

int total_with_tax(int amount, int code);
double get_tax_rate(int code);

int main(void)
{
    int price = 10000;          // 小計
    int product_code = 1234;    // 商品コード

    // 税込み金額を求める
    int total = total_with_tax(price, product_code);

    printf("商品コード%dの税込み金額は%d円です。\n", product_code, total);

    return 0;
}

// 消費税込み金額を計算する関数
int total_with_tax(int amount, int code)
{
    double tax_rate = get_tax_rate(code);
    int tax_included = amount * (1.0 + tax_rate);
    return tax_included;
}

// 税率を取得する関数
double get_tax_rate(int code)
{
    const double TAX_RATE = 0.10;           // 消費税率（10%）
    const double REDUCED_TAX_RATE = 0.08;   // 軽減税率（8%）
    double tax;
    if (code >= BASE_CODE) {
        tax = TAX_RATE;
    }
    else {
        tax = REDUCED_TAX_RATE;
    }

    return tax;
}
