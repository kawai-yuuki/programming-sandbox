#include <stdio.h>

int main(void) 
{
    int total_cost, num_people;
    int remainder;

    // 飲食代（総額）と人数を入力
    printf("飲食代（円）を入力してください＞ ");
    scanf("%d", &total_cost);
    printf("人数を入力してください＞ ");
    scanf("%d", &num_people);

    // 飲食代を人数で割ったときの端数を計算
    remainder = total_cost % num_people;

    // 結果を表示
    printf("飲食代%d円を%d人で割ったときの端数は%d円です。\n", 
        total_cost, num_people, remainder);

    return 0;
}
