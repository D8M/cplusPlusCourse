#include <iostream>
using namespace std;

int main()
{
    // storing the number 15 in different number systems

    int number1 = 15;         // Decimal
    int number2 = 017;        // Octal
    int number3 = 0x0f;       // Hex
    int number4 = 0b00001111; // binary
    int number5 = 17;         // Decimal

    std::cout << "Number1 is: " << number1 << std::endl;
    std::cout << "Number2 is: " << number2 << std::endl;
    std::cout << "Number3 is: " << number3 << std::endl;
    std::cout << "Number4 is: " << number4 << std::endl;
    std::cout << "Number5 is: " << number5 << std::endl;

    return 0;
} 