#include <iostream>
using namespace std;


int main()
{
    int t, count = 0, count2 = 0;
    cin >> t;

    for ( int i = 0; i < t; i ++){
        int n, c;
        cin >> n;
        int arr[n];
        for(int j = 0; j<n; j++)
        {
            cin >> arr[j];
        }

        for(int i = 0 ; i < n; i++){
            if(arr[i] == 1 ){
                for( int j = i + 1; j < n; j++){
                    if( arr[j] == 0){
                        count2++;
                    }
                }
            }
        }

        if( arr[n-1] == 1 && arr[0] != 0){
                for(int i = n-1; i > 0; i++){
                if(arr[i] == 1){

                    arr[i] = 0;
                    break;
                }
            }

        }

        //arr[0] == 0
        else if(arr[0] == 0 ){
                arr[0] = 1;



        }
        else{
            for(int i = 1; i < n; i++){
                if(arr[i] == 0){

                    arr[i] = 1;
                    break;
                }
            }
        }


        for(int i = 0 ; i < n; i++){
            if(arr[i] == 1 ){
                for( int j = i + 1; j < n; j++){
                    if( arr[j] == 0){
                        count++;
                    }
                }
            }
        }
         if(count > count2){
            cout << count << endl;
         }
         else{
            cout << count2 << endl;
         }
         count = 0;
         count2 = 0;
    }


    return 0;
}
