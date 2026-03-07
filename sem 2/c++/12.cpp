#include<iostream>
using namespace std;
class person{
    int age;
    string name;
    public:
    person(){
        cout<<"object created";
    }
    person(string n,int a){
        name=n;
        age=a;
    }
    void display(){
        cout<<name<<":"<<age;
    }
    ~person(){
        cout<<"object destroyed"<<endl;
    }
};
int main(){
    person p1,p2("ram",8);
    p1.display();
    p2.display();
}
// dynamic destructor: 
// whenever data members of class are allocated memory using dynamic memory allocation,
//then we are allowed to delet that memory in destructors manually by avoid memory leaks.

