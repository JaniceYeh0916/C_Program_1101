#include <stdio.h>
#include <string.h>
#define SIZE 100

int main(){
    char data[SIZE];
    char a , b;
    scanf("%[^\n]" , data);
    getchar();
    scanf("%c" , &a);
    getchar();
    scanf("%c" , &b);
    getchar();
    int l = strlen(data);
    for(int n = 0 ; n < l ; n++){
        if(data[n] == a){
            data[n] = b;
        }
    }
    printf("%s\n" , data);
}