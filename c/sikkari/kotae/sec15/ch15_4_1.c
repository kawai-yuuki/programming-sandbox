#include <stdio.h>

// 日付を表す構造体
typedef struct {
    int year;
    int month;
    int day;
} Date;

int is_leap_year(int year);
int date_to_days(Date date);
int diff_days(Date date1, Date date2);

int main(void)
{
    Date d1, d2;

    printf("年月日を入力してください（例 2025 1 1）＞ ");
    scanf("%d %d %d", &d1.year, &d1.month, &d1.day);
    printf("年月日を入力してください（例 2025 1 2）＞ ");
    scanf("%d %d %d", &d2.year, &d2.month, &d2.day);

    int diff = diff_days(d1, d2);

    if (diff == -1) {
        printf("エラー: 日付の順序が不正です。\n");
    } else {
        printf("日数の差: %d 日\n", diff);
    }

    return 0;
}

// 閏年判定関数（返却値 1：閏年 0：閏年ではない）
int is_leap_year(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// 日付を通算日数に変換する関数
int date_to_days(Date date)
{
    // 日数の配列（平年ベース）
    const int days_in_month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    // 月の範囲チェック
    if (date.month < 1 || date.month > 12) {
        return -1;  // 無効な月の場合
    }

    int days = 0;   // 経過日数

    // 年ごとの経過日数
    for (int y = 1; y < date.year; y++) {
        days += (365 + is_leap_year(y));
    }

    // 月ごとの経過日数
    for (int m = 0; m < date.month - 1; m++) {
        days += days_in_month[m];
        if (m == 1 && is_leap_year(date.year)) { // 2月の閏年調整(mは0からなので1が2月)
            days += 1;
        }
    }

    // 日ごとの経過日数
    days += date.day;

    return days;
}

// 日数の差を計算する関数
int diff_days(Date date1, Date date2)
{
    int days1 = date_to_days(date1);
    int days2 = date_to_days(date2);

    if (days2 < days1) {
        return -1;
    }

    return days2 - days1;
}


