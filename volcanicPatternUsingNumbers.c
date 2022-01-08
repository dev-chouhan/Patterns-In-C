/*
Enter the rows: 4;
    1  1
   12  21
  123  321 
 1234  4321

*/


#include <stdio.h>

int main(){
    int num = 4;
    // printf("\nEnter the number: ");
    // scanf("%d", &num);

    for (int i = 1; i <= num; i++){
        for (int j = num-i; j > 0; j--){
            printf(" ");
        }
        for (int k = 1; k <= i; k++){
            printf("%d", k);
        }
        printf("  ");
        for (int l = i; l > 0; l--){
            printf("%d", l);
        }
        printf("\n");
    }
}