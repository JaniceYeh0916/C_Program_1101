#include <stdio.h>

int main (){
    int v1;
    scanf("%d" , &v1);
    while( v1 > 0 ){
        for( int star = 1 ; star <= v1 ; star++){
            printf("*");
        }
        v1--;
        printf("\n");
    }
}