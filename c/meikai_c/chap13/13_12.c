#include <stdio.h>
#include <time.h>

char data_file[] = "datetime.dat";

void get_data(void) {
  FILE* fp;

  if ((fp = fopen(data_file, "rb")) == NULL) {
    printf("本プログラムを実行するのは初めてですね。\n");
  } else {

    struct tm timer;
    fread(&timer, sizeof(struct tm), 1, fp);
    printf("前回は%d年%d月%d日%d時%d分%d秒でした。\n", timer.tm_year + 1900,
           timer.tm_mon + 1, timer.tm_mday, timer.tm_hour, timer.tm_min,
           timer.tm_sec);

    fclose(fp);
  }
}

void put_data(void) {
  FILE* fp;

  if ((fp = fopen(data_file, "wb")) == NULL) {
    printf("ファイルを開けません。\n");
  } else {
    time_t current = time(NULL);
    struct tm* timer = localtime(&current);

    fwrite(timer, sizeof(struct tm), 1, fp);
    fclose(fp);
  }
}

int main(void) {
  get_data();

  put_data();

  return 0;
}