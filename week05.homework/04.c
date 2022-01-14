#include <stdio.h>

int main(){
    int v1 , original;
    scanf("%d" , &v1);
    original = v1;
    while(v1 > 0){
        for(int space = (v1 - 1) ; space >= 1 ; space--){
            printf(" ");
        }
        for(int star = 1 ; star <= (2*original - 2*v1 + 1)  ; star++){
            printf("*");
        }
        v1--;
        printf("\n");
    }
}