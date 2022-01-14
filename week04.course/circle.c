#include <stdio.h>
#include <stdlib.h>

int main (void){
    int v1 , v2;
    scanf("%d%d" , &v1 , &v2);
    int v3 = (v1 * v1) + (v2 * v2);
    if (v3 <= 10000){
        printf("inside\n");
    }
    else{
        printf("outside\n");
    }
}
