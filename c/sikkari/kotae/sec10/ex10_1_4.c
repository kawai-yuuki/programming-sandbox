// sizeof演算子で配列の要素数を求めるプログラム
#include <stdio.h>

int main(void) 
{
    int scores[] = {85, 92, 78, 69, 61};

    size_t student_count = sizeof(scores) / sizeof(scores[0]);
    printf("配列の要素数: %zu\n", student_count);

    for (int i = 0; i < student_count; i++) {
        printf("%d人目の点数: %d\n", i + 1, scores[i]);
    }

    return 0;
}