#include <stdio.h>

int main() {
    int N = 3, i, a, b;

    scanf("%d %d", &a, &b);

        if (a > b) {
            printf("Case #1: print 77 times table from %02d downto %02d.\n", a, b);
            
            for(int l = 0; l < a - b + 1; l++){
                printf("+------");
            }
            printf("+\n");
            for (int j = 1; j <= 7; j++) {
                for (int k = a; k >= b; k--) {
                    printf("|%d*%d=%2o", k, j, k*j);
                    if (k == b) {
                        printf("|\n");
                    }
                }
            }
            for(int l = 0; l < a - b + 1; l++){
                printf("+------");
            }
            printf("+\n");
        } else {
            printf("Case #1: print 77 times table from %02d to %02d.\n", a, b);
            
            for(int l = 0; l < b - a + 1; l++){
                printf("+------");
            }
            printf("+\n");
            for (int j = 1; j <= 7; j++) {
                for (int k = a; k <= b; k++) {
                    printf("|%d*%d=%2o", k, j, k*j);
                    if (k == b) {
                        printf("|\n");
                    }
                }
            }
            for(int l = 0; l < b - a + 1; l++){
                printf("+------");
            }
            printf("+\n");
        }

    for (i = 2; i < N; i++) {
        if(scanf("%d %d", &a, &b) == 2){
            N++;
        if (a > b) {
            printf("\nCase #%d: print 77 times table from %02d downto %02d.\n", i, a, b);
            
            for(int l = 0; l < a - b + 1; l++){
                printf("+------");
            }
            printf("+\n");
            for (int j = 1; j <= 7; j++) {
                for (int k = a; k >= b; k--) {
                    printf("|%d*%d=%2o", k, j, k*j);
                    if (k == b) {
                        printf("|\n");
                    }
                }
            }
            for(int l = 0; l < a - b + 1; l++){
                printf("+------");
            }
            printf("+\n");
        } else {
            printf("\nCase #%d: print 77 times table from %02d to %02d.\n", i, a, b);
            for(int l = 0; l < b - a + 1; l++){
                printf("+------");
            }
            printf("+\n");
            for (int j = 1; j <= 7; j++) {
                for (int k = a; k <= b; k++) {
                    printf("|%d*%d=%2o", k, j, k*j);
                    if (k == b) {
                        printf("|\n");
                    }
                }
            }
            for(int l = 0; l < b - a + 1; l++){
                printf("+------");
            }
            printf("+\n");
        }
        }
    }
    
    return 0;
}