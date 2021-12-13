#include <stdio.h>
#include <string.h>

int main(){
    char data[10000];
    char box[2];
    scanf("%s" , data);
    scanf("%s" , box);
    int l = strlen(data);
    for(int n = 0 ; n < l ; n++){
        if(data[n] == box[0]){
            if(n != 0){
                printf("\n");
            }
        }
        else{
            printf("%c" , data[n]);
        }
    }
}