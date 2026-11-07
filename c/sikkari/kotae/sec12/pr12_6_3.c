#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    // table[your_hand][computer_hand] → 0:あいこ, 1:ユーザーの勝ち, 2:ユーザーの負け
    int table[3][3] = {
        /* コンピュータ：     　グー   チョキ  パー */
        /* ユーザー：グー */   {0,       1,     2},
        /* ユーザー：チョキ */ {2,       0,     1},
        /* ユーザー：パー */   {1,       2,     0}
    };
    char *ken[3] = {"グー", "チョキ", "パー"};
    char *judge[3] = {"あいこ", "あなたの勝ち", "あなたの負け"};
    int user, computer;

    // 乱数のシードを初期化
    srand((unsigned)time(NULL));

    do {
        printf("じゃん、けん、ぽん！(1:グー 2:チョキ 3:パー) ＞ ");
        scanf("%d", &user);
    } while (user < 1 || user > 3);
    user--;
    printf("あなたは%s\n", ken[user]);

    computer = rand() % 3;
    printf("コンピュータは%s\n", ken[computer]);

    printf("%sです。\n", judge[table[user][computer]]);

    return 0;
}
