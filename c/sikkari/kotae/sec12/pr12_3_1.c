#include <stdio.h>
#include <string.h>
#define MONTHS_NUM 12

int main(void)
{
    // 月の名前
    const char *months[MONTHS_NUM] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    // 各月の名前と文字数を表示
    printf("月の名前と文字数の一覧\n");
    for (int i = 0; i < MONTHS_NUM; i++) {
        printf("%2d月: %-10s %2zu 文字\n", i + 1, months[i], strlen(months[i]));
    }

    return 0;
}
