#include <stdio.h>

int main(void)
{
    // 誕生石をポインタの配列で管理
    const char *birthstones[] = {
        "ガーネット",   // 1月
        "アメジスト",   // 2月
        "アクアマリン", // 3月
        "ダイヤモンド", // 4月
        "エメラルド",   // 5月
        "真珠",         // 6月
        "ルビー",       // 7月
        "ペリドット",   // 8月
        "サファイア",   // 9月
        "オパール",     // 10月
        "トパーズ",     // 11月
        "トルコ石"      // 12月
    };

    int month;
    printf("月を入力してください（1～12）＞ ");
    scanf("%d", &month);

    // 入力値を検証して誕生石を表示
    if (month >= 1 && month <= 12) {
        printf("%d月の誕生石は%sです。\n", month, birthstones[month - 1]);
    } else {
        printf("入力が不正です。1～12の範囲で入力してください。\n");
    }

    return 0;
}
