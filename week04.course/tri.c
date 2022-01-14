#include <stdio.h>
#include <stdlib.h>

int main (void){
    int v1 , v2 , v3;
    scanf("%d%d%d" , &v1 , &v2 , &v3);
    if (v1 <= v2 && v2 <= v3 && v1 <= v3){
        if ((v1 + v2) > v3){
            printf("True\n");
        }
        else{
            printf("False\n");
        }
    }
    else{
        printf("False\n");
    }
}