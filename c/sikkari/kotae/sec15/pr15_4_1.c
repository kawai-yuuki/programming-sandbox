#include <stdio.h>

// 直方体を表す構造体
typedef struct {
    int width;      // 幅
    int height;     // 高さ
    int depth;      // 奥行き
} Box;

int calculate_volume(Box box);

int main(void)
{
    Box box;    // 直方体

    printf("直方体の幅、高さ、奥行きを入力してください（例：3 4 5）＞ ");
    scanf("%d %d %d", &box.width, &box.height, &box.depth);

    // 体積を計算
    int volume = calculate_volume(box);

    // 結果を表示
    printf("直方体の体積: %d\n", volume);

    return 0;
}

// 直方体の体積を計算する関数
int calculate_volume(Box box)
{
    return box.width * box.height * box.depth;
}

