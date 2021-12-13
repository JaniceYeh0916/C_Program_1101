#include <stdio.h>

void main() {
    int a1 , b1;
    scanf("%d%d" , &a1 , &b1);
    int *a1Prt = NULL;
    a1Prt = &a1;
    int *b1Prt = NULL;
    b1Prt = &b1;

    int ab1[*a1Prt][*b1Prt];
    int ab2[*a1Prt][*b1Prt];
    int ans[*a1Prt][*b1Prt];
    int *ab1Prt = NULL;
    int *ab2Prt = NULL;
    int *ansPrt = NULL;
    ab1Prt = ab1[0];
    ab2Prt = ab2[0];
    ansPrt = ans[0];

    for(int x = 0 ; x < *a1Prt ; x++){
        for(int y = 0 ; y < *b1Prt ; y++){
            scanf("%d" , &ab1[x][y]);
        }
    }
    for(int x = 0 ; x < *a1Prt ; x++){
        for(int y = 0 ; y < *b1Prt ; y++){
            scanf("%d" , &ab2[x][y]);
        }
    }

    for (int i = 0 ; i < *a1Prt ; i++) {
        for (int j = 0; j < *b1Prt ; j++) {
            *(ansPrt + (3*i+j)) = 0;
            *(ansPrt + (3*i+j)) = ab1[i][j] + ab2[i][j];
            printf("%3d\t", *(ansPrt + (3*i+j)));
        }
        printf("\n");
    }
    
}