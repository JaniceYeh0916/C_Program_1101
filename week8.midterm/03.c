#include <stdio.h>

int main(){
    int v1;
    scanf("%d" , &v1);
    if(1 <= v1 && v1 <= 7){
        switch(v1){
            case 1:
                printf("%s\n" , "Monday");
                break;
            case 2:
                printf("%s\n" , "Tuesday");
                break;
            case 3:
                printf("%s\n" , "Wednesday");
                break;
            case 4:
                printf("%s\n" , "Thursday");
                break;
            case 5:
                printf("%s\n" , "Friday");
                break;
            case 6:
                printf("%s\n" , "Saturday");
                break;
            case 7:
                printf("%s\n" , "Sunday");
                break;
        }
    }
    else{
        printf("%s\n" , "Error");
    }
}