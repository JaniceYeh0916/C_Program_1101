#include <stdio.h>

int main(){
    int n = 0 , m , j = 0;
    
    scanf("%d" , &n);
    int *nPrt = NULL;
    nPrt = &n;

    int data[100];
    int *dataPrt = NULL;
    for(int l = 0 ; l < n ; l++){
        scanf("%d" , &data[l]);
    }
    dataPrt = data;

    scanf("%d" , &m);
    int *mPrt = NULL;
    mPrt = &m;
    
    for(int l = 0 ; l < *nPrt ; l++){
        if(*(dataPrt + l) == m){
            j = l + 1;
        }
    }
    if(j == 0){
        printf("%s" , "none");
    }
    else{
        printf("%d position." , j);
    }
}