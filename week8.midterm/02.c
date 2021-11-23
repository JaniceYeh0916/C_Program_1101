#include <stdio.h>

int main(){
    unsigned long long int v1 = 0 , v2 = 0;
    scanf("%lld%lld" , &v1 , &v2);
    printf("%lld+%lld=%lld\n" , v1 , v2 , v1+v2);
    printf("%lld-%lld=%lld\n" , v1 , v2 , v1-v2);
    printf("%lld*%lld=%lld\n" , v1 , v2 , v1*v2);
    printf("%lld/%lld=%lld(%lld)\n" , v1 , v2 , v1/v2 , v1%v2);
}