#include<iostream>
using namespace std;
class student{
    public:
    int age;
    string name;
    student(string s,int a){
        name=new string(a);
        age= a;
    }
};
int main(){
    student s1("ram",25);
    student s2=s1;
    *(s1.age)=20;
    cout<<*(s1.name)<<s1.age
}

//every class has its own inbuilt copy construrctor which works fine for normal varoable 
//but when we are using dynamic memor y provides the shallow copy.
//- if we want deep copy then we have to make our own copy constructor to make deep copy.
// Destructors :
// It is a special member function that performs clean up when an object life ends.
// it must match the class name having tilt sign 

// the compiler automatically calls destructor when an object goes out of scope.
