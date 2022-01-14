#include <stdio.h>

int main(){
    unsigned long long int v1 , sum = 1;
    scanf("%lld" , &v1);
    for (int n = 1 ; v1 >= n ; n++){
        sum *= n;
    }
    printf("%lld\n" , sum);
}
