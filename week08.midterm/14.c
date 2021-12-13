#include <stdio.h>
#include <string.h>
#define SIZE 100

int main(){
    int v1;
    char data[SIZE];
    scanf("%[^\n]" , data);
    scanf("%d" , &v1);
    int l = strlen(data);
    if(v1 > 26){
        v1 = v1 % 26;
    }
    for(int n = 0 ; n < l ; n++){
        if(data[n] != ' '){
            int k = data[n];
            if(48 <= k && k <= 57){
                k = k + v1;
                while(k > 57){
                    k = k - 57 + 47;
                }
                data[n] = k;
            }
            else if(65 <= k && k <= 90){
                k = k + v1;
                while(k > 90){
                    k = k - 90 + 64;
                }
                data[n] = k;
            }
            else if(97 <= k && k <= 122){
                k = k + v1;
                while(k > 122){
                    k = k - 122 + 96;
                }
                data[n] = k;                
            }
        }
    }
    printf("%s\n" , data);
}