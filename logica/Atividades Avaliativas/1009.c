//Pedro Henrique Soares Puccinelli

#include <stdio.h>

int main() {
    char NameClark[10];
    double FixedSalary;
    double TotalSales;

    printf("Enter the Clark Name: ");
    scanf("%10s", &NameClark);

    printf("Enter Fixed Salary: ");
    scanf("%lf", &FixedSalary);

    printf("Enter Total Sales: ");
    scanf("%lf", &TotalSales);

    double Result = FixedSalary + (TotalSales * 0.15);
    printf("Name Clark: %10s\n", NameClark);
    printf("Total R$: %.1lf\n", Result);

    return 0;

}