#include <stdio.h>

int main(void)
{
    char choice;
    double height, weight, bmi;

    do {
        printf("身長を入力してください（cm）＞ ");
        scanf("%lf", &height);
        printf("体重を入力してください（kg）＞ ");
        scanf("%lf", &weight);

        bmi = weight / ((height / 100.0) * (height / 100.0)); // BMIを計算
        printf("BMIは%.2fです。\n", bmi);

        printf("算出を続けますか（y/n）＞ ");
        scanf(" %c", &choice); // スペースを入れて改行を無視
    } while (choice == 'y');

    printf("プログラムを終了します。\n");
    return 0;
}
