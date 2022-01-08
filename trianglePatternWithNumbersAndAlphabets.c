/*
Enter the number of rows: 5
A
1 1
B B B
2 2 2 2
C C C C C

*/
#include <stdio.h>

int main(){
    int num = 10;
    char term = 'A';
    for (int i = 1; i <= num; i++){
        for (int j = 1; j <= i; j++){
            if (i%2 == 0) printf("%d ", i/2);
            else printf("%c ", term);
        }
        printf("\n");
        if (i%2 == 0) term++;
    }
    return 0;
}