#include <stdio.h>
#include <stdlib.h>

int main (void){
    int v1;
    scanf("%d" , &v1);
    if (v1 >= 90){
        printf("A\n");
    }
    else if (v1 >= 80){
        printf("B\n");
    }
    else if (v1 >= 70){
        printf("C\n");
    }
    else if (v1 >= 60){
        printf("D\n");
    }
    else{
        printf("F\n");
    }
}