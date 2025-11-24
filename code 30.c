#include <stdio.h>

int main() {
    float basic_salary, hra, da, total_salary;

    printf("Enter the basic salary: ");
    scanf("%f", &basic_salary);

    hra = 0.40 * basic_salary;
    da = 0.20 * basic_salary;
    total_salary = basic_salary + hra + da;

    printf("HRA = %.2f\n", hra);
    printf("DA = %.2f\n", da);
    printf("Total Salary = %.2f\n", total_salary);

    return 0;
}
