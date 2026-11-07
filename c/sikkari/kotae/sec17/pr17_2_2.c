#include <stdio.h>

// 点の座標を表す構造体
typedef struct {
    int x;
    int y;
} Point;

// 四角形の頂点を表す構造体
typedef struct {
    Point top_left;     // 左上の頂点
    Point top_right;    // 右上の頂点
    Point bottom_right; // 右下の頂点
    Point bottom_left;  // 左下の頂点
} Quadrilateral;

int is_trapezoid(Quadrilateral quad);

int main(void)
{
    FILE *fin = fopen("quadrilateral.dat", "rb");
    if (fin == NULL) {
        printf("読み込みファイルのオープンエラーです。\n");
        return 1;
    }
    
    FILE *fout = fopen("trapezoid.dat", "wb");
    if (fout == NULL) {
        fclose(fin);
        printf("書き込みファイルのオープンエラーです。\n");
        return 1;
    }
    
    Quadrilateral quad;
    int count = 0;  // 書き込んだ台形の数
    
    printf("台形として判定されたデータ\n");
    // ファイルからQuadrilateral構造体を1件ずつ読み込む
    while (fread(&quad, sizeof(Quadrilateral), 1, fin) == 1) {
        // 台形の判定
        if (is_trapezoid(quad)) {
            // 台形と判定された場合、trapezoid.datに書き出す
            if (fwrite(&quad, sizeof(Quadrilateral), 1, fout) != 1) {
                perror("書き込みに失敗しました");
                fclose(fin);
                fclose(fout);
                return 1;
            }
            // 保存データの表示
            printf("%d: {%d, %d}, {%d, %d}, {%d, %d}, {%d, %d}\n",
                count,
                quad.top_left.x, quad.top_left.y,
                quad.top_right.x, quad.top_right.y,
                quad.bottom_right.x, quad.bottom_right.y,
                quad.bottom_left.x, quad.bottom_left.y
            );
            count++;
        }
    }
    
    fclose(fin);
    fclose(fout);
    
    printf("%d件をファイルに保存しました。\n", count);
    return 0;
}

// 台形かどうかを判定する関数 返却値1:台形 0:台形ではない
int is_trapezoid(Quadrilateral quad)
{
    // 上辺と下辺が水平なら台形
    if ((quad.top_left.y == quad.top_right.y) &&
        (quad.bottom_left.y == quad.bottom_right.y))
        return 1;
    
    // 左辺と右辺が水平なら台形
    if ((quad.top_left.x == quad.bottom_left.x) &&
        (quad.top_right.x == quad.bottom_right.x))
        return 1;
    
    return 0;   // 当てはまなければ台形ではない
}
