#include <stdio.h>

#define SUB_COUNT 3 // 科目数

// 学生情報を表す構造体
typedef struct {
    int id;                 // 学生ID
    char name[20];          // 氏名
    int scores[SUB_COUNT];  // 点数の配列（0:数学、1:英語、2:情報）
} Student;

int main(void)
{
    Student students[] = {
        {1, "青森 一朗", {78, 65, 71}},
        {2, "岩手 次郎", {88, 87, 92}},
        {3, "秋田 三郎", {67, 94, 70}},
        {4, "宮城 史郎", {85, 81, 78}},
        {5, "山形 吾朗", {65, 94, 83}},
        {6, "福島 太郎", {76, 82, 88}}
    };
    size_t count = sizeof(students) / sizeof(students[0]);

    // 配列の先頭要素を指すポインタ
    Student *p = students;

    // 科目名の配列（インデックス 0:数学、1:英語、2:情報）
    char *subjects[] = { "数学", "英語", "情報" };

    // 各科目ごとの最高点と最低点を記録する配列
    int max_score[SUB_COUNT], min_score[SUB_COUNT];

    // 各科目ごとに全学生の点数を走査して、最高点と最低点を求める
    for (int subj = 0; subj < SUB_COUNT; subj++) {
        max_score[subj] = p->scores[subj];
        min_score[subj] = p->scores[subj];
        for (int i = 1; i < count; i++) {
            if ((p + i)->scores[subj] > max_score[subj])
                max_score[subj] = (p + i)->scores[subj];
            if ((p + i)->scores[subj] < min_score[subj])
                min_score[subj] = (p + i)->scores[subj];
        }
    }

    // 全科目中の最高点と最低点を求める
    int overall_max = max_score[0];
    int overall_min = min_score[0];
    for (int subj = 1; subj < SUB_COUNT; subj++) {
        if (max_score[subj] > overall_max)
            overall_max = max_score[subj];
        if (min_score[subj] < overall_min)
            overall_min = min_score[subj];
    }

    // 結果の表示（同じ点数の場合は複数の科目を表示）
    printf("最高得点の科目: ");
    for (int subj = 0; subj < SUB_COUNT; subj++) {
        if (max_score[subj] == overall_max)
            printf("%s ", subjects[subj]);
    }
    printf("%d点\n", overall_max);

    printf("最低得点の科目: ");
    for (int subj = 0; subj < SUB_COUNT; subj++) {
        if (min_score[subj] == overall_min)
            printf("%s ", subjects[subj]);
    }
    printf("%d点\n", overall_min);

    return 0;
}
