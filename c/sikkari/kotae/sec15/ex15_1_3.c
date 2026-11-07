// 構造体の型のスコープを確認するプログラム
#include <stdio.h>

// ファイルスコープでの構造体の型宣言
struct file_scope {
    int a;
};

void func(void);

int main(void)
{
    // ブロックスコープでの構造体の型宣言
    struct block_scope {
        int b;
    };

    struct file_scope fil;          // ファイルスコープで定義された構造体の型
    fil.a = 10;                     // はどこでも利用可能
    printf("fil.a = %d\n", fil.a);  //

    struct block_scope blk;         // ブロック内ではblock_scope型が有効
    blk.b = 20;                     //
    printf("blk.b = %d\n", blk.b);  //

    func();

    return 0;
}

void func(void)
{
    struct file_scope fil2;         // ファイルスコープで定義された構造体の型
    fil2.a = 30;                    // はどこでも利用可能
    printf("fil2.a = %d\n", fil2.a);//

    /* コメントを外すとエラー
    struct block_scope blk2;		// block_scope型はブロックの外では認識されない
    blk2.b = 20;
    printf("blk2.b = %d\n", blk2.b);*/
}
