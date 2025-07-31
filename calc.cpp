#include <iostream>
#include <iomanip>
int main() {
    char continue_calculation = 'y';
    double num1, num2, result;
    int choice;
    std::cout << "Basic Calculator" << std::endl;

    do {
        std::cout << "\nChoose operation:\n";
        std::cout << "1. Addition\n";
        std::cout << "2. Subtraction\n";
        std::cout << "3. Multiplication\n";
        std::cout << "4. Division\n";
        std::cout << "Enter your choice (1-4): ";
        
        std::cin >> choice;

        if (choice < 1 || choice > 4) {
            std::cout << "Invalid choice! Please try again.\n";
            continue;
        }

        std::cout << "Enter first number: ";
        std::cin >> num1;
        std::cout << "Enter second number: ";
        std::cin >> num2;

        switch (choice) {
            case 1:
                result = num1 + num2;
                std::cout << std::fixed << std::setprecision(2) << num1 << " + " << num2 << " = " << result << std::endl;
                break;
            case 2:
                result = num1 - num2;
                std::cout << std::fixed << std::setprecision(2) << num1 << " - " << num2 << " = " << result << std::endl;
                break;
            case 3:
                result = num1 * num2;
                std::cout << std::fixed << std::setprecision(2) << num1 << " * " << num2 << " = " << result << std::endl;
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    std::cout << std::fixed << std::setprecision(2) << num1 << " / " << num2 << " = " << result << std::endl;
                } else {
                    std::cout << "Error! Division by zero is not allowed.\n";
                }
                break;
        }

        std::cout << "\nDo you want to perform another calculation? (y/n): ";
        std::cin >> continue_calculation;

    } while (continue_calculation == 'y' || continue_calculation == 'Y');

    std::cout << "\nThank you for using the calculator!" << std::endl;
    return 0;
}