#include <stdio.h>

int main(void)
{
    char str[200];       // 置換対象の文字列
    char str_old[20];    // 置換前の文字列
    char str_new[20];    // 置換後の文字列

    // 置換後の結果を入れる配列（元の2倍くらいは確保しておく）
    char result[400];

    // 文字列の入力
    printf("3つの文字列を入力してください。ただし、空白は含めません。\n");
    printf("置換対象の文字列（最大199文字）＞ ");
    scanf("%199s", str);
    printf("置換前の文字列（最大19文字）＞ ");
    scanf("%19s", str_old);
    printf("置換後の文字列（最大19文字）＞ ");
    scanf("%19s", str_new);

    // 文字列長をカウント
    int len_str = 0;     // 置換対象の文字列
    while (str[len_str] != '\0') {
        len_str++;
    }

    int len_old = 0;     // 置換前の文字列
    while (str_old[len_old] != '\0') {
        len_old++;
    }

    int len_new = 0;     // 置換後の文字列
    while (str_new[len_new] != '\0') {
        len_new++;
    }

    // 置換処理
    int i = 0;  // 置換対象の文字列(str)の走査位置
    int j = 0;  // 結果文字列(result)への書き込み位置

    // 置換パターンが登場する可能性がある範囲までループ
    while (i < len_str - len_old + 1) {
        // str[i]から始まる部分がstr_oldと一致するか確認
        int match = 1;  // 0：不一致  1：一致  初期値は一致
        int k;
        for (k = 0; k < len_old; k++) {
            // 置換対象の文字列が終端に達した or 文字が異なるときは不一致
            if (str[i + k] == '\0' || str[i + k] != str_old[k]) {
                match = 0;  // 不一致にする
                break;
            }
        }

        if (match == 1) {
            // 一致していればstr_newをresultにコピー
            for (k = 0; k < len_new; k++) {
                result[j] = str_new[k];
                j++;
            }
            // str_old の分だけiを進める
            i += len_old;
        } else {
            // 一致していなければ1文字だけコピーして前進
            result[j] = str[i];
            j++;
            i++;
        }
    }

    // 置換できるはずもない「余り部分」はそのままコピー
    while (i < len_str) {
        result[j] = str[i];
        j++;
        i++;
    }

    result[j] = '\0';   // ナル文字を追加して文字列を終わらせる

    // 結果の表示
    printf("元の文字列       : %s\n", str);
    printf("置換前の文字列   : %s\n", str_old);
    printf("置換後の文字列   : %s\n", str_new);
    printf("置換後の結果     : %s\n", result);

    return 0;
}
