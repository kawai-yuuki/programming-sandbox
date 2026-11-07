#include <stdio.h>

void print_calendar(int year, int month);
int is_leap_year(int year);
int get_day_of_week(int year, int month, int day);
int get_last_day(int year, int month);

int main(void)
{
    int year, month;

    // 年と月を入力
    printf("西暦を入力してください＞ ");
    scanf("%d", &year);
    printf("月を入力してください＞ ");
    scanf("%d", &month);

    // カレンダーを表示
    print_calendar(year, month);

    return 0;
}

// 閏年かどうかを判定する関数
int is_leap_year(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; // 閏年
    } else {
        return 0; // 平年
    }
}

// 曜日を計算する関数
int get_day_of_week(int year, int month, int day)
{
    if (month < 3) {
        year--;
        month += 12;
    }
    // Zellerの公式
    return (5 * year / 4 - year / 100 + year / 400 + (26 * month + 16) / 10 + day ) % 7;
}

// 最終日を計算する関数
int get_last_day(int year, int month)
{
    int month_last_day[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int last_day;
    if (month == 2) {   // 2月の場合のみ、うるう年なら+1
		last_day = month_last_day[month-1] + is_leap_year(year);
	}
	else if (month >= 1 && month <= 12) {
		last_day = month_last_day[month-1];
	}
    else {
        printf("エラー: 月の値は1から12の範囲で指定してください。\n");
        last_day = -1;
    }
    return last_day;
}

// 指定された年と月のカレンダーを表示する関数
void print_calendar(int year, int month)
{
    if (month < 1 || month > 12) {
        printf("エラー: 月の値は1から12の範囲で指定してください。\n");
        return;
    }

    // 1日目の曜日を取得
    int start_week = get_day_of_week(year, month, 1);

    // 最終日を取得
    int last_day = get_last_day(year, month);

    // カレンダーを表示
    printf("      %d年 %d月\n", year, month);
    printf(" 日 月 火 水 木 金 土\n");

    // 空白を挿入して1日目の曜日に合わせる
    for (int i = 0; i < start_week; i++) {
        printf("   ");
    }
    // 各日を表示
    for (int day = 1; day <= last_day; day++) {
        printf("%3d", day);
        if ((start_week + day) % 7 == 0) {
            printf("\n"); // 土曜日で改行
        }
    }
    printf("\n");
}