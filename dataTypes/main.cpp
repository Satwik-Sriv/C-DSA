#include <iostream>

int main(){
    
    /*
    int number1 = 15; // Decimal
    int number2 = 017; // Octal
    int number3 = 0x0F; // Hexadecimal
    int number4 = 0b00001111; //Binary

    std::cout << "number 1 : " << number1 << std::endl;
    std::cout << "number 2 : " << number2 << std::endl;
    std::cout << "number 3 : " << number3 << std::endl;
    std::cout << "number 4 : " << number4 << std::endl;
    */

    /*
    int lion_count{10};

    int cat_count{15};

    int total{ lion_count + cat_count }; // can use expression to initialize

    std::cout << total << std::endl;
    */

    int apple(5);
    int orange(10);
    // int banana(); This way does not work

    int total(apple + orange);

    int narrowing_fraction(2.9);

    std::cout << "Apple :" << apple << std::endl;
    std::cout << "Orange : "<< orange << std::endl;
    std::cout << "Total :" << total << std::endl;
    std::cout << "Narrowing fraction :" << narrowing_fraction << std::endl;

    //int narrowing_fraction{2.9};  might give a warning or error


    return 0;
}