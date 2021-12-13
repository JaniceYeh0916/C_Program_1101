#include <stdio.h>

int main(){
    char a;
    scanf("%c" , &a);
    int n = a;
    if(65 <= a && a <= 90){
        printf("%s\n" , "uppercase");
    }
    else if(97 <= a && a <= 122){
        printf("%s\n" , "lowercase");
    }
    else{
        printf("%s\n" , "special character");
    }
}