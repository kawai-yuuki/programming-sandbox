#include <stdio.h>

int print_last_day_weekday(int year, int month);
int is_leap_year(int year);
int get_day_of_week(int year, int month, int day);

int main(void)
{
    int year, month;

    // 年と月を入力
    printf("西暦を入力してください＞ ");
    scanf("%d", &year);
    printf("月を入力してください＞ ");
    scanf("%d", &month);

    // 最終日と曜日を表示
    print_last_day_weekday(year, month);

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

// 指定された月の最終日と曜日を表示する関数
int print_last_day_weekday(int year, int month)
{
    int month_last_day[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int last_day;
	if (month == 2) {
		last_day = month_last_day[month-1] + is_leap_year(year);    // 閏年なら+1
	}
	else if (month >= 1 && month <= 12) {
		last_day = month_last_day[month-1];
	}
    else {
        printf("月の指定が異なります。\n");
        return 0; 
    }

    // 曜日を計算
    int day_of_week = get_day_of_week(year, month, last_day);

    // 曜日を文字列に変換
    const char* weekdays[] = {"日曜日", "月曜日", "火曜日", "水曜日", "木曜日", "金曜日", "土曜日"};

    // 結果を表示
    printf("%d年%d月の最終日は%d日（%s）です。\n", year, month, last_day, weekdays[day_of_week]);

    return 1;
}

