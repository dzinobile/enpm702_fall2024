#include <iostream>


int main()
{
    //get intergers
    int interger1{};
    int interger2{};
    
    
    std::cout << "Enter interger 1: \n";
    std::cin >> interger1;

    std::cout << "Enter interger 2: \n";
    std::cin >> interger2;

    std::cout << "Addition: " << interger1 << " + " << interger2 << " = " << interger1+interger2 << "\n";
    std::cout << "Subtraction: " << interger1 << " - " << interger2 << " = " << interger1-interger2 << "\n";
    std::cout << "Multiplication: " << interger1 << " * " << interger2 << " = " << interger1*interger2 << "\n";

    if (interger2 == 0)
    {
        std::cout << "Division: N/A, cannot divide by zero\n";
        std::cout << "Modulus: N/A, cannot divide by zero\n";
    }
    else
    {
        std::cout << "Division: " << interger1 << " / " << interger2 << " = " << interger1/interger2 << "\n";
        std::cout << "Modulus: " << interger1%interger2 << "\n";
    }

    

    return 0;
}