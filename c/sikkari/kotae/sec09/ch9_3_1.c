#include <stdio.h>

int main(void)
{
    char choice;
    double height, weight, bmi, ideal_weight, weight_diff;

    do {
        printf("身長を入力してください（cm）＞ ");
        scanf("%lf", &height);
        printf("体重を入力してください（kg）＞ ");
        scanf("%lf", &weight);

        // BMIの算出
        bmi = weight / ((height / 100.0) * (height / 100.0));

        // 適正体重と差の計算
        ideal_weight = ((height / 100.0) * (height / 100.0)) * 22;
        weight_diff = weight - ideal_weight;

        // 肥満度の判定
        if (bmi < 18.5) {
            printf("判定: 低体重（痩せ型）\t");
        } else if (bmi < 25) {
            printf("判定: 普通体重\t");
        } else if (bmi < 30) {
            printf("判定: 肥満（1度）\t");
        } else if (bmi < 35) {
            printf("判定: 肥満（2度）\t");
        } else if (bmi < 40) {
            printf("判定: 肥満（3度）\t");
        } else {
            printf("判定: 肥満（4度）\t");
        }
        // 結果の表示
        printf("BMI：%.2f\t適正体重との差：%+.2f kg\n", bmi, weight_diff);

        printf("算出を続けますか（y/n）＞ ");
        scanf(" %c", &choice); // スペースを入れて改行を無視
    } while (choice == 'y');

    printf("プログラムを終了します。\n");

    return 0;
}
