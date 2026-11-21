// make a scientific calculator
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265358979323846

void showMenu()
{
    printf("\n================ SCIENTIFIC CALCULATOR ================\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Power (x^y)\n");
    printf("6. Square Root (sqrt(x))\n");
    printf("7. Sine (sin x in deg)\n");
    printf("8. Cosine (cos x in deg)\n");
    printf("9. Tangent (tan x in deg)\n");
    printf("10. Natural Log (ln x)\n");
    printf("11. Log base 10 (log10 x)\n");
    printf("12. Exponential (e^x)\n");
    printf("0. Exit\n");
    printf("=======================================================\n");
    printf("Enter your choice: ");
}

double toRadians(double degrees)
{
    return degrees * (PI / 180.0);
}

int main()
{
    int choice;
    double a, b, result;

    while (1)
    {
        showMenu();
        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n')
                ;
            continue;
        }

        if (choice == 0)
        {
            printf("Exiting calculator. Goodbye!\n");
            break;
        }

        switch (choice)
        {
        case 1: // Addition
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
            result = a + b;
            printf("Result: %.6lf\n", result);
            break;

        case 2: // Subtraction
            printf("Enter two numbers (a - b): ");
            scanf("%lf %lf", &a, &b);
            result = a - b;
            printf("Result: %.6lf\n", result);
            break;

        case 3: // Multiplication
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
            result = a * b;
            printf("Result: %.6lf\n", result);
            break;

        case 4: // Division
            printf("Enter numerator and denominator (a / b): ");
            scanf("%lf %lf", &a, &b);
            if (b == 0)
            {
                printf("Error: Division by zero is not allowed!\n");
            }
            else
            {
                result = a / b;
                printf("Result: %.6lf\n", result);
            }
            break;

        case 5: // Power
            printf("Enter base (x) and exponent (y): ");
            scanf("%lf %lf", &a, &b);
            result = pow(a, b);
            printf("Result: %.6lf\n", result);
            break;

        case 6: // Square Root
            printf("Enter number: ");
            scanf("%lf", &a);
            if (a < 0)
            {
                printf("Error: Square root of a negative number!\n");
            }
            else
            {
                result = sqrt(a);
                printf("Result: %.6lf\n", result);
            }
            break;

        case 7: // Sine
            printf("Enter angle in degrees: ");
            scanf("%lf", &a);
            result = sin(toRadians(a));
            printf("Result: %.6lf\n", result);
            break;

        case 8: // Cosine
            printf("Enter angle in degrees: ");
            scanf("%lf", &a);
            result = cos(toRadians(a));
            printf("Result: %.6lf\n", result);
            break;

        case 9: // Tangent
            printf("Enter angle in degrees: ");
            scanf("%lf", &a);
            result = tan(toRadians(a));
            printf("Result: %.6lf\n", result);
            break;

        case 10: // Natural Log
            printf("Enter number: ");
            scanf("%lf", &a);
            if (a <= 0)
            {
                printf("Error: Logarithm undefined for <= 0!\n");
            }
            else
            {
                result = log(a);
                printf("Result: %.6lf\n", result);
            }
            break;

        case 11: // Log base 10
            printf("Enter number: ");
            scanf("%lf", &a);
            if (a <= 0)
            {
                printf("Error: Logarithm undefined for <= 0!\n");
            }
            else
            {
                result = log10(a);
                printf("Result: %.6lf\n", result);
            }
            break;

        case 12: // Exponential
            printf("Enter exponent (x for e^x): ");
            scanf("%lf", &a);
            result = exp(a);
            printf("Result: %.6lf\n", result);
            break;

        default:
            printf("Invalid choice. Please select a valid option from the menu.\n");
        }
    }

    return 0;
}