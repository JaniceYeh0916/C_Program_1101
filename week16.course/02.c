#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    char b[100];
    scanf("%[^\n]" , a);
    getchar();
    scanf("%[^\n]" , b);
    int ll = strlen(a);
    int i = 0;
    int bl = strlen(b);
    int t = 0;
    for(int n = 0 ; n < ll ; n++){
        if(t >= bl){
            t = t % bl;
        }
        int na = a[n];
        int nb = b[t];
        t++;
        unsigned int ans = na ^ nb;
        
        if(ans > 99){
            printf("%u" , ans);
        }
        else if(ans >= 0 && ans < 10){
            printf("00%u" , ans);
        }
        else{
            printf("0%u" , ans);
        }
    }
    printf("%s" , "-01");
}
