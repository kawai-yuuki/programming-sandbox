#include <stdio.h>
#include <ctype.h>

int main(void) 
{
    FILE *sfp;
    FILE *dfp;
    char sname[FILENAME_MAX];
    char dname[FILENAME_MAX];

    printf("コピー元ファイル名: ");
    scanf("%s", sname);
    printf("コピー先ファイル名: ");
    scanf("%s", dname);

    if ((sfp = fopen(sname, "r")) == NULL) {
        printf("コピー元ファイルを開けません。\n");
    }
    else {
        if ((dfp = fopen(dname, "w")) == NULL) {
            printf("コピー先ファイルを開けません。\n");
        }
        else {
            int ch;
            while ((ch = fgetc(sfp)) != EOF) {
                ch = toupper(ch);
                fputc(ch, dfp);
            }
            fclose(dfp);
        }
        fclose(sfp);
    }
    return 0;
}