#include <stdio.h>

int main(){
    int v1;
    double k = 0 , sum = 0;
    scanf("%d" , &v1);
    for (int n = 1 ; n <= v1 ; n++){
        k = (double) 1/(((2*n)-1)*(2*n));
        sum = sum + k;
    }
    printf("%.16f\n" , sum);
}