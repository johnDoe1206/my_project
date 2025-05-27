#include "sdt.h"
#include <iostream>

int main() {
    std::cout << "Enter two integers: ";
    int a, b;
    std::cin >> a >> b;
    
    // Вывод суммы (уже было)
    std::cout << "Sum: " << a + b << std::endl;
    
    // Добавьте вывод разности
    std::cout << "Difference: " << a - b << std::endl;
    
    return 0;
}