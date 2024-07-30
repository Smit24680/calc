#include <stdio.h>

int main() {
    char choice;
    int a, b;

    printf("\nArithmetic Operations Menu:\n");
    printf("1 is for Addition (+)\n");
    printf("2 is for Subtraction (-)\n");
    printf("3 is for Multiplication (*)\n");
    printf("4 is for Division (/)\n");
    printf("5 is for Modulus (%%)\n");
    printf("6 is for Exit (e)\n");
    
    for (int a = 0; a < 2; a = 0){
        printf("Enter your choice: ");

        scanf(" %c", &choice);
        
        if (choice == '6' || choice == 'e') {
            printf("Exiting the program...\n");
            break;
        }
        
        if (choice < '1' || choice > '5') {
            printf("Invalid choice. Please enter a number between 1 and 5, or 'e' to exit.\n");
        }
        
        printf("Enter the first number: ");
        scanf("%d", &a);
        printf("Enter the second number: ");
        scanf("%d", &b);
        
        switch (choice) {
            case '1':
                printf("Result: %d\n", a + b);
                break;
            case '2':
                printf("Result: %d\n", a - b);
                break;
            case '3':
                printf("Result: %d\n", a * b);
                break;
            case '4':
                printf("Result: %d\n", a / b);
                break;
            case '5':
                if (b != 0) {
                    printf("Result: %d\n", a % b);
                }
                else {
                    printf("Error: Division by zero is not allowed.\n");
}
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 5.\n");
                break;
        }
        }
    
    return 0;
}