#include <stdio.h>

// 商品リストを表す構造体
typedef struct {
    char name[50];  // 商品名
    int price;      // 単価
    int quantity;   // 数量
} Product;

int calc_total_price(const Product *p, int size);

int main(void)
{
    // 商品リストの定義
    Product products[] = {
        {"リンゴ", 120, 3},
        {"バナナ", 200, 2},
        {"オレンジ", 150, 4}
    };

    int size = sizeof(products) / sizeof(products[0]);

    // 合計価格を計算
    int total = calc_total_price(products, size);

    // 結果を表示
    printf("合計価格: %d 円\n", total);

    return 0;
}

// 商品の合計価格を計算する関数
int calc_total_price(const Product *p, int size)
{
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += (p + i)->price * (p + i)->quantity;
    }
    return total;
}
