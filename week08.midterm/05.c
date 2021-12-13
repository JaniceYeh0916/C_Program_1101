#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    int v2 , v3;
    char data[100] = "0000000000";
    char num[100];
    scanf("%s" , num);
    scanf("%d%d" , &v2 , &v3);
    int l = 0;
    while(num[l] != '\0'){
        l += 1;
    }
    int ll = l;
    unsigned long long int sum = 0;
    for(int k = 0 ; k < l ; k++){
        int a = num[k] - '0';
        unsigned long long int number = a * pow(v2 , (ll-1));
        sum += number;
        ll--;
    }
    int n = 9;
    while(sum >= v3){
        int o = sum % v3;
        char co = o + '0';
        data[n] = co;
        sum = (sum - o) / v3;
        n--;
    }
    data[n] = sum + '0';
    printf("%s\n" , data);
}