#include <iostream>
#include <string>

int main(){
    //Printing Data
    /*
    std::cout <<"Hello from C++20" << std::endl;

    int age{21};
    std::cout << "Age: "<< age << std::endl;

    std::cerr << "Error message : Object not found" << std::endl;
    std::clog << "Log something happened" << std::endl;
    */

    // Input name and age
    /*
    int age1;
    std::string name;

    std::cout << "Please type your name and age" << std::endl;

    std::cin >> name;
    std::cin >> age1;

    std::cout << "Hello " << name << " you are " << age1 << " years old! " << std::endl;
    */

    // Data with spaces

    std::string fullname;
    int age3;

    std::cout << "Please type ypur full name and age" << std::endl;

    std::getline(std::cin,fullname);

    std::cin >> age3;

    std::cout << "Hello " << fullname << " you are " << age3 << " years old! " << std::endl;

    return 0;
}