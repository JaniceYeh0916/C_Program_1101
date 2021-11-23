#include <stdio.h>

void fun(float *const arr , int x);
void fun(float *const arr , int x){
    void swap(float * ele1 , float * ele2);
    int a , b;
    for(a = 0 ; a < x-1 ; a++){
        for(b = 0 ; b < x-1 ; b++){
            if(arr[b] > arr[b+1]){
                swap(&arr[b] , &arr[b+1]);
            }
        }
    }
}

void swap(float * ele1 , float * ele2){
    float h = *ele1;
    *ele1 = *ele2;
    *ele2 = h;
}

int main(){
    int n;
    float data[100];
    scanf("%d" , &n);
    for(int k = 0 ; k < n ; k++){
        scanf("%f" , &data[k]);
    }
    fun(data , n);
    for(int k = 0 ; k < n ; k++){
        printf("%g " , data[k]);
    }
}
