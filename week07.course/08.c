#include <stdio.h>

int fun(int x){
    if (x == 1){
        return 2;
    }
    else{
        return fun(x-1)+fun(x/2);
    }
}

int main(){
    int v1;
    scanf("%d" , &v1);
    if (v1 == 1){
        printf("%d\n" , 2);
    }
    else{
        printf("%d\n" , fun(v1));
    }
}
