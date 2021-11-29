#include <stdio.h>

void main() {
    int k = 3;
    int *kPrt = &k;

    int ab1[100][100];
    int ab2[100][100];
    int ans[100][100];
    int *ab1Prt = ab1[0];
    int *ab2Prt = ab2[0];
    int *ansPrt = ans[0];

    for(int x = 0 ; x < *kPrt ; x++){
        for(int y = 0 ; y < *kPrt ; y++){
            scanf("%d" , &ab1[x][y]);
        }
    }
    for(int x = 0 ; x < *kPrt ; x++){
        for(int y = 0 ; y < *kPrt ; y++){
            scanf("%d" , &ab2[x][y]);
        }
    }
    for (int i = 0 ; i < *kPrt ; i++) {
        for (int j = 0; j < *kPrt ; j++) {
            int t = (4 * i) + j;
            *(ansPrt + t) = 0;
            for(int k = 0 ; k <= *kPrt; k++) {
                *(ansPrt + t) = *(ansPrt + t) + ab1[i][k] * ab2[k][j];
            }
            printf("%4d\t", *(ansPrt + t));
        }
        printf("\n");
    }
}
//ab1[i][k] * ab2[k][j]