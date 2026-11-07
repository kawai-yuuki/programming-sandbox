#include <stdio.h>

int main(void) 
{
    int scores[] = {85, 92, 78, 69, 61};
    size_t student_count = sizeof(scores) / sizeof(scores[0]);

    // 合計点を求める
    int sum = 0;
    for (int i = 0; i < student_count; i++) {
        sum += scores[i];
    }
    printf("合計点: %d\n", sum);

    // 平均点を求める
    double average = (double)sum / student_count;
    printf("平均点: %.1f\n", average);

    return 0;
}