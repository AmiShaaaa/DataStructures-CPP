#include <iostream>
using namespace std;

class student
{
    string name;

public:
    int age;
    bool gender;

    student()
    {
        cout << "Default Constructor" << endl;
    } // Default Constructor

    student(string s, int a, int g)
    {
        cout << "Parameterized Constructor" << endl;
        name = s;
        age = a;
        gender = g;
    } // parameterised Constructor

    student(student &a)
    {
        cout << "Copy Constructor" << endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    ~student()
    {
        cout << "Destructor called" << endl;
    }

    void setName(string s)
    {
        name = s;
    }
    void getName()
    {
        cout << name << endl;
    }
    void printInfo()
    {
        cout << "Name = ";
        cout << name << endl;
        cout << "Age = ";
        cout << age << endl;
        cout << "Gender = ";
        cout << gender << endl;
    }

    // Operator overloading --> operator ko uss way se work karana, jo wo normally nahi krta

    bool operator==(student &a)
    {
        if (name == a.name && age == a.age && gender == a.gender)
        {
            return true;
        }
        return false;
    }
};

int main()
{

    // student a;
    // a.name = 'tim';
    // a.age = 20;
    // a.gender = 1;

    // student arr[3];
    // for(int i=0; i<3;i++){
    //     string s;
    //     cout<<"Name = ";
    //     cin>>s;
    //     arr[i].setName(s);
    //     cout<<"Age = ";
    //     cin>>arr[i].age;
    //     cout<<"Gender = ";
    //     cin>>arr[i].gender;
    // }
    // for(int i = 0;i<3;i++){
    //     arr[i].printInfo();
    // }

    student a("Amisha", 22, 1); // Parameterized Constructor
    // a.printInfo();

    student b("Amy", 20, 1); // Default Constructor --> shallow copy

    student c = a; // Copy Constructor -- deep copy

    // To compare two students
    if (c == a)
    {
        cout << "Same" << endl;
    }
    else
    {
        cout << "Not same" << endl;
    }

    if (b == a)
    {
        cout << "Same" << endl;
    }
    else
    {
        cout << "Not same" << endl;
    }

    return 0;
}

// Destructor yaha call hota hai and
// utne hi baar jitne variable call krte hai