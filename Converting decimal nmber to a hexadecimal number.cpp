#include <iostream>
#include <iomanip>

int main() {
    int decimalNumber;
     
     std::cout << "Enter a decimal number: ";
         std::cin >> decimalNumber;
         std::cout<<"\n"; 
     std::cout << "Hexadecimal: " << std::hex << std::uppercase << decimalNumber << std::endl;

    return 0;
}

