#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct name{
    char name[10];
    struct name *nextPrt;
} Name;

typedef Name *NamePrt;

void push(NamePrt *topPrt , char data[]);
void isEmpty(NamePrt topPrt);
void printStack(NamePrt currentPrt);
void instructions(void);

int main(int argc , char const *argv[]){
    NamePrt stackPrt = NULL;
    instructions();
    printf("%s" , "What is your choice? ");
    unsigned int choice;
    scanf("%u" , &choice);
    char box[10];
    while(choice != 3){
        switch(choice){
            case 1:
                printf("%s" , "Enter the name: ");
                scanf("%s" , box);
                while(strncmp(box , "0" , 1) != 0){
                    push(&stackPrt , box);
                    printf("%s\n" , "If you want to end , please enter 0.");
                    printf("%s" , "Enter the name: ");
                    scanf("%s" , box);          
                }
                break;
            case 2:
                printStack(stackPrt);
                printf("\n");
                break;
        }
        printf("\n");
        instructions();
        printf("%s" , "What is your choice? ");  
        scanf("%u" , &choice);      
    }
    puts("End of run.");
}

void instructions(){
    printf("%s\n" , "1: 輸入資料");
    printf("%s\n" , "2: 反向輸出資料");
    printf("%s\n" , "3: 結束程式");
}

void push(NamePrt *topPrt , char data[]){
    NamePrt newPrt = malloc(sizeof(Name));
    if(newPrt != NULL){
        strcpy(newPrt -> name , data);
        newPrt -> nextPrt = *topPrt;
        *topPrt = newPrt;
    }
    else{
        printf("%s not pushed. No memory available.\n" , data);
    }
}

void isEmpty(NamePrt topPrt){
    topPrt == NULL;
}

void printStack(NamePrt currentPrt){
    if(currentPrt == NULL){
        puts("The stack is empty.\n");
    }
    else{
        puts("The stack is : ");
        while(currentPrt != NULL){
            printf("%s " , currentPrt -> name);
            currentPrt = currentPrt -> nextPrt;
        }
    }
}
