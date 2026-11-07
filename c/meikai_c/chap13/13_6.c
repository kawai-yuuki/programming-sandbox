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
        int counter = 0;
        int prev_ch = '\n';

        while ((ch = getc(fp)) != EOF) {
            if (ch == '\n') {
                counter++;
            }
            prev_ch = ch;
        }
        if (prev_ch != '\n') {
            counter++;
        }

        printf("ファイルの行数は%d行です。\n", counter);

        fclose(fp);
    }
    return 0;
}