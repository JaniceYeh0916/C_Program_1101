#include <stdio.h>
#include <string.h>

int main(){
    char data[100] = {0};
    char *dataPrt = data;
    scanf("%[^\n]" , data);
    //printf("%s" , dataPrt);
    int l = strlen(dataPrt);
    //printf("%d" , l);
    for(int n = (l - 1) ; n >= 0 ; n--){
        printf("%c" , dataPrt[n]);
    }
}