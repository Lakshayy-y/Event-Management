//pointer is a special type of variable which stores address of another variable
// &-address of operator or refeencing operator
// *= dereferencing operator
int*p; // (pointer)
int a=5;
 // referencing
//5 (Dreferencing)
// referencing- whenever we asighn address of some variable to a pointer variable that process is known as referencing.
// dereferencing= whenever we try to access value of some variable using pointers that process is known as Dreferencing.
#include<iostream>//pass by pointer
using namespace std;
void fun(int *a){
    *a=*a+5;
    cout<<"value of b:"<<*a<< endl;
}
int main(){
    int b=5;
    fun(&b);
    cout<<"value of a:"<<b;
    return 0;
}
