#include <stdio.h>
int main(){
    int n, t, sp, halfWay;

    scanf("%d", &n);
    t = n + n-1;


    sp = t -2;
    if(t %2 == 1){
        halfWay = t / 2 + 1;
    }
    else{
        halfWay = t/2;
    }
    for ( int i = 0; i < n ; i++){
        int val = 1;

        for ( int j = 1; j <= t; j++ ){
            if(  j > i+1 && j != t && j <= sp + 1 ){
                printf("_");
            }
            else{
                if(j <= halfWay){
                    printf("%d", val);
                    val++;
                }
                else{
                    if(j == halfWay + 1 && i == n-1){
                        val = val - 2;
                    }else{
                        val--;
                    }

                    printf("%d", val);
                }
            }
        }

        sp  = sp-1;


        printf("\n");

    }


    return 0;
}
