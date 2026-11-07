#include <stdio.h>

void hospital_status(int day_week, int time_slot);

int main(void)
{
    int day_week, time_slot;

    // ユーザーから曜日を入力
    printf("曜日（0:日 1:月 2:火 3:水 4:木 5:金 6:土 7:祭日）＞ ");
    scanf("%d", &day_week);

    // ユーザーから時間帯を入力
    printf("時間帯（1:午前中 2:午後 3:夜間）＞ ");
    scanf("%d", &time_slot);

    // 診療状況を確認 
    hospital_status(day_week, time_slot);
    
    return 0;
}

void hospital_status(int day_week, int time_slot)
{
    // 診療状況を表す表（1:診療中、0:休診中）
    int schedule[8][3] = {
        {0, 0, 0}, // 日曜
        {1, 1, 1}, // 月曜
        {0, 1, 1}, // 火曜
        {1, 1, 0}, // 水曜
        {1, 1, 1}, // 木曜
        {0, 1, 1}, // 金曜
        {1, 0, 0}, // 土曜
        {0, 0, 0}  // 祭日
    };

    // 範囲外チェック（曜日）
    if (!(day_week >= 0 && day_week <= 7)) {
        printf("エラー: 曜日の値は0から7の範囲で指定してください。\n");
        return;
    }
    // 範囲外チェック（時間帯）
    if (!(time_slot >= 1 && time_slot <= 3)) {
        printf("エラー: 時間帯の値は1から3の範囲で指定してください。\n");
        return;
    }

    // 診療中か休診中かを判定
    if (schedule[day_week][time_slot - 1] == 1) {
        printf("病院は診療中です。\n");
    } else {
        printf("病院は休診中です。\n");
    }
}
