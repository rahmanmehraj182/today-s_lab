#include <stdio.h>

int main () {
    int n ,x;
    scanf("%d", &n);


     if(n %2 == 0){
        x = n/2;
    }
    else{
        x = n/2 + 1;
    }
    for(int i = 0 ; i<n; i++){
        if( i == 0 || i == n-1 || i == x - 1){
            for(int j = 0; j< n; j++ ){
                printf("*");
            }
        }
        else{
            for(int j = 0; j< n; j++ ){
                if( j == 0 || j == n - 1  ){
                    printf("*");

                }
                else{
                    printf(" ");
                }
            }
        }
        printf("\n");

    }


    return 0;
}
