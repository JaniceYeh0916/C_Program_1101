#include <stdio.h>
#include <stdlib.h>

int main (void){
    int v1;
    scanf("%d" , &v1);
    if (v1 % 4 == 0){
        if (v1 % 400 == 0){
            printf("閏年\n");
        }
        else if (v1 % 100 != 0){
            printf("閏年\n");
        }
        else{
            printf("平年\n");
            if ((v1 % 4) == 1){
                int v2 = (v1 / 4) * 4;
                if (v2 % 100 == 0){
                    if (v2 % 200 == 0 && (v2 / 400) > 1){
                        printf("離%d最近的閏年是 %d 年\n" , v1 , v2);
                    }
                    else{
                        printf("離%d最近的閏年是 %d 年\n" , v1 , (v2+4));
                    }
                }
                else{
                    printf("離%d最近的閏年是 %d 年\n" , v1 , v2);
                }
            }
            else if ((v1 % 4) == 3){
                int v3 = ((v1 / 4) + 1) * 4;
                if (v3 % 100 == 0){
                    if (v3 % 200 == 0 && (v3 / 400) > 1){
                        printf("離%d最近的閏年是 %d 年\n" , v1 , v3);
                    }
                    else{
                        printf("離%d最近的閏年是 %d 年\n" , v1 , (v3-4));
                    }
                }
                else{
                    printf("離%d最近的閏年是 %d 年\n" , v1 , v3);
                }
            }
            else{
                int v4 = (v1 / 4) * 4;              
                int v5 = ((v1 / 4) + 1) * 4;              
                printf("離%d最近的閏年是 %d 年 %d 年\n" , v1 , v5 , v4);
            }
        }
        
    }
    else{
        printf("平年\n");
        if ((v1 % 4) == 1){
            int v2 = (v1 / 4) * 4;
            if (v2 % 100 == 0){
                if (v2 % 200 == 0 && (v2 / 400) > 1){
                    printf("離%d最近的閏年是 %d 年\n" , v1 , v2);
                }
                else{
                    printf("離%d最近的閏年是 %d 年\n" , v1 , (v2+4));
                }
            }
            else{
                printf("離%d最近的閏年是 %d 年\n" , v1 , v2);
            }
        }
        else if ((v1 % 4) == 3){
            int v3 = ((v1 / 4) + 1) * 4;
            if (v3 % 100 == 0){
                if (v3 % 200 == 0 && (v3 / 400) > 1){
                    printf("離%d最近的閏年是 %d 年\n" , v1 , v3);
                }
                else{
                    printf("離%d最近的閏年是 %d 年\n" , v1 , (v3-4));
                }
            }
            else{
                printf("離%d最近的閏年是 %d 年\n" , v1 , v3);
            }
        }
        else{
            int v4 = (v1 / 4) * 4;
            int v5 = ((v1 / 4) + 1) * 4;
            printf("離%d最近的閏年是 %d 年 %d 年\n" , v1 , v5 , v4);
        }
    }
}