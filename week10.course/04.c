#include <stdio.h>

int main(){
    int year = 0 , month = 0 , day = 0 , leap = 0;
    scanf("%d%d" , &year , &month);
    int y = year - 1;
    int numt = y / 4;
    int numo = 0;
    numt = numt - (y / 100) + (y / 400);
    numo = y - numt;
    int week = ((numo + (2 * numt)) % 7) + 1;

    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0){
               leap++; 
            }
        }
        else{
            leap++;
        }
    }

    if(month > 1){
        week += 31;
        if(month > 2){
            week += 28;
            if(month > 3){
                week += 31;
                if(month > 4){
                    week += 30;
                    if(month > 5){
                        week += 31;
                        if(month > 6){
                            week += 30;
                            if(month > 7){
                                week += 31;
                                if(month > 8){
                                    week += 31;
                                    if(month > 9){
                                        week += 30;
                                        if(month > 10){
                                            week += 31;
                                            if(month > 11){
                                                week += 30;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    day = (week % 7);
    if(leap == 1){
        if(month > 2){
            day++;
        }
    }

    printf("%s\t%s\t%s\t%s\t%s\t%s\t%s\n" , "Su" , "MO" , "TU" , "WE" , "TH" , "FR" , "SA");
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        for(int t = 1 ; t <= day ; t++){
            printf("\t");
        }
        for(int n = 1 ; n <= 31 ; n++){
            printf("%2d\t" , n);
            day ++;            
            if(day % 7 == 0){
                printf("\n");
            }
        }
    }
    else if(month == 4 || month == 6 || month == 9 || month == 11){
        for(int t = 1 ; t <= day ; t++){
            printf("\t");
        }
        for(int n = 1 ; n <= 30 ; n++){
            printf("%2d\t" , n);
            day ++;            
            if(day % 7 == 0){
                printf("\n");
            }
        }
    }
    else if(month == 2 && leap == 0){
        for(int t = 1 ; t <= day ; t++){
            printf("\t");
        }
        for(int n = 1 ; n <= 28 ; n++){
            printf("%2d\t" , n);
            day ++;            
            if(day % 7 == 0){
                printf("\n");
            }
        }
    }
    else{
        for(int t = 1 ; t <= day ; t++){
            printf("\t");
        }
        for(int n = 1 ; n <= 29 ; n++){
            printf("%2d\t" , n);
            day ++;            
            if(day % 7 == 0){
                printf("\n");
            }
        }        
    }
    if(day % 7 != 0){
        printf("\n");
    }
}
