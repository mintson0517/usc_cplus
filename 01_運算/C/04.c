#include <stdio.h>

int main(){
    int a, b;
    int read_num = scanf("%d %d", &a, &b);

    if(read_num == 2){
        printf("There are exactly 2 integers: %d and %d read by scanf() function.\n", a, b);
        printf("(1)The sum of %d(addend) and %d(addend) is %d.\n", a, b, a + b);
        printf("(2)The difference of %d(minuend) and %d(subtrahend) is %d.\n", a, b, a - b);
        printf("(3)The product of %d(multiplicand) and %d(multiplier) is %d.\n", a, b, a * b);
        printf("(4)The quotient of %d(dividend) and %d(divisor) is %d.\n", a, b, a / b);
        printf("(5)The remainder of %d(dividend) and %d(divisor) is %d.\n", a, b, a % b);
    }else if(read_num == 1){
        printf("There is only one integer with value %d read by scanf() function.\n", a);
    }else{
        printf("The return value of scanf() function is -1 which indicates no integer found.\n");
    }
    return 0;
}