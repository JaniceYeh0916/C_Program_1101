#include <stdio.h>

int main(){
    char data1[100];
    char data2[100];
    char *data1Prt = NULL;
    char *data2Prt = NULL;

    scanf("%[^\n]" , data1);
    getchar();
    scanf("%[^\n]" , data2);

    data1Prt = data1;
    data2Prt = data2;

    for(int n = 1 ; n <= 2 ; n++){
        if(n == 1){
            printf("%s " , data1Prt);
        }else{
            printf("%s\n" , data2Prt);
        }
        
    }
}