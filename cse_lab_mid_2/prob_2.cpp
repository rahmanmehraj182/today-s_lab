#include <stdio.h>

int main (){
    int n;
    scanf("%d", &n);
    int num = 1;
    for ( int i = 1; i <= n; i++ ){
        if(i % 2 == 1 && i > 2){
            num--;
        }
        for ( int j= 0 ; j < i; j++ ){
            printf("%d " , num );
            num++;
        }
        printf("\n");

    }


    return 0;
}
