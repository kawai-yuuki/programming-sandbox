// 厳密に幅を指定した整数型のサイズと範囲を表示するプログラム
#include <stdio.h>
#include <stdint.h>  // 型定義と範囲に関する定数を取得するためのヘッダー

int main(void)
{
    printf("%-20s %15s %20s %20s\n", 
        "Type Name", "Size (Bytes)", "Minimum Value", "Maximum Value");

    // 各型のサイズ、最小値、最大値を表示
    printf("%-20s %15zu %20d %20d\n", 
        "int8_t", sizeof(int8_t), INT8_MIN, INT8_MAX);
    printf("%-20s %15zu %20u %20u\n", 
        "uint8_t", sizeof(uint8_t), 0, UINT8_MAX);
    printf("%-20s %15zu %20lld %20lld\n", 
        "int64_t", sizeof(int64_t), INT64_MIN, INT64_MAX);
    printf("%-20s %15zu %20llu %20llu\n", 
        "uint64_t", sizeof(uint64_t), 0ULL, UINT64_MAX);
    printf("%-20s %15zu %20d %20d\n", 
        "int_least16_t", sizeof(int_least16_t), INT_LEAST16_MIN, INT_LEAST16_MAX);
    printf("%-20s %15zu %20u %20u\n", 
        "uint_least16_t", sizeof(uint_least16_t), 0, UINT_LEAST16_MAX);
    printf("%-20s %15zu %20d %20d\n", 
        "int_fast32_t", sizeof(int_fast32_t), INT_FAST32_MIN, INT_FAST32_MAX);
    printf("%-20s %15zu %20u %20u\n", 
        "uint_fast32_t", sizeof(uint_fast32_t), 0, UINT_FAST32_MAX);
    printf("%-20s %15zu %20lld %20lld\n", 
        "intmax_t", sizeof(intmax_t), INTMAX_MIN, INTMAX_MAX);
    printf("%-20s %15zu %20llu %20llu\n", 
        "uintmax_t", sizeof(uintmax_t), 0ULL, UINTMAX_MAX);

    return 0;
}
