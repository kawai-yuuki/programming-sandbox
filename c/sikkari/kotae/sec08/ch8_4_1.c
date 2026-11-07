#include <stdio.h>

int main(void)
{
    int grade, skill_level;  // 学年とスキルレベル

    // 入力
    printf("学年を入力してください（1～3）＞ ");
    scanf("%d", &grade);

    printf("スキルレベルを選択してください（1: 初級, 2: 中級, 3: 上級）＞ ");
    scanf("%d", &skill_level);

    // 学年による分岐
    switch (grade) {
        case 1:  // 1年生
            switch (skill_level) {
                case 1: printf("チームに割り当てられる人数は2人です。\n"); break;  // 初級
                case 2: printf("チームに割り当てられる人数は4人です。\n"); break;  // 中級
                case 3: printf("チームに割り当てられる人数は6人です。\n"); break;  // 上級
                default: printf("正しいスキルレベルを選択してください。\n"); break;
            }
            break;
        case 2:  // 2年生
            switch (skill_level) {
                case 1: printf("チームに割り当てられる人数は3人です。\n"); break;  // 初級
                case 2: printf("チームに割り当てられる人数は6人です。\n"); break;  // 中級
                case 3: printf("チームに割り当てられる人数は8人です。\n"); break;  // 上級
                default: printf("正しいスキルレベルを選択してください。\n"); break;
            }
            break;
        case 3:  // 3年生
            switch (skill_level) {
                case 1: printf("チームに割り当てられる人数は4人です。\n"); break;  // 初級
                case 2: printf("チームに割り当てられる人数は8人です。\n"); break;  // 中級
                case 3: printf("チームに割り当てられる人数は10人です。\n"); break; // 上級
                default: printf("正しいスキルレベルを選択してください。\n"); break;
            }
            break;
        default:  // 無効な学年
            printf("正しい学年を選択してください。\n");
            break;
    }

    return 0;
}
