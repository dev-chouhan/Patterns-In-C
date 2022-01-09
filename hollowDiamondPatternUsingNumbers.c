/*
Enter the number: 5;
     1
    2 2
   3   3
  4     4
 5       5
  4     4
   3   3
    2 2
     1

*/

#include <stdio.h>

int main(){
    int num = 5;

    for (int i = 1; i <= num; i++){
        for (int j = num - i; j > 0; j--){
            printf(" ");
        }
        for(int k = 1; k <= i; k++){
            if (k%2 == 1 || k != 1){
                if (k==i || k==1){
                    printf("%d ", i);
                }
                else printf("  ");
            }
        }
        if (i%2==1 || i!=1)
        printf("\n");
    }

    for (int i = num - 1; i > 0; i--){
        for (int j = num - i; j > 0; j--){
            printf(" ");
        }
        for(int k = i; k > 0; k--){
            if (k%2 == 1 || k != 1){
                if (k==i || k==1){
                    printf("%d ", i);
                }
                else printf("  ");
            }
        }
        printf("\n");
    } 
}