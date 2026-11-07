#include <stdio.h>

int count_over_average(const int arr[], int size);

int main(void)
{
    int scores[] = {85, 92, 78, 69, 61};
    int n = (int)(sizeof(scores) / sizeof(scores[0]));

    int count = count_over_average(scores, n);
    printf("平均以上の個数: %d\n", count);

    return 0;
}

// 配列要素の平均以上の個数を返す関数
int count_over_average(const int arr[], int size)
{
    if (size <= 0) {
        // 要素数が0以下の場合は0を返す
        return 0;
    }

    int sum = 0;  // 合計を格納する変数
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    // 平均を求める
    double avg = (double)sum / size;

    // 平均以上の要素数をカウント
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] >= avg) {
            count++;
        }
    }

    return count;
}
