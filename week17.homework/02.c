#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct treeNode{
    struct treeNode *leftNodePrt;
    int id;
    //unsigned int id;
    char name[10];
    int score1;
    int score2;
    int score3;
    struct treeNode *rightNodePrt;
} TreeNode;

typedef TreeNode *TreeNodePrt;

void insertNode(TreeNodePrt *treePrt , int n1 , char n2[] , int n3 , int n4 , int n5);
void inOrder(TreeNodePrt treePtr);

void intro(){
    printf("\n%s\n" , "1: Add a data.");
    printf("%s\n" , "2: Find a specific student data.");
    printf("%s\n" , "3: List all of student score data. (High -> Low)");
    printf("%s\n" , "4: End of run.");
    printf("%s\n" , "What is your choice? ");
}

int main(int argc , char const *argv[]){
    TreeNodePrt rootPrt = NULL;
    srand(time(NULL));
    intro();
    int choice , i = 0;
    scanf("%d" , &choice);
    while(choice != 4){
        switch(choice){
            case 1:
                int t = 0 , a3 , a4 , a5;
                int a1;
                char a2[10];
                while(t == 0){
                    printf("%s\n" , "If the input is over, please input D0000000.");
                    printf("%s\n" , "Enter ID, name, Calculus score, Program score, English score:");
                    getchar();
                    scanf("D%d" , &a1);
                    if(a1 == 0){
                        t++;
                    }
                    else{
                        scanf(" %s%d%d%d" , a2 , &a3 , &a4 , &a5);
                        insertNode(&rootPrt , a1 , a2 , a3 , a4 , a5);
                        i++;                  
                    }
                }
                intro(); 
                break;
            case 2:
                int h = 0;
                int search;
                char *str1;
                char *str2;
                printf("%s", "Student's ID: ");
                getchar();
                scanf("D%d" , &search);
                sprintf(str1 , "%d" , search);
                for(int n = 0 ; n < i ; n++){
                    //int search1 = rootPrt[n].id;
                    sprintf(str2 , "%d" , rootPrt[n].id);
                    printf("test %s %s\n", str1 , str2);
                    if(strcmp(str1 , str2) == 0){
                        printf("D%-9d%-9s%-4d%-4d%-4d\n" , rootPrt[n].id , rootPrt[n].name , rootPrt[n].score1 , rootPrt[n].score2 , rootPrt[n].score3);
                        h++;
                    }
                }
                if(h == 0){
                    printf("%s\n" , "No data");
                }
                intro();
                break;
            case 3:
                inOrder(rootPrt);
                intro();
                break;
        }
        scanf("%d" , &choice);
    }
    puts("End of run.");
}

void insertNode(TreeNodePrt *treePrt , int n1 , char n2[] , int n3 , int n4 , int n5){
    if (*treePrt == NULL){
        *treePrt = malloc(sizeof(TreeNode));
        if(*treePrt != NULL){
            (*treePrt) -> id = n1;
            strcpy((*treePrt) -> name, n2);
            (*treePrt) -> score1 = n3;
            (*treePrt) -> score2 = n4;
            (*treePrt) -> score3 = n5;
            (*treePrt) -> leftNodePrt = NULL;
            (*treePrt) -> rightNodePrt = NULL;
        }
        else{
            printf("%u not inserted. No memory available.\n" , n1);
        }
    }
    else{
        if(n1 < (*treePrt) -> id){
            insertNode(&((*treePrt) -> leftNodePrt) , n1 , n2 , n3 , n4 , n5);
        }
        else if(n1 > (*treePrt) -> id){
            insertNode(&((*treePrt) -> rightNodePrt) , n1 , n2 , n3 , n4 , n5);
        }
    }
}


void inOrder(TreeNodePrt treePrt){
    if(treePrt != NULL){
        inOrder(treePrt -> leftNodePrt);
        printf("D%-9d%-9s%-4d%-4d%-4d\n" , treePrt -> id , treePrt -> name , treePrt -> score1 , treePrt -> score2 , treePrt -> score3);
        inOrder(treePrt -> rightNodePrt);
    }
}
