#include <stdio.h>

int main(void)
{
    int x = 775, y = 5298;
    int user_answer;
    const int ANSWER = x + y; // 正解

    do {
        printf("%d + %d の答えは？＞ ", x , y);
        scanf("%d", &user_answer);
    } while (user_answer != ANSWER);

    printf("正しい結果を入力しました。\n");
    
    return 0;
}
