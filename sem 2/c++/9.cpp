//Enceapsulation
// it is the process of binding data members and member functions within a class.
// it provides three access specifires using which we can manage class mmebers accessibility outside class.
//public: can access outside class.
//private: cannot access 
// protected: can access within class or in derived class.
// Data Hiding;
// to prevent accidental changes in data members from outside class we can make are data members 
//private and public memeber functions to set and get their values.
#include<iostream>
using namespace std;
class person{
    private:
    string name;
    int age;
    public:
    void set(int a,string n){
        name=n;
        age=a;
    }
    void display(){
        cout<<name<<" is "<<age<<" years old.\n ";
    }

};
int main(){
    person p1,p2;
    p1.set(25,"lucky");
    p2.set(24,"ram");
    p1.display();
    p2.display();
    return 0;
}

