#include <stdio.h>
#include <float.h>

int main(){
    float max , min , v1 , v2;
    scanf("%f" , &v1);
    max = min = v1;
    for(int n = 1 ; n <= 9 ; n++){
        scanf("%f" , &v2);
        if (v2 > max){
            max = v2;
        }
        else if (v2 < min){
            min = v2;
        }
    }
    printf("max: %.2f\n" , max);
    printf("min: %.2f\n" , min);
}
