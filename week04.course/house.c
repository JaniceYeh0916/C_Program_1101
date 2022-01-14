#include <stdio.h>
#include <stdlib.h>

int main (void){
    int input = 0;
    printf("是否有房產?(0: No, 1: Yes)\n");
    scanf("%d" , &input);
    if (input == 0){
        printf("是否已婚?(0: No, 1: Yes)\n");
        scanf("%d" , &input);
        if (input == 0){
            printf("是否年收入 > 100萬?(0: No, 1: Yes)\n");
            scanf("%d" , &input);
            if (input == 0){
                printf("不能貸款\n");
            }
            else{
                printf("可以貸款\n");
            }
        }
        else{
            printf("可以貸款\n");
        }
    }
    else{
        printf("可以貸款\n");
    }

}