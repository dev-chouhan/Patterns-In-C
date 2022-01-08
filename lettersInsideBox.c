/*
Enter the number of rows: 5
* * * * *
* A B C *
* D E F *
* G H I *
* * * * *

*/

#include <stdio.h>

int main(){
    int num = 10;
    char k = 'A';
    // printf("\nEnter the number of dimantions");
    // scanf("%d", &num);
    for (int i = 0; i < num; i++){
        for (int j = 0; j < num; j++){
            if (i == 0 || i == num-1 || j == 0 || j == num-1)
                printf("*  ");
            else{
                printf("%c  ", k++);
                if (k > 'Z') k = 'A';
            }
        }
        printf("\n");
    }
    return 0;
}