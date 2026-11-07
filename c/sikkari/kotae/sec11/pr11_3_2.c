#include <stdio.h>

int main(void)
{
    const char *p1, *p2;
    p1 = p2 = "Hello, World!";

    printf("元の文字列：%s\n", p1);
    //ポインタを進める
	while (*p1 != '\0')  { 
		p1++;
	}

    printf("逆順の文字列：");
	//ポインタを戻しながら文字を表示する
	while (p1 > p2) {
		p1--;
		printf("%c", *p1);
	}
	printf("\n");

	return 0;
}