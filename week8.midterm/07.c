#include <stdio.h>

int main(){
    int v1;
    char a1;
    scanf("%d" , &v1);
    getchar();
    scanf("%c" , &a1);
    getchar();
    for(int n = v1 ; n > 0 ; n--){
        for(int x = n ; x <= v1 ; x++){
            printf("%c" , a1);
        }
        printf("\n");
    }
    for(int n = 1 ; n <= v1 ; n++){
        for(int x = n ; x <= v1 ; x++){
            printf("%c" , a1);
        }
        printf("\n");
    }
}