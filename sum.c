#include <stdio.h>

int sumOfN(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int result = sumOfN(n);
    printf("The sum of the first %d natural numbers is: %d\n", n, result);

    return 0;
}