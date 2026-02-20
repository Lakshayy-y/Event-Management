#include<iostream>
using namespace std;
// // int main(){
// //     int a=5;
// //     int *p=&a;
// //     cout<<a<<endl;
// //     cout<<p<<endl;
// //     return 0;
// }
//  void fun(int *b){
//     *b=*b+5;
//     cout<<"value inside function"<<*b<<endl;

//  }
//  int main (){
//     int a=9;
//     fun(&a);
//     cout<<"value in main"<<a<<endl;

//  }
//  void fun(int *b){
//     *b=*b+5;
//      cout<<"address in b"<<b<<endl;
//      cout<<"value inside function"<<*b<<endl;

//  }
//  int main (){
//     int a=9;
//     cout<<"address in a"<<a<<endl;
//     fun(&a);
//     cout<<"value in main"<<a<<endl;

//  }
//  write a program to swept value of two variables using call by pointer in function
// reference variable
// int main(){
//     int a=5;
//     int &b=a;
//     b=40;
//     a=a-5;
//     cout<<"a:"<<a<<endl;
//      cout<<"b:"<<b<<endl;
//      return 0;
// }
//  void fun(int &b){ //call by reference
//      b=b+5;
//      cout<<"value inside function"<<b<<endl;

//   }
//   int main (){
//      int a=9;
//     fun(a);
//     cout<<"value in main"<<a<<endl;
//   }
  //write a program to swap value of two variables using call by reference in function 
  // return by pointer
//   int a;
//   int *fun(){
//    a=5;
//    return&a;
//   }  
//   int main(){                                                                                                                                                                                                                                                                       
//     int *b=fun();
//     cout<<*b<<endl;
//     return 0;
//   }
  // inline functions:
  //are functions whose defination is provided at the calling location of funtion.
// inline int sum(int a ,int b){
//     return a+b;
// }
// int main(){
//     int s1=sum(5,9);
//     int s2=sum(3,4);
//     int s3=sum(1,3);
//     int s4=sum(5,6);
//     printf("%d %d %d %d",s1,s2,s3,s4);
//     return 0;
// }
// inline funtion is a request to the compiler to make the function inline and it totally depends 
// on the compiler to make function inline or not 
// when compiler does not compile inline:
// if there is loop or recurssion
// default arguments:
int sum(int a ,int b=25){
    return a+b;
}
int main(){
    int a=5,b=4;
    int s=sum(b);
    cout<<s<<endl;
    return 0;

} 
//whenever we provide value to a argument by defining a function then it is called default argument
// if its value comes while calling that value is considered and if its value is not provided 
//while calling then its default value is considered
//all the default arguments must be on rigt side in argument list
//
