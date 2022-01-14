#include <stdio.h>

int fun(int x){
    int c = 0;
    int j = 0;
    int f = 0;
    int y = 0;
    for(int n = 2 ; n <= x ; n++){ //判斷是否為x的因數
        if (x % n == 0){  //n是x的因數
            for(int k = 1 ; k <= n ; k++){  //判斷n是否為質數
                if(n % k == 0){
                    j += 1;
                }
            }
            if(j == 2){
                y = x / n;
                for(int g = 1 ; g <= y ; g++){  //判斷y是否為質數
                    if(y % g == 0){
                        f += 1;
                    }
                }
                if (f == 2){
                    printf("%d %d\n" , n , y); 
                }
                else{
                    printf("%s\n" , "No");
                }
            }  
        }
    }
}

int main(){
    int v1;
    scanf("%d" , &v1);
    fun(v1);
}