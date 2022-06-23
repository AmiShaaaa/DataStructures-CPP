#include <iostream>
using namespace std;

// ---- function overloading ----

// class ApnaCollege
// {
// public:
//     void fun()
//     {
//         cout << "I'm function with no arguements" << endl;
//     }
//     void fun(int x)
//     {
//         cout << "I'm function with int arguement" << endl;
//     }
//     void fun(double x)
//     {
//         cout << "I'm function with double arguement" << endl;
//     }
// };

// int main()
// {
//     ApnaCollege obj;
//     obj.fun();
//     obj.fun(4);
//     obj.fun(6.2);

//     return 0;
// }

// ----------------------------------------------------------- //
// ----------------------------------------------------------- //

// class Complex
// {
// private:
//     int real, imag;

// public:
//     Complex(int r = 0, int i = 0)
//     {
//         real = r;
//         imag = i;
//     }

//     // ---- operator overload ----

//     Complex operator+(Complex const &obj)
//     {
//         Complex res;
//         res.imag = imag + obj.imag;
//         res.real = real + obj.real;
//         return res;
//     }
//     void display()
//     {
//         cout << real << " +i" << imag << endl;
//     }
// };

// int main()
// {
//     Complex c1(12, 7), c2(6, 7);
//     Complex c3 = c1 + c2;
//     c3.display();
//     return 0;
// }

// ----------------------------------------------------------- //
// ----------------------------------------------------------- //

class base
{
public:
    virtual void print()
    {
        cout << "this is the base class's print function" << endl;
    }
    void display()
    {
        cout << "this is the base class's display function" << endl;
    }
};
class derived : public base
{
    void print()
    {
        cout << "this is the derived class's print function" << endl;
    }
    void display()
    {
        cout << "this is the derived class's display function" << endl;
    }
};

int main(){
    base *baseptr;
    derived d;
    baseptr = &d;
    baseptr -> print();
    baseptr -> display();
    
    return 0;
}
