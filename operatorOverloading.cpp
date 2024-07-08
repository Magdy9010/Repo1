#include <iostream>
#include "operatorOverloading.h"

using namespace std;


    complex complex::operator+(complex const &obj)
    {
        complex result;

        result.real = real + obj.real;
        result.imag = imag + obj.real;

        return result;
    }

     ostream& operator<<(ostream& os, const complex& obj)
    {
        os << obj.real << " " << "+i " << obj.imag << "\n" ;
        
        return os;
    }

    void complex::display()
    {
        cout<< real << "+i"<< imag << endl;
    }

int main()
{

    complex c1(12.5,2.5), c2(8.5,1.5);

    complex c3 = c1 + c2;
    int x = 2;

    cout << c3 << endl;

    cout << x << endl;

//    c3.display();

    return 1;
}