#include <stdio.h>

int main(){
    char ch;
    int n = 0;
    while(scanf("%c" , &ch) != EOF){
        if(ch != '"'){
            printf("%c" , ch);
        }
        else{
            n++;
            if (n % 2 == 1){
                printf("``");
            }
            else if (n % 2 == 0){
                printf("''");
            }
        }
    }
}

//"To be or not to be," quoth the Bard, "that is the question".