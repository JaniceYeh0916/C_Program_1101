#include <stdio.h>
#include <string.h>

void fun(char arr[100] , int num , int l){
    if(num == 0){
        for(int n = num ; n < l ; n++){
            printf("%c" , arr[n]);
        }
        printf("\n");
    }
    else{
        for(int n = num ; n < l ; n++){
            printf("%c" , arr[n]);
        }
        printf("\n");
        return fun(arr , num-1 , l);
    }

}

int main(){
    char data[100];
    scanf("%[^\n]" , data);
    int l = strlen(data);
    fun(data , l-1 , l);
}