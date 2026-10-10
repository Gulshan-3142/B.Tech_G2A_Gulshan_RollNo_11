#include <stdio.h>
#include <math.h>

int main() {
    int n, b, c, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    b = pow(n, 2);
    int a = b;

    while (a != 0) {
        c = a % 10;
        sum += c;
        a = a / 10;
    }

    if (sum == n) {
        printf("%d is Neon number", n);
    } else {
        printf("%d Not a Neon number", n);
    }

    return 0;
}