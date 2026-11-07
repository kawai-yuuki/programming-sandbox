// 整数型のサイズと範囲を表示するプログラム
#include <stdio.h>
#include <limits.h>   // 整数型の範囲に関する定数を取得するためのヘッダー
#include <stdbool.h>  // bool型を使用するためのヘッダー

int main(void) 
{
    printf("%-25s%15s %20s %20s\n", 
        "Type Name", "Size (Bytes)", "Minimum Value", "Maximum Value");

    // 各整数型のサイズと範囲を表示
    printf("%-25s %15zu %20d %20d\n", 
        "char", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("%-25s %15zu %20d %20d\n", 
        "signed char", sizeof(signed char), SCHAR_MIN, SCHAR_MAX);
    printf("%-25s %15zu %20u %20u\n", 
        "unsigned char", sizeof(unsigned char), 0, UCHAR_MAX);

    printf("%-25s %15zu %20hd %20hd\n", 
        "short", sizeof(short), SHRT_MIN, SHRT_MAX);
    printf("%-25s %15zu %20hu %20hu\n", 
        "unsigned short", sizeof(unsigned short), 0, USHRT_MAX);

    printf("%-25s %15zu %20d %20d\n", 
        "int", sizeof(int), INT_MIN, INT_MAX);
    printf("%-25s %15zu %20u %20u\n", 
        "unsigned", sizeof(unsigned), 0, UINT_MAX);

    printf("%-25s %15zu %20ld %20ld\n", 
        "long", sizeof(long), LONG_MIN, LONG_MAX);
    printf("%-25s %15zu %20lu %20lu\n", 
        "unsigned long", sizeof(unsigned long), 0UL, ULONG_MAX);

    printf("%-25s %15zu %20lld %20lld\n", 
        "long long", sizeof(long long), LLONG_MIN, LLONG_MAX);
    printf("%-25s %15zu %20llu %20llu\n", 
        "unsigned long long", sizeof(unsigned long long), 0ULL, ULLONG_MAX);

    printf("%-25s %15zu %20d %20d\n", 
        "bool", sizeof(bool), false, true);    // falseは0、trueは1

    return 0;
}
