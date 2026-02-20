// classes and objects
//- cass is a user defined data type which provide blueprint of real world entity that is object 
//varialbles (data members) and member functions are defined in classes.
//- whenever we create an object the memory for the data members is asigned to that object.
//while every object share the member functions
//(.) member access operator
#include<iostream>
using namespace std;
     class student{
        public:
        int roll;
        string name;
        void display(){
            cout<<roll<<":"<<name<<endl;
        }

    };
    int main(){
        student s1;
        student s2;
        s1.name="ram";
        s1.roll=4;
        s2.name="shyam";
        s2.roll=5;
        s1.display();
        s2.display();
        return 0;
}
//- whenever we are not providing any access specifier all members of class are private. if we want 
// to use them outside class we are required to make them public.
//- each object will have its seperate copy of data memebers while the member function are shared by 
//every object.