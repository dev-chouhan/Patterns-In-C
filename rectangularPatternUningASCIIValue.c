#include <stdio.h>

int main(){
    int num = 8;
    // printf("\nEnter the number: ");
    // scanf("%d", &num);

    for (int i = 1; i <= num; i++){
        for (int j = 1; j <= num; j++){
            if (i%2 == 0) printf("%3c", i+94);
            else printf("%3c", i+64);
        }
        printf("\n");
    }

    return 0;
}
