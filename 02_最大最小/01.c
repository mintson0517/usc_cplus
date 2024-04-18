#include <stdio.h>   
   
int main() {   
    int N;   
    scanf("%d", &N);   
    printf("The total number of test cases is %d.\n", N);   
   
    for (int i = 1; i <= N; i++) {   
        printf("Case #%d: find the maximum, minimum, sum, and mean values.\n", i);  
        if(i != N) printf("\n"); 
    }  
    return 0;   
}  