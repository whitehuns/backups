#include <stdio.h>

unsigned long long fibonacci(int n) {
    if (n <= 1) return n;

    unsigned long long a = 0, b = 1, temp;

    for (int i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }

    return b;
}

int main() {
    int num;

    printf("Enter which Fibonacci number to calculate: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Fibonacci is not defined for negative numbers.\n");
        return 1;
    }

    printf("The %dth Fibonacci number is: %llu\n", num, fibonacci(num));

    return 0;
    
}
