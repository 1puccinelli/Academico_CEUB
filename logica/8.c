#include <stdio.h>
#include <stdlib.h>

int main () {

    int ClerkNumber;
    int HoursWorked;
    double Salary;

    printf("Type the clerk number: ");
    scanf("%d", &ClerkNumber);

    printf("Type the hours worked: ");
    scanf("%d", &HoursWorked);

    printf("Enter hourly wage: ");
    scanf("%lf", &Salary);

    double MonthlySalary = (HoursWorked * Salary);

    printf("ClerkNumber: %d\n", ClerkNumber);
    printf("MonthlySalary: %.2lf\n", MonthlySalary);

    return 0;

}