#include <stdio.h>
#include <stdlib.h>

// Define the retire_info struct
typedef struct _retire_info {
    int months;
    double contribution;
    double rate_of_return;
} retire_info;

// Function to calculate retirement savings
void retirement(int startAge, double initial, retire_info working, retire_info retired) {
    int months = startAge;
    double balance = initial;

    for (int i = 0; i < working.months; i++) {
        printf("Age %3d month %2d you have $%.2lf\n", months / 12, months % 12, balance);

        // Calculate interest earned and add it to the balance
        double interest = 1000 * (working.rate_of_return / 12);
        balance += working.contribution + interest;

        months++;
    }

    for (int i = 0; i < retired.months; i++) {
        printf("Age %3d month %2d you have $%.2lf\n", months / 12, months % 12, balance);

        // Calculate interest earned and add it to the balance
        double interest = balance * (retired.rate_of_return / 12);
        balance += retired.contribution + interest;

        months++;
    }
}

int main() {
    int startAge = 327;  // Age in months (27 years and 3 months)
    double initialSavings = 21345.0;

    retire_info working_info = {489, 1000.0, 0.045 / 12};  // Working period info for 1 year
    retire_info retired_info = {384, -4000.0, 0.01 / 12};  // Retirement period info

    // printf("Working:\n");
    // printf("Months: %d\n", working_info.months);
    // printf("Per Month Savings: $%.2lf\n", working_info.contribution);
    // printf("Rate of Return: %.2lf%% per year\n", working_info.rate_of_return * 12 * 100);

    // printf("\nRetired:\n");
    // printf("Months: %d\n", retired_info.months);
    // printf("Per Month Spending: $%.2lf\n", retired_info.contribution);
    // printf("Rate of Return: %.2lf%% per year\n", retired_info.rate_of_return * 12 * 100);

    // printf("\nStarting conditions:\n");
    // printf("Age: %d months (%d years, %d months)\n", startAge, startAge / 12, startAge % 12);
    // printf("Savings: $%.2lf\n\n", initialSavings);

    retirement(startAge, initialSavings, working_info, retired_info);

    return 0;
}
