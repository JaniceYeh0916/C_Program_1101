#include <stdio.h>
#include <string.h>

int main(){
    char data[10000];
    char a;
    char b;
    scanf("%[^\n]" , data);
    getchar();
    scanf("%c" , &a);
    getchar();
    scanf("%c" , &b);
    getchar();
    int l = strlen(data);
    for(int n = 0 ; n < l ; n++){
        if(data[n] == a){
            printf("%c" , b);
        }
        else{
            printf("%c" , data[n]);
        }
    }
}