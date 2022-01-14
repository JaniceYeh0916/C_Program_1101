#include <stdio.h>
#include <stdlib.h>

int main (void){
    int v1;
    printf("年齡:\n");
    scanf("%d" , &v1);
    if (v1 <= 30){
        printf("長相 (0: 醜, 1: 帥, 2: 中等):\n");
        scanf("%d" , &v1);
        if (v1 > 0){
            printf("收入 (0: 低, 1: 中, 2: 高):\n");
            scanf("%d" , &v1);
            if (v1 == 2){
                printf("見\n");
            }
            else if (v1 == 1){
                printf("是否為公務員 (0: 否, 1: 是):\n");
                scanf("%d" , &v1);
                if (v1 == 1){
                    printf("見\n");
                }
                else{
                    printf("不見\n");
                }
            }
            else{
                printf("不見\n");
            }
        }
        else{
            printf("不見\n");
        }
    }
    else{
        printf("不見\n");
    }
}