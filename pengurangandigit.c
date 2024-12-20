#include <stdio.h>

int min_operations_to_zero(long long n) {
    int operations = 0;

    while (n > 0) {
        int max_digit = 0;
        long long temp = n;

        while (temp > 0) {
            int digit = temp % 10;
            if (digit > max_digit) {
                max_digit = digit;  
            }
            temp /= 10; 
        }

        n -= max_digit;
        operations++; 
    }

    return operations;
}

int main() {
    long long n;
    scanf("%lld", &n);
    
    printf("%d\n", min_operations_to_zero(n));

    return 0;
}
