#include <iostream>
#include <string>


namespace Calculator
{
    int firstNumber;
    int secondNumber;
    char op;

   void init()// (int firstNumber,int secondNumber,char op)
   {
        std::cout << "Please enter the first number:\n" ;
        std::cin >> firstNumber;

        std::cout << "Please enter the second number:\n" ;
        std::cin >> secondNumber;

        std::cout << "Please enter the Operator:\n" ;
        std::cin >> op;
   }


    long add()
    {
        return firstNumber + secondNumber;
    }

    short sub( int firstNumber, int secondNumber)
    {
        return firstNumber - secondNumber;
    }
    long mult(int firstNumber, int secondNumber )
    {
        return firstNumber * secondNumber;
    }
    float mod(int firstNumber, int secondNumber )
    {
        return firstNumber / secondNumber;
    }



}

int main(void)
{
    Calculator::init();
    int output = Calculator::add();
    //std::cout << "Calculator Output: " << output << std::endl;

    //std::cout << "\n" << output << std::endl;

    std::cout << "*" << std::endl;
    

    return 1;
}