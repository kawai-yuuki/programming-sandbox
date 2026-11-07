#include <stdio.h>

int main(void)
{
    int purchase_amount;    // 購入金額
    int member_kind;        // 会員種別
    double discount;        // 割引額（小数点を扱うためdouble型）

    printf("購入金額を入力してください（円）＞ ");
    scanf("%d", &purchase_amount);

    printf("会員ですか？（1: はい, 0: いいえ）＞ ");
    scanf("%d", &member_kind);

    if (member_kind == 1) {  // 会員の場合
        if (purchase_amount >= 10000) {  // 1万円以上の場合
            discount = purchase_amount * 0.10;  // 10%割引
        } 
        else {  // 1万円未満の場合
            discount = purchase_amount * 0.05;  // 5%割引
        }
    } 
    else {  // 非会員の場合
        if (purchase_amount >= 10000) {  // 1万円以上の場合
            discount = purchase_amount * 0.05;  // 5%割引
        }
        else {  // 1万円未満の場合
            discount = 0;  // 割引なし
        }
    }

    // 割引額と支払金額を整数で表示
    printf("割引額は %.0f円です。\n", discount);  // 四捨五入して表示
    printf("支払金額は %.0f円です。\n", purchase_amount - discount);

    return 0;
}
