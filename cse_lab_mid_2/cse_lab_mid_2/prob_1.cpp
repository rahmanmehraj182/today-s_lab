#include <stdio.h>

int main (){
    int n, arr[100];
    scanf("%d", &n);

    for(int i = 0; i < n ; i++){
        scanf("%d", &arr[i]);
    }

    for ( int i = 0; i  < n ; i++){
        int sum = 0;
        for (  int j = i; j< n; j++){
           sum = sum + arr[j] ;
        }

        printf("Sum-%d : %d \n", i, sum);
    }


    return 0;
}
