// EXPERIMENT-12
// Name:- Prathyush
// PRN-24070123064
// Class-ENTC A3
//Problem Statement:- Write a code to print output by calling the copy constructor.


#include <iostream>
using namespace std;

class student {
    int age;
    string name;

public:
    student(string s, int a) {
        name = s;
        age = a;
    }
    student(const student &s) {
        name = s.name;
        age = s.age;
        cout << "Copy Constructor Called." << endl;
        cout<<"This output is by the copy constructor : "<<endl;
    }

    void display() {
        cout << "Name : " << name << " Age : " << age << endl;
    }
};

int main() {
    student s1("Prathyush", 18);
    student s2 = s1;       

    s1.display();
    s2.display();

    return 0;
}


/*Output
Copy Constructor Called.
This output is by the copy constructor : 
Name : Prathyush Age : 18
Name : Prathyush Age : 18
*/
