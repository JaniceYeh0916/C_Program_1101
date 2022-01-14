#include <stdio.h>

int main(){
    int v1 , k , i = 7;
    scanf("%d" , &v1);
    char data[] = "00000000";
    if (v1 > 0 && v1 <= 255){
        while(v1 != 1){
            k = v1 % 2;
            if (k == 1){
                data[i] = '1';
            }
            v1 = (v1-k)/2;
            i--;
        }
        data[i] = '1';
        printf("%s\n" , data);
    }
    else if (v1 == 0){
        printf("00000000\n");
    }
    return 0;
}
