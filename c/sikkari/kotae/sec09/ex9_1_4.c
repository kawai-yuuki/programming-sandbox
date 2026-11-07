// 表示タイプに応じて、数値を昇順または降順で表示するプログラム
#include <stdio.h>

int main(void)
{
    int type;

    printf("表示タイプを入力してください（1:昇順 2:降順）＞ ");
    scanf("%d", &type);

    if (type == 1) {
        int i = 1;
        while (i <= 5) {    // 1から5まで表示
            printf("%d\t", i);
            i++;
        }
    }
    else {
        int i = 5;
        while (i >= 1) {    // 5から1まで表示
            printf("%d\t", i);
            i--;
        }
    }
    printf("\n");

    return 0;
}
