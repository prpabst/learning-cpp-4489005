// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){

    std::string str;

    std::cout << "Please enter the name of your best friend:  " << std::flush;
    std::cin >> str;

    std::cout << "Are you sure that " << str;
    std::cout << " is your best friend?";

    std::cout << std::endl << std::endl << "--- END ---" << std::endl << std::endl;
    return (0);
}
