#include <stdio.h>
#define SIZE 100

int main(){
    char data[SIZE] = {0};
    int i = 0;
    scanf("%[^\n]" , data);
    getchar();
    while(0 == 0){
        if(data[i] == '\0'){
            break;
        }
        i++;
    }
    for(int k = i-1 ; k >= 0 ; k--){
        printf("%c" , data[k]);
    }
    printf("\n");
}
