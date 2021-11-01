#include <iostream>
#include <locale.h>


int main() {
    
    std::locale system_locale(std::setlocale(LC_ALL, "")); // Get system locale
    std::cout << "Current system locale: " << system_locale.name() << std::endl;

    return 0;
}
