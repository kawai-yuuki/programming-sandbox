#include <stdio.h>

int main(void) 
{
    FILE *fp;
    char fname[FILENAME_MAX];

    printf("enter file name:");
    scanf("%s", fname);

    if ((fp = fopen(fname, "r")) == NULL) {
        printf("the file does not exist.\n");
    } else {
        int ch;
        int number_counter = 0;

        while ((ch = getc(fp)) != EOF) {
            if (ch >= '0' && ch <= '9') {
                number_counter++;
            }
        }

        printf("ファイル中の数字文字は%d個です。\n", number_counter);

        fclose(fp);
    }
    return 0;
}