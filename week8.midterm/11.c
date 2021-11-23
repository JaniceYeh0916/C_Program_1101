#include <stdio.h>
#include <string.h>
#define SIZE 100

int main(){
    char data[SIZE];
    char new[SIZE];
    scanf("%[^\n]" , data);
    int n = 0 , k = 0;
    while(data[n] != '\0'){
        if(data[n] != ' '){
            new[k] = data[n];
            k += 1;
        }
        n += 1;
    }
    
    int l = strlen(new);
    for(int x = 0 ; x < l ; x++){
        for(int y = x ; y < l ; y++){
            if(new[x] > new[y]){
                char a = new[y];
                new[y] = new[x];
                new[x] = a;
            }
        }
    }
    printf("%s\n" , new);
}