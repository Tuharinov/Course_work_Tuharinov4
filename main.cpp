#include <iostream>
#include "calculator.h"
int main() {
    int n1, n2;
    std::cout << "Введіть перше число: ";
    std::cin >> n1;
    std::cout << "Введіть друге число: ";
    std::cin >> n2;
    int result = Calculator::Add(n1, n2);
    std::cout << "Сума: " << result << std::endl;
    return 0;
}
