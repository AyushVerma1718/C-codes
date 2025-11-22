#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two numbers (swap using temp variable): ");
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping (using temp variable): a = %d, b = %d\n", a, b);

    printf("Enter two numbers (swap without temp variable): ");
    scanf("%d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping (without temp variable): a = %d, b = %d\n", a, b);

    return 0;
}
