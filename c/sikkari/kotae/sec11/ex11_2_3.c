// ポインタを更新しながら配列要素を順番に指す
#include <stdio.h>

int main(void)
{
    int array[] = {1, 2, 3, 4};  // 整数型配列
    int *p;     // 整数型ポインタを宣言
    p = array;  // 配列の先頭要素のアドレスをポインタpに代入

    for (int i = 0; i < 4; i++) {
        printf("array[%d] = %d\t%p番地\n", i, *p, p);
        p++;    // ポインタを1要素分進める 
    }

    return 0;
}
