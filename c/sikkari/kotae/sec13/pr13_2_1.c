#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void roll_dice(void);

int main(void)
{
    // 現在時刻をシードに指定
    srand((unsigned int)time(NULL));

    // サイコロを振る
    roll_dice();

    return 0;
}

// サイコロの目をランダムに表示する関数
void roll_dice(void)
{
    int dice = rand() % 6 + 1;
    printf("サイコロの目: %d\n", dice);

    switch (dice) {
        case 1:
            printf("\n  ●\n");
            break;
        case 2:
            printf("\n●  ●\n");
            break;
        case 3:
            printf("●\n  ●\n    ●\n");
            break;
        case 4:
            printf("●  ●\n\n●  ●\n");
            break;
        case 5:
            printf("●  ●\n  ●\n●  ●\n");
            break;
        default:
            printf("●●●\n\n●●●\n");
            break;
    }
}
