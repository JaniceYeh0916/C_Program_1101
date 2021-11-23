#include <stdio.h>

int main(){
    int v1 = 0;
    scanf("%d" , &v1);
    float k = (float)((v1 - 32) * 5) / 9;
    printf("%.3f\n" , k);
}
