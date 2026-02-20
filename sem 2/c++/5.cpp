//whenever we declare a variable inside any block (function,loop,if else or {}) that variable can only be access inside that block only
//and its memory will be deleted when block ends
  //global variable 
//whenever a variable is declared outside every block then that variable is known as global 
//any function can access and make changes to global variable
  // static variable
// is a variable which will have its scope throughout the program.
// declares only once
// #include<iostream>
// using namespace std;
// void func(){
//     int a=9;
//     a++;
//     cout<<"a="<<a<<endl;
// }
// int main(){
//     func();
//     func();
//     func();
//     return 0;
// }
// write a program to count a how many times a funtion is called
#include<iostream>
using namespace std;
void func(){
    static int a=9;
    a++;
   return& a;
 }
 int main(){
    func();
    func();
    int *b=func();
    return 0;
 }







