#include <stdio.h>

int main(){
    int v1;
    scanf("%d" , &v1);
    if(v1 % 2 == 0 && v1 >= 4){
        for(int n = 2 ; n <= (v1 / 2) ; n++){
            int num = 0;
            for(int x = 1 ; x <= n ; x++){
                if(n % x == 0){
                    num++;
                }
            }
            if(num == 2){
                int m = v1 - n;
                int num2 = 0;
                for(int x = 1 ; x <= m ; x++){
                    if(m % x ==0){
                        num2++;
                    }
                }
                if(num2 == 2){
                    printf("%d+%d\n" , n , m);
                }
            }
        }
    }
}
