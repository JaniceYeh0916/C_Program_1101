#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student
{
    char id[10];
    char name[4];
    int math;
    int computer;
    int english;
} Student;

int main()
{
    int number;
    Student data[100];
    scanf("%d", &number);
    for (int n = 0; n < number; n++)
    {
        scanf("%s", &data[n].id);
        scanf("%s", &data[n].name);
        scanf("%d", &data[n].math);
        scanf("%d", &data[n].computer);
        scanf("%d", &data[n].english);
    }
    printf("%s\n", "===== Menu =====");
    printf("%s\n", "f: find specific student data");
    printf("%s\n", "s: show all students' data");
    printf("%s\n", "d: show the sorted students' data (hight to low)");
    printf("%s\n", "a: show the sorted students' data (low to high)");
    printf("%s\n", "b: show the average score value");
    printf("%s\n", "q: quit");
    int g = 1;

    while (1)
    {
        printf("%s", "function choice: ");
        getchar();
        char choice[2];
        scanf("%s", choice);
        int check = 1;
        if (1 == 1)
        {
            check = strcmp(choice, "f");
            if (check != 0)
            {
                check = strcmp(choice, "s");
                if (check != 0)
                {
                    check = strcmp(choice, "d");
                    if (check != 0)
                    {
                        check = strcmp(choice, "a");
                        if (check != 0)
                        {
                            check = strcmp(choice, "b");
                            if (check != 0)
                            {
                                check = strcmp(choice, "q");
                            }
                        }
                    }
                }
            }
        }
        g++;
        if (check == 0)
        {
            char idid[2][10];
            int num = 0;
            if (strcmp(choice, "f") == 0)
            {
                printf("%s", "Student's ID: ");
                getchar();
                scanf("%s", &idid[0]);
                for (int n = 0; n < number; n++)
                {
                    char str1[10];
                    for(int x = 0 ; x < 9 ; x++){
                        str1[x] = idid[0][x];
                    }
                    
                    char str2[10];
                    strcpy(str2, data[n].id);
                    int e = strcmp(str1, str2);
                    if (e == 0)
                    {
                        printf("%-16s%-8s%-8d%-8d%-8d\n", data[n].id, data[n].name, data[n].math, data[n].computer, data[n].english);
                        printf("%s\n", "----------");
                        num++;
                    }
                }
                if (num == 0)
                {
                    printf("%s\n", "No such student");
                    printf("%s\n", "----------");
                }
            }
            else if (strcmp(choice, "s") == 0)
            {
                for (int n = 0; n < number; n++)
                {
                    printf("%-16s%-8s%-8d%-8d%-8d\n", data[n].id, data[n].name, data[n].math, data[n].computer, data[n].english);
                }
                printf("%s\n", "----------");
            }
            else if (strcmp(choice, "d") == 0)
            {
                float average[number + 1][2];
                for (int n = 0; n < number; n++)
                {
                    average[n][1] = n;
                    average[n][0] = (data[n].math + data[n].computer + data[n].english) / 3;
                }
                for (int x = 0; x < number; x++)
                {
                    for (int y = x; y < number; y++)
                    {
                        if (average[x][0] < average[y][0])
                        {
                            float a = average[x][0];
                            average[x][0] = average[y][0];
                            average[y][0] = a;
                            float b = average[x][1];
                            average[x][1] = average[y][1];
                            average[y][1] = b;
                        }
                    }
                }
                for (int n = 0; n < number; n++)
                {
                    int c = (int)average[n][1];
                    printf("%-16s%-8s%-8d%-8d%-8d\n", data[c].id, data[c].name, data[c].math, data[c].computer, data[c].english);
                }
                printf("%s\n", "----------");
            }
            else if (strcmp(choice, "a") == 0)
            {
                float average[number + 1][2];
                for (int n = 0; n < number; n++)
                {
                    average[n][1] = n;
                    average[n][0] = (data[n].math + data[n].computer + data[n].english) / 3;
                }
                for (int x = 0; x < number; x++)
                {
                    for (int y = x; y < number; y++)
                    {
                        if (average[x][0] > average[y][0])
                        {
                            float a = average[x][0];
                            average[x][0] = average[y][0];
                            average[y][0] = a;
                            float b = average[x][1];
                            average[x][1] = average[y][1];
                            average[y][1] = b;
                        }
                    }
                }
                for (int n = 0; n < number; n++)
                {
                    int c = (int)average[n][1];
                    printf("%-16s%-8s%-8d%-8d%-8d\n", data[c].id, data[c].name, data[c].math, data[c].computer, data[c].english);
                }
                printf("%s\n", "----------");
            }
            else if (strcmp(choice, "b") == 0)
            {
                float average[number + 1][2];
                for (int n = 0; n < number; n++)
                {
                    average[n][1] = n;
                    average[n][0] = (data[n].math + data[n].computer + data[n].english) / 3;
                }
                for (int x = 0; x < number; x++)
                {
                    for (int y = x; y < number; y++)
                    {
                        if (average[x][0] < average[y][0])
                        {
                            float a = average[x][0];
                            average[x][0] = average[y][0];
                            average[y][0] = a;
                            float b = average[x][1];
                            average[x][1] = average[y][1];
                            average[y][1] = b;
                        }
                    }
                }
                for (int n = 0; n < number; n++)
                {
                    int c = (int)average[n][1];
                    float d = average[n][0];
                    printf("%-16s%-8s%-.2f\n", data[c].id, data[c].name, d);
                }
                printf("%s\n", "----------");
            }
            else if (strcmp(choice, "q") == 0)
            {
                exit(EXIT_FAILURE);
            }
        }
        else
        {
            printf("%s\n", "Error");
        }
    }
}
