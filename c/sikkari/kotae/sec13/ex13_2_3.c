// 返却値だけ持つ関数の例
#include <stdio.h>

int menu_number(void);

int main(void)
{
    int no;

    no = menu_number();
    printf("\nユーザーが選択したメニューは%d番です。\n", no);

    return 0;
}

// ユーザーが指定したメニューの番号を返す関数
int menu_number(void)
{
    int no;
    do {
        printf("メニュー番号を選択してください。\n");
        printf("*** メニュー ***\n");
        printf("1. 日替わり定食\n");
        printf("2. 麺（タンメン）\n");
        printf("3. どんぶり（親子丼）\n");
        printf("1～3？ ＞ ");
        scanf("%d", &no);
    } while (no < 1 || no > 3);

    return no;
}
