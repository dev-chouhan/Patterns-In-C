/*
Enter number of rows: 4
    *  *
   **  **
  ***  ***
 ****  ****

 ****  ****
  ***  ***
   **  **
    *  *

*/

#include <stdio.h>

int main(){
    int num = 4;
    // printf("\nEnter the number: ");
    // scanf("%d", &num);

    for (int i = 0; i < num; i++){
        for (int j = num-i; j > 0; j--){
            printf(" ");
        }
        for (int k = 0; k <= i; k++){
            printf("*");
        }
        printf("  ");
        for (int l = 0; l <= i; l++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n");
    
    for (int i = 0; i < num; i++){
        for (int j = 0; j <= i; j++){
            printf(" ");
        }
        for (int k = num - i; k > 0; k--){
            printf("*");
        }
        printf("  ");
        for (int l = num - i; l > 0; l--){
            printf("*");
        }
        printf("\n");
    }
}