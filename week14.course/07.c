//法一
#include <stdio.h>
#include <string.h>

int main(){
    int count = 0 , t = 0;
    char data[1001];
    while(scanf("%s" , &data) != EOF){
        char c[1001];
        int cn[1001];
        int n = 0 , i = 0;
        int l = strlen(data);
        c[0] = data[0];
        for(int x = 0 ; x < l ; x++){
            if(data[x] == c[i]){
                n++;
                if(x == l-1){
                    cn[i] = n;
                }
            }
            else{
                cn[i] = n;
                i++;
                c[i] = data[x];
                n = 1;
                if(x == l-1){
                    cn[i] = n;
                }
            }
        }

        int ll = strlen(c);
        for(int x = 0 ; x < ll ; x++){
            for(int y = x ; y < ll ; y++){
                if(cn[x] > cn[y]){
                    int a = cn[x];
                    cn[x] = cn[y];
                    cn[y] = a;
                    char b = c[x];
                    c[x] = c[y];
                    c[y] = b;
                }
            }
        }
        for(int x = 0 ; x < ll ; x++){
            for(int y = x ; y < ll ; y++){
                if(cn[x] == cn[y]){
                    int p = c[x];
                    int q = c[y];
                    if(q > p){
                        int a = cn[x];
                        cn[x] = cn[y];
                        cn[y] = a;
                        char b = c[x];
                        c[x] = c[y];
                        c[y] = b;                        
                    }
                }
            }
        }
        for(int x = 0 ; x < ll ; x++){
            printf("%d %d\n" , c[x] , cn[x]);
        }
        printf("\n");
    }
}

//法二
#include<stdio.h>
#include<string.h>

int min( int x, int y ){
    return ( x > y )? y : x;
}

int max( int x, int y ){
    return ( x > y )? x : y;
}

int main()
{
    char s[1005];
    int blank = 0;
    while( gets(s) )
    {
        if( blank )
            printf( "\n" );
        int ASCII[130] = {0};
        int length = strlen(s);
        int i;
        
        int min_ASCII = 200;
        int max_ASCII = 0;
        int max_count = 0;
        
        for( i = 0 ; i < length ; i++ )
        {
            ASCII[ (int)s[i] ]++;
            min_ASCII = min( min_ASCII, (int)s[i] );
            max_ASCII = max( max_ASCII, (int)s[i] );
            max_count = max( max_count, ASCII[ (int)s[i] ] );
        }
        
        int j;
        for( i = 1 ; i <= max_count ; i++ )
            for( j = max_ASCII ; j >= min_ASCII ; j-- )
                if( ASCII[j] == i )
                    printf( "%d %d\n", j , ASCII[j] );
        blank = 1;
    }
    return 0;
}