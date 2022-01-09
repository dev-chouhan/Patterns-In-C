/*

Enter number of rows: 4;
********
***  ***
**    **
*      *
**    **
***  ***
********

*/
#include <stdio.h>

int main(){
    int num = 4;

    for (int i = 1; i <= num; i++){
        for (int j = num - i + 1; j > 0; j--){
            printf("*");
        }
        for (int j = (i - 1) * 2; j > 0; j--){
            printf(" ");
        }
        for (int j = num - i + 1; j > 0; j--){
            printf("*");
        }
        printf("\n");
    }

    for (int i = 1; i <= num; i++){
        for (int j = 1; j <= i; j++){
            printf("*");
        }
        for (int j = (num - i) * 2; j > 0; j--){
            printf(" ");
        }
        for (int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }


    return 0;
}
