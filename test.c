#include <stdio.h>

int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if (a % 2 == 0) {
        printf("Number is divisible by 2\n");
    } else {
        printf("Number is not divisible by 2\n");
    }
    
    return 0;
}
