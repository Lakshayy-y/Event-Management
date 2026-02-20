// Copy Constructor is a constuctor that will copy one object to another.
// It will wil take reference of an object of same class as argument.
 #include<iostream>
 using namespace std;
// class student{
//     int roll;
//     string name;
//     public:
//     student(){
//         cout<<"object created"<<endl;
//     }
//     //this pointer is a pointer which stores address of the calling object
//     student(int r,string s){
//         roll=r;
//         name=s;
//     }
//     student(student &st){
//         roll=st.roll;
//         name=st.name;

//     }
//     void display(){
//         cout<<roll<<":"<<name<<endl;
//     }

// };
// int main(){
//     student s1(1,"ram");
//     student s2(2,"shyam");
//  //calls copy constructor
//     student s3=s2; //calls copy constructor
//     student* p=&s1;
//     s1.display();
//     s2.display();
//     s3.display();
//     return 0;

//}
// this pointer removes the ambiguty between the data member and the parameter name if both names are same.

// Dynamic memory allocation
// in c++ there are two types of memory- stack and heap memory
// stack memory is automatically located for variables at compile time and has a fixes size.
//- for better control and flexibity dynamic memory allocation on heap memory is used.
//- we can allocate memory from heap at run time using new operator and release it using delete operator.
//- it is usefull when size of required memory is not known at compile time.
// int* fun(){
//     int *p;
//     p=new int(10);
//     delete p;
//     return p;

// }
// int main(){
//     int *q=fun(); // after delete it becomes dengaling pointer
//     cout<<*q;
//     return 0;
// }
// whenever we allocate memory using new operator then we are require to releae that memory by 
//using delete operator.
//shallow copy- whenever we are working with dynamic mwemory and we copy one onject to another object
// then only addressess of data members are copied. If we used inbuilt copy constructor.
//- so by making are own copy constructor we can allocate new memory to data members and then copy
//values of data members from the copied object then this process is called deep copy
int main()
//{
//     // allocation of dynamic memory
//     int *p=new int[10]{2,4,6,7};
//     for(int i=0; i<10;i++){
//         //cout<<*(p++)<<endl;
//         cout<<p<<" :"<<*p<<endl;
//     }
//     return 0;
// }
// whenever we make shallow copy then changes to original variable will also make changes to copied variable or vice versa.
// but when we make deep copy we can get rid og this problem.
// {
//     int *p1=new int(15);
//     int *p2;
//     p2=p1;//shallow copy
//     *p2++;
// }
