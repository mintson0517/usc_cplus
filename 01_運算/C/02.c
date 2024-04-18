#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("The return value of scanf() is 2.\n");
    printf("The decimal integer of the 1st variable is %d.\n", a);
    printf("The octal integer of the 1st variable is %o.\n", a);
    printf("The hexadecimal integer of the 1st variable is %x.\n", a);
    printf("The decimal integer of the 2nd variable is %d.\n", b);
    printf("The octal integer of the 2nd variable is %o.\n", b);
    printf("The hexadecimal integer of the 2nd variable is %x.\n", b);

    return 0;
}