#include <stdio.h>  
  
int main() {  
    int a, b;  
    int num_read = scanf("%d %d", &a, &b);   
  
    if (num_read == 2) {  
        printf("There are exactly 2 integers: %d and %d read by scanf() function.\n", a, b);  
    } else if (num_read == 1) {  
        printf("There is only one integer with value %d read by scanf() function.\n", a);  
    } else {  
        printf("The return value of scanf() function is -1 which indicates no integer found.\n");  
    }  
  
    return 0;  
}  