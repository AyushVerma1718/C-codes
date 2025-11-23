#include <stdio.h>

int main() {
    int num;
    char ch;
    
    printf("Enter an integer: ");
    scanf("%d", &num);

    getchar();
    
    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("You entered integer: %d\n", num);
    printf("You entered character: %c\n", ch);

    return 0;
}