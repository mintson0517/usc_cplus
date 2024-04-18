#include <stdio.h> 
#include <limits.h> 
 
int main() { 
    int totalcase; 
    scanf("%d", &totalcase); 
    printf("The total number of test cases is %d.\n", totalcase); 
 
    for (int i = 0; i < totalcase; i++) { 
        int num_integers; 
        scanf("%d", &num_integers); 
        printf("Case #%d: the number of integers in the input list is %d.\n", i + 1, num_integers); 
 
        int max_val = INT_MIN; 
        int min_val = INT_MAX; 
        double sum_val = 0;  
 
        for (int j = 1; j <= num_integers; j++) { 
            int num; 
            scanf("%d", &num); 
 
            if (num > max_val) { 
                max_val = num; 
            }

            if (num < min_val) { 
                min_val = num; 
            } 

            sum_val += num; 

            if (j % 4 == 0) { 
                printf("[%02d]%11d\n", j, num); 
            } else if (j % 4 != 0 && j != num_integers) { 
                printf("[%02d]%11d, ", j, num); 
            } else { 
                printf("[%02d]%11d\n", j, num); 
            } 
        } 
 
        double mean_val = sum_val / num_integers; 
 
        printf("The maximum value of the list is %d.\n", max_val); 
        printf("The minimum value of the list is %d.\n", min_val); 
        printf("The sum value of the list is %.0f.\n", sum_val); 
        printf("The mean value of the list is %.2f.\n", mean_val); 
 
        if (i != totalcase - 1) { 
            printf("\n"); 
        } 
    } 
    return 0; 
}  