
#include <stdio.h>

int main() {
    double hourlyWage;
    int hoursWorked;
    double totalPayment;
    scanf("%d", &hoursWorked);
    scanf("%lf", &hourlyWage);

    if (hoursWorked <= 60) {
        totalPayment = hoursWorked * hourlyWage;
    } else if (hoursWorked <= 120) {
        totalPayment = 60 * hourlyWage + (hoursWorked - 60) * hourlyWage * 1.33;
    } else {
        totalPayment = 60 * hourlyWage + 60 * hourlyWage * 1.33 + (hoursWorked - 120) * hourlyWage * 1.66;
    }

    printf("%.1f", totalPayment);

    return 0;
}
