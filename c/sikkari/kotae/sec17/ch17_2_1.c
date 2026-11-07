// ファイルダンププログラム
#include <stdio.h>
#include <ctype.h>

#define BYTES_PER_LINE 16   // 16桁ずつ表示する

int main(int argc, char *argv[])
{
    // コマンドラインの引数チェック
    if (argc != 2) {
        printf("使い方: %s <ファイル名>\n", argv[0]);
        return 1;
    }

    // 指定されたファイルをバイナリモードで開く
    FILE *fp = fopen(argv[1], "rb");
    if (fp == NULL) {
        printf("\"%s\"のオープンエラーです。", argv[1]);
        return 1;
    }

    unsigned char buffer[BYTES_PER_LINE];
    unsigned read_bytes;
    unsigned offset = 0;

    while ((read_bytes = fread(buffer, 1, BYTES_PER_LINE, fp)) > 0) {
        // オフセットの表示（8桁の16進数）
        printf("%08x:  ", offset);

        // 16進数での出力
        for (unsigned i = 0; i < BYTES_PER_LINE; i++) {
            if (i < read_bytes) {
                printf("%02x ", buffer[i]);
            } else {
                // バッファの残りは空白で埋める
                printf("   ");
            }
        }

        // ASCII表現の出力
        printf(" |");
        for (unsigned i = 0; i < read_bytes; i++) {
            // isprintで印字可能かチェック
            if (isprint(buffer[i])) {
                printf("%c", buffer[i]);
            } else {
                printf(".");
            }
        }
        printf("|\n");

        offset += read_bytes;
    }

    fclose(fp);
    return 1;
}
