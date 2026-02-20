//return by poointer
#include<iostream>
using namespace std;
int* fun()
{
    int a; //global variable
    a=5;
    return&a;
}
int main()
{
    int*p=fun(); //dangelling pointer(*P)
    cout<<*p;
    return 0;

}