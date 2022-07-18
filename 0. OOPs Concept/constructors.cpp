#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // Creating a constructor
    // Constructor is a speacial member function with same name as of the class.
    // It is automatically invoked whenever an object is created
    // It is used to initialize the objects of its class

    Complex(void); // Constructor Declaration
    void printNumber()
    {
        cout << "Your number is: " << a << " + " << b << "i" << endl;
    }
};
Complex::Complex(void) // This is a Default Constructor as it do not take any parameters
{
    a = 10;
    b = 0;
}

int main()
{
    // Complex o1, o2;
    // o1.setNumber(1,4);
    // o2.setNumber(5,7);

    // Make class and initialie the values automatically
    Complex c;
    c.printNumber();

    return 0;
}

// Properties of Constructors

// 1. It should be declared in the public section of the class 
// 2. The are autotmatically invoked whenever the object is created
// 3. They cannot return values and do not have return types
// 4. It can have default arguements
// 5. We cannot refe to their address 