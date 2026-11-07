// 浮動小数点型のサイズ、範囲、精度を表示するプログラム
#include <stdio.h>
#include <float.h>  // 浮動小数点型の範囲と精度に関する定数を取得するためのヘッダー

int main(void)
{
    printf("%-15s %15s %20s %20s %10s\n", 
    "Type Name", "Size (Bytes)", "Minimum Value", "Maximum Value", "Precision");

    printf("%-15s %15zu %20e %20e %10d\n", 
        "float", sizeof(float), FLT_MIN, FLT_MAX, FLT_DIG);
    printf("%-15s %15zu %20e %20e %10d\n", 
        "double", sizeof(double), DBL_MIN, DBL_MAX, DBL_DIG);
    printf("%-15s %15zu %20Le %20Le %10d\n", 
        "long double", sizeof(long double), LDBL_MIN, LDBL_MAX, LDBL_DIG);

    return 0;
}
