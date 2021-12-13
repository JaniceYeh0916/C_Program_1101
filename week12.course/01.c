#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char *a , char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}

void prem(char *arr , int i , int n , int k){
    int j;
    if (i == n){
        for (j = 0 ; j < k ; j++){
            printf("%c", arr[j]);
        }  
        printf(" ");
    }
    else{
        for (j = i ; j <= n ; j++){
            swap(&arr[i] , &arr[j]);
            prem(arr , i + 1 , n , k);
            swap(&arr[i] , &arr[j]);
        }
    }
}

int main(){
    int i = 0;
    char num;
    char *numPrt = &num;
    char data[100];
    scanf("%s" , data);
    char *dataPrt = data;
    int l = strlen(dataPrt);

    prem(dataPrt , 0 , l - 1 , l);
    printf("\n");
}
