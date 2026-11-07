// 論理演算子の結果を確認するプログラム
#include <stdio.h>
#include <stdbool.h>  // bool型を使うために必要なヘッダーファイル

int main(void)
{
    bool False = false, True = true;

    printf("[論理積の結果]\n");
    printf("%d && %d : %d\n", False, False, False && False);
    printf("%d && %d : %d\n", False, True, False && True);
    printf("%d && %d : %d\n", True, False, True && False);
    printf("%d && %d : %d\n", True, True, True && True);

    printf("\n[論理和の結果]\n");
    printf("%d || %d : %d\n", False, False, False || False);
    printf("%d || %d : %d\n", False, True, False || True);
    printf("%d || %d : %d\n", True, False, True || False);
    printf("%d || %d : %d\n", True, True, True || True);
    
    printf("\n[否定の結果]\n");
    printf("!%d : %d\n", False, !False);
    printf("!%d : %d\n", True, !True);

    return 0;
}
