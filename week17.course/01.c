#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student
{   
    unsigned int snumber;
    char id[10];
    char lastname[15];
    char firstname[10];
    int core1;
    int core2;
    int core3;
} Student;

int main()
{   
    while(1){
        int choice;
        printf("%s\n", "Funtion menu:");
        printf("%s\n", " --------------------");
        printf("%s\n", "1 - create a new file.");
        printf("%s\n", "2 - Open an existed file.");
        printf("%s\n", "3 - Insert a score data");
        printf("%s\n", "4 - Find a specific student data");
        printf("%s\n", "5 - Update a specific student data");
        printf("%s\n", "6 - Delete a specific student data");
        printf("%s\n", "7 - List all of student score data");
        printf("%s\n", "0 - Exit");
        printf("%s", "=> ");
        scanf("%d" , &choice);

        FILE *score;
        if(choice == 1){
            if((score = fopen("score1.dat" , "w")) == NULL){
                puts("File can not be opened.");
            }
            else{
                Student data = {0 , "" , "" , "" , 0 , 0 , 0};
                for(size_t i = 1 ; i <= 50 ; i++){
                    fwrite( &data , sizeof(Student) , 1 , score);
                }
                fclose(score);
            }
        }
        else if(choice == 2){
            if((score = fopen("score1.dat" , "rb+")) == NULL){
                puts("File can not be opened.");
            }
            else{
                printf("%s\n", "Funtion menu:");
                printf("%s\n", " --------------------");
                printf("%s\n", "1 - create a new file.");
                printf("%s\n", "2 - Open an existed file.");
                printf("%s\n", "3 - Insert a score data");
                printf("%s\n", "4 - Find a specific student data");
                printf("%s\n", "5 - Update a specific student data");
                printf("%s\n", "6 - Delete a specific student data");
                printf("%s\n", "7 - List all of student score data");
                printf("%s\n", "0 - Exit");
                printf("%s", "=>");
                scanf("%d" , &choice);
                
                if(choice == 3){
                    Student data = {0 , "" , "" , "" , 0 , 0 , 0};
                    printf("%s" , "Enter student number (1 to 50, 0 ot end input): ");
                    scanf("%ld" , &data.snumber);
                    while(data.snumber != 0){
                        printf("%s" , "\nEnter ID, Lastname, firstname, score1, score2, score3: ");
                        fscanf(stdin , "%9s%14s%9s%d%d%d" , &data.id , &data.lastname , &data.firstname , &data.core1 , &data.core2 , &data.core3);

                        fseek(score , (data.snumber - 1) * sizeof(Student) , SEEK_SET);
                        fwrite(&data , sizeof(Student) , 1 , score);

                        printf("%s" , "\nEnter student number: ");
                        scanf("%d" , &data.snumber);
                    }
                    fclose(score);
                }
                else if(choice == 4){
                    Student data = {0 , "" , "" , "" , 0 , 0 , 0};
                    char idid[2][10];
                    int num = 0;
                    printf("%s", "Student's ID: ");
                    getchar();
                    scanf("%s", &idid[0]);
                    for (int n = 0; n < 51; n++){
                        char str1[10];
                        for(int x = 0 ; x < 9 ; x++){
                            str1[x] = idid[0][x];
                        }
                        
                        char str2[10];
                        strcpy(str2, data[n].id);
                        int e = strcmp(str1, str2);
                        if (e == 0)
                        {
                            printf("%-8ld%-16s%-8s%-8s%-8f%-8f%-8f\n", *(data.snumber + n) , data[n].id , data[n].lastname , data[n].firstname , data[n].core1, data[n].core2, data[n].core3);
                            num++;
                        }
                    }
                    if (num == 0)
                    {
                        printf("There has no student ID %s in the file.", idid[0]);
                    }
                    fclose(score);
                }
                else if(choice == 5){
                    Student data = {0 , "" , "" , "" , 0 , 0 , 0};
                    char idid[2][10];
                    int num = 0;
                    printf("%s", "Student's ID: ");
                    getchar();
                    scanf("%s", &idid[0]);

                    for (int n = 0; n < 51; n++){
                        char str1[10];
                        for(int x = 0 ; x < 9 ; x++){
                            str1[x] = idid[0][x];
                        }
                        
                        char str2[10];
                        strcpy(str2, data[n].id);
                        int e = strcmp(str1, str2);
                        if (e == 0)
                        {
                            printf("%-8d%-16s%-8s%-8s%-8f%-8f%-8f\n", data[n].snumber , data[n].id , data[n].lastname , data[n].firstname , data[n].core1, data[n].core2, data[n].core3);
                            num++;

                            printf("%s" , "\nEnter NEW ID, Lastname, firstname, score1, score2, score3: ");
                            fscanf(stdin , "%9s%14s%9s%d%d%d" , data.id , data.lastname , data.firstname , data.core1 , data.core2 , data.core3);

                            fseek(score , (data.snumber - 1) * sizeof(Student) , SEEK_SET);
                            fwrite(&data , sizeof(Student) , 1 , score);
                        }
                    }
                    if (num == 0)
                    {
                        printf("There has no student ID %s in the file.", idid[0]);
                    }
                    fclose(score);
                }
                else if(choice == 6){
                    Student data = {0 , "" , "" , "" , 0 , 0 , 0};
                    char idid[2][10];
                    int num = 0;
                    printf("%s", "Student's ID: ");
                    getchar();
                    scanf("%s", &idid[0]);

                    for (int n = 0; n < 51; n++){
                        char str1[10];
                        for(int x = 0 ; x < 9 ; x++){
                            str1[x] = idid[0][x];
                        }
                        
                        char str2[10];
                        strcpy(str2, data[n].id);
                        int e = strcmp(str1, str2);
                        if (e == 0)
                        {
                            printf("%-8d%-16s%-8s%-8s%-8d%-8d%-8d\n", data[n].snumber , data[n].id , data[n].lastname , data[n].firstname , data[n].core1, data[n].core2, data[n].core3);
                            num++;
                            
                            printf("%s" , "Are you sure want to delete data? (Y/n) ");
                            char yn;
                            scanf("%c" , &yn);
                            if(yn == 'Y'){
                                remove(data[n].snumber);
                                remove(data[n].id);
                                remove(data[n].lastname);
                                remove(data[n].firstname);
                                remove(data[n].core1);
                                remove(data[n].core2);
                                remove(data[n].core3);
                            }
                        }
                    }
                    if (num == 0)
                    {
                        printf("There has no student ID %s in the file.", idid[0]);
                    }
                    fclose(score);
                }
                else if(choice == 7){
                    Student data = {0 , "" , "" , "" , 0 , 0 , 0};
                    while(! feof(score)){
                        Student data = {0 , "" , "" , "" , 0 , 0 , 0};
                        int result = fread( &data , sizeof(Student) , 1 , score);
                        if(result != 0 && data.snumber != 0){
                            printf("%-8d%-16s%-8s%-8s%-8d%-8d%-8d\n", data.snumber , data.id , data.lastname , data.firstname , data.core1, data.core2, data.core3);
                        }
                    }
                    fclose(score);
                }
                
                else if(choice == 0){
                    exit(EXIT_FAILURE);
                }
                else{
                    printf("%s\n", "Error");
                }                       
            }
        }
    }
}
