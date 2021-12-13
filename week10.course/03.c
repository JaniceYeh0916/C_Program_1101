#include <stdio.h>

int main(){
    int a , b , num = 0 , c = 0 , d = 0;
    scanf("%d%d" , &a , &b);
    int data[100];
    int dataone[100];
    int datatwo[100];
    for(int x = 0 ; x < a + b ; x++){
        scanf("%d" , &data[x]);
    }
    for(int x = 0 ; x < a ; x++){
        int t = 0;
        for(int y = 0 ; y < x ; y++){
            if(data[x] == data[y]){
                t++;
            }
        }
        if(t == 0){
            dataone[c] = data[x];
            c++;
        }
    }
    for(int x = a ; x < (a + b) ; x++){
        int t = 0;
        for(int y = a ; y < x ; y++){
            if(data[x] == data[y]){
                t++;
            }
        }
        if(t == 0){
            datatwo[d] = data[x];
            d++;
        }
    }
    for(int x = 0 ; x < c ; x++){
        for(int y = 0 ; y < d ; y++){
            if(dataone[x] == datatwo[y]){
                num++;
            }
        }
    }
    printf("%d\n" , num);
}
