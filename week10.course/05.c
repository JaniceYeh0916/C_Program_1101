#include <stdio.h>

void main() {
    int a1 , b1 , a2 , b2;
    int ab1[100][100];
    int ab2[100][100];
    int ans[100][100];
    scanf("%d%d%d%d" , &a1 , &b1 , &a2 , &b2);
    for(int x = 0 ; x < a1 ; x++){
        for(int y = 0 ; y < b1 ; y++){
            scanf("%d" , &ab1[x][y]);
        }
    }
    for(int x = 0 ; x < a2 ; x++){
        for(int y = 0 ; y < b2 ; y++){
            scanf("%d" , &ab2[x][y]);
        }
    }

    for (int i = 0 ; i < a1 ; i++) {
        for (int j = 0; j < b2 ; j++) {
            ans[i][j] = 0;
            for(int k = 0 ; k <= b1; k++) {
                ans[i][j] = ans[i][j] + ab1[i][k] * ab2[k][j];
            }
            printf("%4d\t", ans[i][j]);
        }
        printf("\n");
    }
}