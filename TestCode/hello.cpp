#include <iostream>

int main() {
    std::cout << "Hello world!" << std::endl;
    
    int x = 0;
    std::cout << "Write a number:: ";
    std::cin >> x;
    std::cin.ignore();  
    std::cout << "Your number is " << x << std::endl;

    return 0;
}