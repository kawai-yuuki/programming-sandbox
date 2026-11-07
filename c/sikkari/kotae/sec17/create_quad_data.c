// テスト用の"quadrilateral.dat"を作成するプログラム
#include <stdio.h>

// 点の座標を表す構造体
typedef struct {
    int x;
    int y;
} Point;

// 四角形の頂点を表す構造体
typedef struct {
    Point topLeft;     // 左上の頂点
    Point topRight;    // 右上の頂点
    Point bottomRight; // 右下の頂点
    Point bottomLeft;  // 左下の頂点
} Quadrilateral;

int main(void)
{
    // テスト用の四角形データを用意
    Quadrilateral quads[10] = {
        // 0: 台形（上端と下端が水平）
        { {0, 0}, {10, 0}, {8, 5}, {2, 5} },

        // 1: 非台形（向かい合う辺のペアが平行ではない）
        { {1, 1}, {4, 3}, {6, 7}, {0, 5} },
    
        // 2: 台形（長方形、上辺と下辺が水平）
        { {0, 0}, {10, 0}, {10, 5}, {0, 5} },
    
        // 3: 非台形（向かい合う辺のペアが平行ではない）
        { {2, 3}, {7, 5}, {8, 10}, {3, 9} },
    
        // 台形（上辺と下辺は平行）
        { {0, 0}, {3, 2}, {3, 7}, {0, 5} },
    
        // 5: 台形（上辺と下辺は水平だが長さが異なる）
        { {2, 2}, {7, 2}, {8, 5}, {3, 5} },
    
        // 6: 台形（左右の端が垂直）
        { {5, 5}, {10, 8}, {10, 15}, {5, 12} },
    
        // 7: 台形（上端と下端が水平）
        { {3, 0}, {8, 0}, {9, 4}, {2, 4} },
    
        // 8: 非台形（向かい合う辺のペアが平行ではない）
        { {0, 0}, {4, 1}, {5, 5}, {-1, 4} },
    
        // 9: 非台形（向かい合う辺のペアが平行ではない）
        { {0, 0}, {3, 2}, {4, 6}, {-1, 3} }  
    };

    // 書き出すファイルをバイナリ書き込みモードでオープン
    FILE *fp = fopen("quadrilateral.dat", "wb");
    if (fp == NULL) {
        printf("quadrilateral.dat を開けませんでした");
        return 1;
    }
    
    // 配列全体を書き出す
    size_t w_size = sizeof(quads)/sizeof(quads[0]);
    size_t count = fwrite(quads, sizeof(Quadrilateral), w_size, fp);
    if (count != w_size) {
        perror("書き込みに失敗しました");
        fclose(fp);
        return 1;
    }
    
    fclose(fp);
    
    printf("テスト用データ%zu件を quadrilateral.dat に書き出しました。\n", count);
    return 0;
}
