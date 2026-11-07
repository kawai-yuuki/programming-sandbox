#include <stdio.h>

int get_max(int a, int b);
int get_max_of_three(int a, int b, int c);

int main(void)
{
    int num1, num2, num3;

    // 3つの整数値を入力
    printf("1つ目の整数を入力してください＞ ");
    scanf("%d", &num1);
    printf("2つ目の整数を入力してください＞ ");
    scanf("%d", &num2);
    printf("3つ目の整数を入力してください＞ ");
    scanf("%d", &num3);

    // 最大値を求める関数を呼び出す
    int max = get_max_of_three(num1, num2, num3);

    // 結果を表示
    printf("入力された3つの値の中で一番大きな値は: %d\n", max);

    return 0;
}

// 2つの整数値の大きいほうを返す関数
int get_max(int a, int b)
{
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

// 3つの整数値の中で一番大きな値を求める関数
int get_max_of_three(int a, int b, int c)
{
    // get_maxを2回呼び出して最大値を求める
    return get_max(get_max(a, b), c);
}
