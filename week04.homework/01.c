#include <stdio.h>

int main(){
    int v1 , number = 1 , total = 1;
    scanf("%d" , &v1);
    while (number <= v1){
        total = total * number;
        number++;
    }
    printf("%d\n" , total);
}
