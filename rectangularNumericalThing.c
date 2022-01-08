/*
print this patter:

Enter the number of rows: 10
1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 2 2
1 1 1 1 1 1 1 3 3 3
1 1 1 1 1 1 4 4 4 4
1 1 1 1 1 5 5 5 5 5
1 1 1 1 6 6 6 6 6 6
1 1 1 7 7 7 7 7 7 7
1 1 8 8 8 8 8 8 8 8
1 9 9 9 9 9 9 9 9 9
10 10 10 10 10 10 10 10 10 10
*/

#include <stdio.h>

int main(){
    int num = 10;
    // printf("\nEnter number of terms: ");
    // scanf("%d", &num);

    for (int i = 1; i <= num; i++){
        for(int j = 1; j <= num -i; j++){
            printf("1\t");
        }
        for(int k = 1; k <= i; k++){
            printf("%d\t", i);
        }
        printf("\n");
    }

    return 0;
}