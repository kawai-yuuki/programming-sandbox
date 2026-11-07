// 合格者、最高点、最低点を求めるプログラム
#include <stdio.h>

int main(void) 
{
    int scores[] = {85, 92, 78, 69, 61};
    size_t student_count = sizeof(scores) / sizeof(scores[0]);

    // 合格点（70点以上）の人数をカウント
    int pass_count = 0;
    for (int i = 0; i < student_count; i++) {
        if (scores[i] >= 70) {
            pass_count++;
        }
    }
    printf("合格者の人数: %d\n", pass_count);

    // 点数の最高値と最低値を計算
    int max_score = scores[0];
    int min_score = scores[0];
    for (int i = 1; i < student_count; i++) {
        if (scores[i] > max_score) {
            max_score = scores[i];
        }
        if (scores[i] < min_score) {
            min_score = scores[i];
        }
    }
    printf("最高点: %d\n", max_score);
    printf("最低点: %d\n", min_score);

    return 0;
}