#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 80

void decrypt_caesar(const char ciphertext[]);

int main(void)
{
    // 暗号化された文字列
    char encrypted[] = "m lievh xlex csy pmoi vswiw.";
    printf("暗号文:\n%s\n", encrypted);

    // 復号を実行
    decrypt_caesar(encrypted);

    return 0;
}

// シーザー暗号を復号する関数
void decrypt_caesar(const char ciphertext[])
{
    int shift;
    char decrypted[MAX_LEN + 1]; // 暗号文の復号結果を格納する配列（80文字+終端文字用）
    const char *keywords[] = {"the", "this", "that"}; // キーワード
    int keywordCount = 3;

    // 暗号文がNULLの場合は何もしない
    if (ciphertext == NULL) {
        return;
    }

    // すべてのシフト値を試す（1～25文字シフト）
    for (shift = 1; shift <= 25; shift++) {
        int i;
        for (i = 0; ciphertext[i] != '\0' && i < MAX_LEN; i++) {
            char c = ciphertext[i];

            if (islower(c)) { // アルファベット小文字なら復号
                c = c - shift;
                if (c < 'a') { // 範囲外の場合の処理
                    c += 26;
                }
            }
            decrypted[i] = c; // 復号した文字を格納
        }
        decrypted[i] = '\0'; // 文字列の終端を設定

        // キーワードが含まれているか確認
        for (int k = 0; k < keywordCount; k++) {
            if (strstr(decrypted, keywords[k]) != NULL) {
                printf("復号成功（シフト値: %d）:\n%s\n", shift, decrypted);
                return; // 正解を見つけたら終了
            }
        }
    }

    printf("復号に失敗しました。\n");
}
