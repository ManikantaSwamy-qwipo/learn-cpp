#include <iostream>
#include<string>
int factorial(int n) {
    if (n <= 1) 
        return 1;
    return n * factorial(n - 1); // Recursive call
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    
    std::cout << "Factorial of " << num << " is " << factorial(num) << std::endl;
    return 0;
}

