/*
Create ths pattern;
Enter number of rows: 4;

    *  *
   **  **
  ***  ***
 ****  ****

*/

#include <stdio.h>

int main(){
    int num = 10;
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
}