#include <stdio.h>

int main(){
    int a1 , a2 , a3 , a4;
    int b1 , b2 , b3 , b4;
    scanf("%d.%d.%d.%d" , &a1 , &a2 , &a3 , &a4);
    getchar();
    scanf("%d.%d.%d.%d" , &b1 , &b2 , &b3 , &b4);

    printf("%d.%d.%d.%d" , a1&b1 , a2&b2 , a3&b3 , a4&b4);
}
