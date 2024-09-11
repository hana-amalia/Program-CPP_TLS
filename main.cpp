#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    std::srand(std::time(nullptr)); // Seed for random number generation
    
    std::vector<int> numbers;
    int sum = 0;
    
    // Generate 5 random numbers between 1 and 10
    for (int i = 0; i < 5; ++i) {
        int num = std::rand() % 10 + 1;
        numbers.push_back(num);
        sum += num;
    }
    
    double average = static_cast<double>(sum) / numbers.size();
    
    std::cout << "Generated numbers: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\nSum: " << sum << "\nAverage: " << average << std::endl;
    
    // Conditional statements and further calculations
    if (average > 5) {
        std::cout << "The average is greater than 5." << std::endl;
        int factorial_result = factorial(static_cast<int>(average));
        std::cout << "Factorial of the rounded average (" << static_cast<int>(average) << "): " 
                  << factorial_result << std::endl;
    } else if (average < 5) {
        std::cout << "The average is less than 5." << std::endl;
        double square_root = std::sqrt(average);
        std::cout << "Square root of the average: " << square_root << std::endl;
    } else {
        std::cout << "The average is exactly 5." << std::endl;
    }
    
    // Find the maximum number
    int max_num = numbers[0];
    for (int num : numbers) {
        if (num > max_num) {
            max_num = num;
        }
    }
    
    std::cout << "The maximum number is: " << max_num << std::endl;
    
    // Determine if the maximum number is prime
    bool is_prime = true;
    if (max_num <= 1) {
        is_prime = false;
    } else {
        for (int i = 2; i <= max_num / 2; ++i) {
            if (max_num % i == 0) {
                is_prime = false;
                break;
            }
        }
    }
    
    std::cout << "The maximum number is " << (is_prime ? "prime." : "not prime.") << std::endl;
    
    return 0;
}