#include <stdio.h>

int main(void)
{
    int kwh;            // 使用電力量
    double total_fee;   // 総料金
    const double base_fee = 1000.0; // 基本料金
    const double tier1_rate = 15.0; // 第1段階料金（円/kWh）
    const double tier2_rate = 20.0; // 第2段階料金（円/kWh）
    const double tier3_rate = 25.0; // 第3段階料金（円/kWh）

    printf("使用電力量を入力してください（0以上1000以下の整数）＞ ");
    scanf("%d", &kwh);

    if (kwh < 0 || kwh > 1000) {
        printf("エラー: 使用電力量は0以上1000以下の整数で指定してください。\n");
    }
    else {
        // 電力量料金の計算
        if (kwh <= 120) {
            total_fee = base_fee + kwh * tier1_rate;
        } else if (kwh <= 300) {
            total_fee = base_fee + 120 * tier1_rate + (kwh - 120) * tier2_rate;
        } else {
            total_fee = base_fee + 120 * tier1_rate + (300 - 120) * tier2_rate + (kwh - 300) * tier3_rate;
        }
        printf("電気料金は%.0f円です。\n", total_fee);
    }

    return 0;
}
