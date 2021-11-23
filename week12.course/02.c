#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define SIZE 100

char fun(char c1[] , char c2[]){
    int l = strlen(c1) + strlen(c2);
    char result[l];
    memset(result, '\0', l);
    strcat(result , c1);
    strcat(result , c2);
    printf("%s " , result);
}

int main(){
    int v2;
    scanf("%d" , &v2);
    getchar();
    for(int n = 1 ; n <= v2 ; n++){
        char data[100][100];
        for(int counter = 0 ; counter < 6 ; counter++){
            data[counter][0] = '0';
        }
        int number = 0;
        while(scanf(" %s" , &data[number]) != '\n'){
            number += 1;
            if(getchar() == '\n'){
                break;
            }
        }        
        int v1 = number + 1;
        int sum = 0 , n1 = 0 , n2 = 0 , a = 0;
        int total[v1];
        for(int n = 0 ; n < v1 ; n++){
            if(data[n][2] == '\0'){
                int n1 = data[n][1]-48;
                sum = n1;
            }
            else{
                int n1 = data[n][1]-48;
                int n2 = data[n][2]-48;
                sum = n2 + (10 * n1);
            }
            
            if(data[n][0] == 'S'){
                sum += 400;
            }
            else if(data[n][0] == 'H'){
                sum += 300;
            }
            else if(data[n][0] == 'D'){
                sum += 200;
            }
            else if(data[n][0] == 'C'){
                sum += 100;
            }
            total[n] = sum;
        }
        for(int x = 0 ; x < v1 ; x++){
            for(int y = x ; y < v1 ; y++){
                if(total[y] > total[x]){
                    a = total[y];
                    total[y] = total[x];
                    total[x] = a;
                }
            }
        }
        for(int n = 0 ; n < v1 ; n++){
            if(total[n] > 400){
                int k = total[n]-400;
                char num[100];
                sprintf(num , "%d" , k);
                char ans[] = "S";
                fun(ans , num);
            }
            else if(total[n] > 300){
                int k = total[n]-300;
                char num[100];
                sprintf(num , "%d" , k);
                char ans[] = "H";
                fun(ans , num);
            }
            else if(total[n] > 200){
                int k = total[n]-200;
                char num[100];
                sprintf(num , "%d" , k);
                char ans[] = "D";
                fun(ans , num);
            }
            else if(total[n] > 100){
                int k = total[n]-100;
                char num[100];
                sprintf(num , "%d" , k);
                char ans[] = "C";
                fun(ans , num);
            }
        }
        printf("\n");
    }

}