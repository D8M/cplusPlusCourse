#include <iostream>
using namespace std;

int addNumbers(int firstNumber, int secondNumber) // parameters
{
       int sum = firstNumber + secondNumber;

       return sum;
}

double multiplyNumbers(double firstNumber, double secondNumber, double thirdNumber)
{
       double sum = firstNumber * secondNumber * thirdNumber;

       return sum;
}

int main()
{
       int sum;
       sum = addNumbers(10, 20);
       std::cout << "The sum of the numbers is: " << sum << std::endl;

       sum = addNumbers(30, 40);
       std::cout << "The sum of the numbers is: " << sum << std::endl;

       sum = addNumbers(50, 60);
       std::cout << "The sum of the numbers is: " << sum << std::endl;

       std::cout << "The sum of the numbers is: " << addNumbers(99, 1) << std::endl;

       std::cout << "The result of the multiplied numbers are: " << multiplyNumbers(99, 1, 0.5) << std::endl;

       std::cout << "The result of the multiplied numbers are: " << multiplyNumbers(2, 4, 8) << std::endl;

       return 0;
}