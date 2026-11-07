#include <stdio.h>
#define STUDENT_COUNT 3 // 学生数
#define SUBJECT_COUNT 4 // 科目数
#define HIGH_SCORE 90   // 高得点

int main(void) 
{
    // 点数データを2次元配列で管理
    int scores[STUDENT_COUNT][SUBJECT_COUNT] = {
        {85, 93, 88, 75},  // 1人目の点数
        {92, 88, 71, 98},  // 2人目の点数
        {78, 69, 85, 84}   // 3人目の点数
    };

    // 高得点の科目数を数える
    int count_high_scores = 0;  // 高得点の科目数
    for (int i = 0; i < STUDENT_COUNT; i++) {
        for (int j = 0; j < SUBJECT_COUNT; j++) {
            if (scores[i][j] >= HIGH_SCORE) {  // 条件を満たす場合にカウント
                count_high_scores++;
            }
        }
    }
    printf("%d点以上の科目数: %d\n", HIGH_SCORE, count_high_scores);

    // 最高点と最低点を求める
    int max_score = scores[0][0];  // 初期値を最初の点数に設定
    int min_score = scores[0][0];  // 初期値を最初の点数に設定
    for (int i = 0; i < STUDENT_COUNT; i++) {
        for (int j = 0; j < SUBJECT_COUNT; j++) {
            if (scores[i][j] > max_score) {
                max_score = scores[i][j];  // 最高点を更新
            }
            if (scores[i][j] < min_score) {
                min_score = scores[i][j];  // 最低点を更新
            }
        }
    }
    printf("最高点: %d\n", max_score);
    printf("最低点: %d\n", min_score);

    return 0;
}
