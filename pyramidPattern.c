/*
        1
      2   2
    3   3   3
  4   4   4   4
5   5   5   5   5

*/

#include <stdio.h>

int main(){
    int num = 5;
    for (int i = 1; i<= num; i++){
        for (int j = 1; j <= num - i; j++){
            printf("  ");
        }
        for (int k = 1; k <= i; k++){
            printf("%d   ", i);
        }
        printf("\n");
    }
    return 0;
}