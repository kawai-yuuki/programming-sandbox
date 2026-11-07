#include <stdio.h>

int main(void) {
    int x = 775, y = 5298;
    int user_answer;
    const int ANSWER = x + y; // 正解

    while (1) {
        printf("%d + %d の答えは？＞ ", x , y); 
        scanf("%d", &user_answer);
        if (user_answer == ANSWER) {
            printf("正しい結果を入力しました。\n");
            break; // 正解の場合、ループを抜ける
        }
    }

    return 0;
}
