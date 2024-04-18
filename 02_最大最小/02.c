#include <stdio.h>

int main(){
    int N, total,num;

    scanf("%d", &N);

    printf("The total number of test cases is %d.\n", N);
    for(int i = 1; i <= N; i++){
        scanf("%d", &total);
        printf("Case #%d: the number of integers in the input list is %d.\n", i, total);
        for(int j = 1; j <= total; j++){
            scanf("%d", &num);
            printf("[%d]%d\n", j, num);
            if(j == total && i != N){
                printf("\n");
            }
        }
    }
    return 0;
}