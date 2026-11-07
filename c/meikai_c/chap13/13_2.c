#include <stdio.h>

int main(void) {
  FILE* fp;
  char file_name[100];

  printf("enter file name:");
  scanf("%s", file_name);
  fp = fopen(file_name, "r");

  if (fp == NULL) {
    printf("そのファイルは存在しません。\n");
  } else {
    printf("そのファイルは存在します。中身を消去します。\n");
    fclose(fp);

    fp = fopen(file_name, "w");

    if (fp != NULL) {
      printf("消去が完了しました。\n");
      fclose(fp);
    }
  }

  return 0;
}