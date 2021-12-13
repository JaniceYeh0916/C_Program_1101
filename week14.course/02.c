#include <stdio.h>

int main(){
    int n;
	int data[100][100];
    scanf("%d", &n);
    int now = 1 , end = n * n , sr = 0 , sc = -1 , er = n - 1 , ec = n - 1 , i , j;
    while (now <= end){
        for (j = ++sc ; j <= ec ; j++){
            data[sr][j] = now++;
		}
        for (i = ++sr ; i <= er ; i++){
            data[i][ec] = now++;
		}
        for (j = --ec ; j >= sc ; j--){
            data[er][j] = now++;
		}
        for (i = --er ; i >= sr ; i--){
            data[i][sc] = now++;
		}
    }
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){
            printf("%3d", data[i][j]);
		}
        printf("\n");
    }
}

