#include <stdio.h>

int main(void)
{
    int price1 = 1210, price2 = 755, price3 = 532;
    int payment = 5000;

    // 合計金額を計算
    int total_price = price1 + price2 + price3;
    printf("合計金額 = %d円\n", total_price);

    // 支払額5000円との差額（お釣り）を計算
    int change = payment - total_price;
    printf("お釣り = %d円\n", change);

    printf("\nお釣りの枚数\n");

    // 1000円札の枚数を計算
    int num_bills = change / 1000;
    printf("1000円札の枚数 = %d枚\n", num_bills);
    change %= 1000;

    // 500円玉の枚数を計算
    num_bills = change / 500;
    printf("500円玉の枚数 = %d枚\n", num_bills);
    change %= 500;

    // 100円玉の枚数を計算
    num_bills = change / 100;
    printf("100円玉の枚数 = %d枚\n", num_bills);
    change %= 100;

    // 50円玉の枚数を計算
    num_bills = change / 50;
    printf("50円玉の枚数 = %d枚\n", num_bills);
    change %= 50;

    // 10円玉の枚数を計算
    num_bills = change / 10;
    printf("10円玉の枚数 = %d枚\n", num_bills);
    change %= 10;

    // 5円玉の枚数を計算
    num_bills = change / 5;
    printf("5円玉の枚数 = %d枚\n", num_bills);
    change %= 5;

    // 1円玉の枚数を計算
    printf("1円玉の枚数 = %d枚\n", change);

    return 0;
}
