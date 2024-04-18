#include <stdio.h>

int main() {
    int a, b, sum, diff, product, quot, remain;
    int read_num = scanf("%d %d", &a, &b);

    if (read_num == 2) {
        sum = a + b;
        diff = a - b;
        product = a * b;

        printf("There are exactly 2 integers: %d and %d read by scanf() function.\n", a, b);

        printf("(1)The sum of %d(addend) and %d(addend) is %d.\n", a, b, sum); 
        if (a > 0 && b > 0 && sum < 0) { 
            printf("***BUG***The result value %d of sum is overflow.\n", sum); 
        } 
        if(a < 0 && b < 0 && sum > 0){ 
            printf("***BUG***The result value %d of sum is underflow.\n", sum); 
        } 
 
        printf("(2)The difference of %d(minuend) and %d(subtrahend) is %d.\n", a, b, diff); 
        if(a > 0 && b < 0 && diff < 0){ 
            printf("***BUG***The result value %d of difference is overflow.\n", diff); 
        } 
        if(a < 0 && b > 0 && diff > 0){ 
            printf("***BUG***The result value %d of difference is underflow.\n", diff); 
        } 

        printf("(3)The product of %d(multiplicand) and %d(multiplier) is %d.\n", a, b, product);
        if (a != 0 && b != 0 && product / a != b) {
            printf("***BUG***The result value %d of product is overflow.\n", product);
        }

        if (b != 0) {
            quot = a / b;
            remain = a % b;
            printf("(4)The quotient of %d(dividend) and %d(divisor) is %d.\n", a, b, quot);
            printf("(5)The remainder of %d(dividend) and %d(divisor) is %d.\n", a, b, remain);
        } else {
            printf("(4)The quotient of %d(dividend) and %d(divisor) is an undefined value.\n", a, b);
            printf("***BUG***Integer division by zero will cause a floating-point exception or core dump.\n");
            printf("(5)The remainder of %d(dividend) and %d(divisor) is an undefined value.\n", a, b);
            printf("***BUG***Integer division by zero will cause a floating-point exception or core dump.\n");
        }
    } else if (read_num == 1) {
        printf("There is only one integer with value %d read by scanf() function.\n", a);
    } else {
        printf("The return value of scanf() function is -1 which indicates no integer found.\n");
    }
    return 0;
}
