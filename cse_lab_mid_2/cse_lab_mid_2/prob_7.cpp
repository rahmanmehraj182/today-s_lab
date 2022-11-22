#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        if( i == 0 || i == n-1 ){
            for(int j = 0; j < n ; j++ ){
                printf("z");
            }
        }
        else{
            for(int j = 0; j < n ; j++){
                if( j == n - (2*i -1)){
                    printf("z");
                }else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }


    return 0;
}
