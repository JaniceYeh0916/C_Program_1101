#include <stdio.h>

int main(){
    int v1;
    int data[100];
    scanf("%d" , &v1);
    if(1 <= v1 <= 100){
        for(int k = 0 ; k < v1 ; k++){
            int a = 0 , b = 0 , sum = 0;
            scanf("%d%d" , &a , &b);
            if(0 <= a && a <= 100 && 0 <= b && b <= 100 && a <= b){
                if((a % 2) == 0){
                    if((b % 2) == 0){
                        for(int x = (a + 1) ; x <= (b - 1) ;){
                            sum += x;
                            x += 2;
                        }
                        data[k] = sum;  
                    }
                    else{
                        for(int x = (a + 1) ; x <= b ;){
                            sum += x;
                            x += 2;
                        }
                        data[k] = sum;      
                    }
                    
                }
                else if((a % 2) != 0){
                    if((b % 2) == 0){
                        for(int x = a ; x <= (b - 1) ;){
                            sum += x;
                            x += 2;
                        }
                        data[k] = sum;  
                    }
                    else{
                        for(int x = a ; x <= b ;){
                            sum += x;
                            x += 2;
                        }
                        data[k] = sum;       
                    }
                            
                }
                
            }
            
        }
    }
    for(int k = 0 ; k < v1 ; k++){
        printf("%d\n" , data[k]);
    } 
}