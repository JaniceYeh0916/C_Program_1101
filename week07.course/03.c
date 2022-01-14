#include <stdio.h>

int fun(int x , int y){
    for(x ; x <= y ; x++){
        printf("%d-----\n" , x);
        int c = 0;
        for(int n = 1 ; n < x ; n++){
            int sum = 0;
            for(int j = n ; j < x ; j++){
                sum += j;
                if(sum == x){
                    c = c + 1;
                    for(int k = n ; k <= j ; k++){
                        printf("%d" , k);
                        if (k == j){
                            printf("\n");
                        }
                        else{
                            printf("+");
                        }
                    }
                }
            }
        }
        if(c == 0){
            printf("%s\n" , "No");
        }
    }
}

int main(){
    int v1 , v2;
    scanf("%d%d" , &v1 , &v2);
    if(v1 > v2){
        fun(v2,v1);
    }
    else{
        fun(v1,v2);
    }
}