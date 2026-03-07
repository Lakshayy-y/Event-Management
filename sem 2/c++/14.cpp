#include <iostream>
using namespace std;
class person
{
    public:
    string name;
    int salary;

public:
    person()
    { // default constructor
        name = "";
        salary = 0;
    }
    person(const person &p){ //string n, int s
    {
        name = new string(*(p.name));
        salary = new int(*(p.salary));
        p.salary=salary;
    }
    void display(){
        cout<<name<<":"<<salary<<endl;jjjjjj
    }
}; 
}
int main()
{
    person p1,p2("ram",23000);
    person p3(p2);
    p1.display();
    p2.display();
    p3.name="shyam";
    //p2.display();
    p3.display();
}
// we can avoid accidental changes to variables or objects by making their constant reference