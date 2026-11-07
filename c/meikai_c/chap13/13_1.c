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
    printf("そのファイルは存在します。\n");
    fclose(fp);
  }
  return 0;
}