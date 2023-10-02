#include <iostream>


int main() {
    start:
    start1:
    int N;


    std::cout << "Enter a three-digit positive number N: ";
    std::cin >> N;

    if (N >= 100 && N <= 999) {
        int first_digit = N / 100;
        int last_digit = N % 10;

        int result = last_digit * 100 + (N % 100 / 10) * 10 + first_digit;

        std::cout << "Result: " << result << std::endl;
        goto start1;
    } else {
        std::cout << "The number entered is not a three-digit positive number." << std::endl;
        goto start;
    }

    return 0;
}













