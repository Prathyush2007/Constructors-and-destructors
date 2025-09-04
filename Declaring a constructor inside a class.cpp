//EXPERIMENT 12
//Name:- Prathyush 
//Class:- ENTC A
//PRN-24070123064
//Problem Statement:-Write a code to declare a constructor inside a class.


#include <iostream>
using namespace std;

class Student{
    string name;
    long long PRN;
    string branch;
    char division;
    long fee;
    
    public:
    Student(){
        cout<<"Enter the Name:"<<endl;
        cin>>name;
        cout<<"Enter the PRN:"<<endl;
        cin>>PRN;
        cout<<"Enter the Branch Name:"<<endl;
        cin>>branch;
        cout<<"Enter the Division:"<<endl;
        cin>>division;
        cout<<"Enter the Fee:"<<endl;
        cin>>fee;
    }
    
    void display(){
        cout<<endl<<name<<"\n"<<PRN<<"\n"<<branch<<"\n"<<division<<"\n"<<fee;
    }
};

int main() {
    Student s;
    s.display();

    return 0;
}



/*Output:-
Enter the Name:
Prathyush
Enter the PRN:
24070123064
Enter the Branch Name:
ENTC
Enter the Division:
A
Enter the Fee:
500000

Prathyush
24070123064
ENTC
A
500000
*/
