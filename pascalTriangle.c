/*
Enter the number: 5;
                                       1 
                                      1 1 
                                     1 2 1 
                                    1 3 3 1 
                                   1 4 6 4 1

*/

#include <stdio.h>

int main(){
    int num = 5;

    for (int i = 1; i <= num; i++){
        for (int j = num - i; j > 0; j--){
            printf(" ");
        }
        int a = 1;
        for (int k = 1; k <= i; k++){
            printf("%d ", a);
            a = a * (i - k) / k;
        }
        printf("\n");
    }


    return 0;
}