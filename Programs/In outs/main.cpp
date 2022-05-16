#include <iostream>
#include <string>

using namespace std;

int main()
{

    // Print Data
    std::cout << "Hello there!" << std::endl;

    // int age{51};
    // std::cout << "Age: " << age << std::endl;

    // std::cerr << "Error message: Something is incorrect! " << std::endl;
    // std::clog << "Log Message: An issue may have arose! " << std::endl;

    // int age1;
    // std::string name;

    // std::cout << "Please type your name & age please. " << std::endl;
    //  std::cin >> name; //Data in
    // std::cin >> name >> age1;

    std::string full_name;
    int age3;

    std::cout << "Please type your name please. " << std::endl;

    std::getline(std::cin, full_name);

    std::cout << "Please type your age please. " << std::endl;

    std::cin >> age3;
    std::cout << "Hello " << full_name << " you are " << age3 << std::endl;

    return 0;
}