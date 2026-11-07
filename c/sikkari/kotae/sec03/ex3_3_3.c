// キー入力した値で自己紹介を表示するプログラム
#include <stdio.h>

int main(void) 
{
    int age;            // 年齢
    int master_months;  // C言語をマスターする月数
    int pm_age;         // PMになりたい年齢

    scanf("%d%d%d", &age, &master_months, &pm_age);
    
    printf("こんにちは！福島太郎です。\n");
    printf("%d歳の新人プログラマーです。\n", age);
    printf("C言語は%dか月でマスターする予定です。\n", master_months);
    printf("%d歳でPMになるのが目標です。\n", pm_age);

    return 0;
}

