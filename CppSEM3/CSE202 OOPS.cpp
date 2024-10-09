//
//  CSE202 OOPS.cpp
//  CppSEM3
//
//  Created by Rashik Ghosh on 14/08/24.
//

//#include <iostream>
//using namespace std;
//int main(){
//    cout << "Hello, World!\n" << endl;
//    return 0;
//}
//#include <iostream>
//using namespace std;
//int main(){
//    int x;
//    cout << "Enter the value of x";
//    cin >> x;
//    cout << "The value of x is: "<< x << endl;
//    cerr << "Error" << endl;
//    return 0;
//}
//
//#include <iostream>
//using namespace std;
//int main(){
//    int x,y;
//    cout << "Enter the value of x: ";
//    cin >> x;
//    cout << "Enter the value of y: ";
//    cin >> y;
//    x>y ? cout << "X is greater":cout <<"Y is greater" << endl;
//    return 0;
//}

//-------------------------------------------Date:20/8/2024-----------------------------------------------------
//write the table of user defined input

//#include <iostream>
//using namespace std;
//int main() {
//    int num;
//    cout << "Enter an number: ";
//    cin >> num;
//    for(int i=0;i<=10;i++){
//        cout << num << " x " << i << " = " << num *i << endl;
//    }
//    return 0;
//}

//implement while and do while...

//#include <iostream>
//using namespace std;
//int main() {
//    int num;
//    cout << "Enter an number: ";
//    cin >> num;
//    return 0;
//}

//implementing function to print an output of addition;

//#include <iostream>
//using namespace std;
//int addition(int a,int b){
//    return a+b;
//}
//int main() {
//    int a;
//    cout << "Enter an a: ";
//    cin >> a;
//    int b;
//    cout << "Enter an b: ";
//    cin >> b;
//    cout << "addition of two numbers: "<< addition(a,b);
//    return 0;
//}

//class and object
//#include <iostream>
//using namespace std;
//class ABC{
//public:
//    int a;
//    ABC(){
//        a=5;
//    }
//    void print(){
//        cout << "\n Function: "<< a << endl;
//    }
//}a2;
//int main(){
//    ABC a1;
//    a1.print();
//}

// Structure
//#include <iostream>
//using namespace std;
//struct car{
//    // name name
//    char name[12];
//    int model;
//    double speed;
//    void print(){
//        cout << "inside function " << endl;
//    }
//}c;
//int main() {
//    cout << "size of st. : " << sizeof(car) << endl;
//    cout << "Address of variable: " << &c << endl;
//    cout << "Address of variable model: " << &c.model << endl;
//    cout << "Address of variable speed: " << &c.speed << endl;
//    cout << "Size of variable name: " << sizeof(c.name) << endl;
//    c.print();
//    return 0;
//}

//enumulation

//#include <iostream>
//using namespace std;
//enum year{
//    Jan=1, Feb, March=8, April
//};
//int main() {
//    int i;
//    for (i=Jan; i<=April; i++) {
//        cout << i << endl;
//    }
//    return 0;
//}

//----------------------------------------Date:22/08/2024------------------------------------------------

//make a programe which include a structure and inside that it has name roll in int and grade in char  and make a void function ...

//#include <iostream>
//#include <string.h>
//using namespace std;
//struct student{
//    string name;
//    int roll;
//    char grade;
//    void print(){
//        cout << "Details of student" << endl;
//        cin>> name >> roll >> grade;
//    }
//}c;
//int main(){
//    c.print();
//    cout << "The name of student is: "<< c.name << endl;
//    cout << "The roll of student is: "<<c.roll << endl;
//    cout << "The grade of student is: "<<c.grade << endl;
//    return 0;
//}

//------------------------------------using and implementiong inline function---------------------------------------
//#include <iostream>
//using namespace std;
//inline int Max(int x,int y){
//    return (x>y)?x:y;
//}
//int main(){
//    cout << "Max(20,10) : " << Max(20,10) << endl;
//    cout << "Max(20,50) : " << Max(20,50) << endl;
//    cout << "Max(34,10) : " << Max(34,10) << endl;
//    cout << "Max(50,10) : " << Max(20,10) << endl;
//    return 0;
//}
//
//#include <iostream>
//using namespace std;
//class ABC{
//public:
//    int count=0;
//    ABC(){
//        count ++;
//    }
//    void display(){
//        cout << count <<endl;
//    }
//}a,b,c;
//int main() {
//    a.display();
//    b.display();
//    c.display();
//    return 0;
//}

//for static memory allocation;

//#include <iostream>
//using namespace std;
//class ABC{
//public:
//    static int count;
//    int y=0;
//    int n= 'A';
//    ABC(){
//        count ++;
//    }
//   static void display(){
//        cout << count <<endl;
//    }
//}a,b,c;
//int ABC::count=0;
//int main() {
//    a.display();
//    b.display();
//    c.display();
//    cout << &a.count << endl;
//    cout << &b.count << endl;
//    cout << &a.y << endl;
//    cout << &b.y << endl;
//    cout << &c.n << endl;
//    return 0;
//}

//
//#include <iostream>
//using namespace std;
//class Sum{
//public:
//    int c1,c2;
//    int sum(int x,int y){
//        cin >> x;
//        cin >> y;
//        return (x+y);
//    }
//}a;
//int main(){
//    cout << a.sum(a.c1,a.c2);
//}
//friend function
//#include <iostream>
//using namespace std;
//class Area {
//    int side;
//public:
//    Area(int s){
//        side=s;
//    }
//    friend void display(Area a);
//};
//void display(Area a){
//    cout << "Area: " <<a.side;
//}
//int main(){
//    Area a(5);
//    display(a);
//    return 0;
//}

//new approach to friend function  
//#include <iostream>
//using namespace std;
//class Area;
//class square{
//public:
//    void display(Area a);
//    friend void display(Area a);
//};
//class Area {
//    int side;
//public:
//    Area(int s){
//        side=s;
//    }
//    friend void square:: display(Area a);
//};
//void square::display(Area a){
//    cout << "Area: " <<a.side*a.side << endl;
//}
//int main(){
//    Area a(5);
//    square s;
//    s.display(a);
//    return 0;
//}
//--------------------------------
//#include <iostream>
//using namespace std;
//class bank{
//    int bal;
//public:
//    bank(int s){
//        bal=s;
//    }
//    friend class account;
//};
//class account{
//public:
//    void update(bank b);
//};
//void account::update(bank b){
//        cout <<"balance: "<<b.bal<<endl;
//}
//int main(){
//    bank b(500);
//    account a;
//    a.update(b);
//}

//-----------------------------------
//#include <iostream>
//using namespace std;
//void swap(int x,int y){
//    int t=x;
//    y=t;
//    cout << "Inside function x is: "<<x<< "y is:" <<y<<endl;
//    cout << "Inside function x is: "<<&x<< "y is:" <<&y<<endl;
//}
//int main(){
//    int a=5,b=3;
//    cout << "Before swap: a is:"<< a << " b is: "<< b<<endl;
//    swap(a,b);
//    cout << "Before swap: a is:"<< a << " b is: "<< b<<endl;
//    cout << "Before swap: a is:"<< &a << " b is: "<< &b<<endl;
//
//    return 0;
//}
//---------------------------------
//#include <iostream>
//using namespace std;
//void swap(int *x,int *y){
//    int t=x;
//    y=t;
//    cout << "Inside function x is: "<<*x<< "y is:" <<*y<<endl;
//    cout << "Inside function x is: "<<&x<< "y is:" <<&y<<endl;
//}
//int main(){
//    int a=5,b=3;
//    cout << "Before swap: a is:"<< a << " b is: "<< b<<endl;
//    swap(&a,&b);
//    cout << "Before swap: a is:"<< a << " b is: "<< b<<endl;
//    cout << "Before swap: a is:"<< &a << " b is: "<< &b<<endl;
//
//    return 0;
//}
//---------------------------
//find the factorial of a number using recursion...
//#include <iostream>
//using namespace std;
//int factorial(int n) {
//    if (n == 0 || n == 1) {
//        return 1;
//    }
//    return n * factorial(n - 1);
//}
//int main() {
//    int number;
//    cout << "Enter a number: ";
//    cin >> number;
//    cout << factorial(number);
//    return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//union Data {
//    int num;
//    int roll;
//    // Note: Removed `string` since it's not suitable for union
//};
//
//int main(){
//    Data data;
//    cout << "Enter an integer value for num: ";
//    cin >> data.num;
//    cout << "Enter a value for roll: ";
//    cin >> data.roll;
//    cout << "Enter a string: ";
//    cin.ignore();
//    string name;
//    getline(cin, name);
//
//    cout << "num: " << data.num << endl;
//    cout << "roll: " << data.roll << endl;
//    cout << "name: " << name << endl;
//
//    return 0;
//}
//----------------POinters--------------------
//#include <iostream>
//using namespace std;
//int main(){
//    int a=7;
//    int *ptr=&a;
//    cout << "a: "<<a<<endl;
//    cout << "&a: "<<&a<<endl;
//    cout << "ptr: "<<ptr<<endl;
//    cout << "&ptr: "<<&ptr<<endl;
//}

//----------------------------initialising pointers-------------------------------
//#include <iostream>
//using namespace std;
//int main(){
//    int a[20];
//    int *p;
//    p=a;
//    int *p1;
//    p1=&a[10];
//    cout << p1-p;
//    cout << p << endl;
//    cout << p1-10;
//    cout << p1++;
//}

//#include <iostream>
//using namespace std;
//int main(){
//    int x=7;
//    char y='y';
//    void *ptr;
//    ptr=&x;
//    cout << "address of pointer: " << &ptr << endl;
//    ptr=&y;
//    cout << "address of pointer: " << &ptr << endl;
//}

//#include <iostream>
//using namespace std;
//int main(){
//    void *p=NULL;
//    int i=2;
//    int *ip=&i;
//    p=ip;
//    cout << *p;
//    cout << *((int*)p);
//}

//#include <iostream>
//using namespace std;
//int main(){
//    int a=10;
//    void *ptr=&a;
//    cout<< ptr;
//}

//#include <iostream>
//using namespace std;
//int main(){
//    int a=10;
//    int *p;
//    p=&a;
//    cout << p <<endl << *p << endl<< &p;
//    int &b=a;
//    a=a+2;
//    cout << b;
//}

//#include <iostream>
//using namespace std;
//int main(){
//    int a=10,b=20;
//    int *ptr=&a;
//    int &ref=b;
//    ptr++;
//    ref++;
//    cout << a << " "<<b;
//}


//this pointer
//#include <iostream>
//using namespace std;
//class Area{
//    int l,b;
//public:
//    Area(int l, int b){
//        this->l=l;
//        this->b=b;
//    }
//    void Display(){
//        cout << l*b <<endl;
//    }
//};
//int main(){
//    Area a(5,6);
//    a.Display();
//}


//#include <iostream>
//using namespace std;
//class Area{
//    int l,b;
//public:
//    Area(int l, int b){
//        this->l=l;
//        this->b=b;
//    }
//    Area& set1(int l){
//        this->l=l;
//        return* this;
//    }
//    void Display(){
//        cout << l*b <<endl;
//    }
//};
//int main(){
//    Area a(5,6);
//    a.Display();
//}


//
//#include <iostream>
//#include <string.h>
//using namespace std;
//int main(){
//    string s1="abcdef";
//    string s2="123456";
//    
//    s1.insert(4, "******");
//    cout << s1 << endl;
//    cout << endl;
//    
//    s1.erase(1,2);//print which index(1) to which index(2).
//    cout << s1 << endl;
//    cout << endl;
//    
//    s2.replace(1, 2, "36");
//    cout << s2 << endl;
//    cout << endl;
//    
//    s1.append(s2,2,3);//here 2 is the strating index and 3 is the now of indexes they want to print.
//    cout << s1 << endl;
//    cout << endl;
//    
//    cout << s2.max_size() << endl;
//    cout << endl;
//    
//    s2.swap(s1);
//    cout << s2 << endl;
//    cout << endl;
//    
//    s1.erase();
//    if (s1.empty()) {
//        cout << "Empty"<<endl;
//    }
//    else{
//        cout << s1 << endl;
//    }
//    cout << endl;
//    
//    //second object strings
//    string s3="12345";
//    string s4="4567890";
//    
//    cout << s3.compare(s4)<<endl;
//    cout << endl;
//    
//    string A="qwerty";
//    string B="wearomea";
//    
//    cout << A.find('q')<<endl;
//    cout << endl;
//    
//    cout << A.rfind('r')<<endl;
//    cout << endl;
//    
//    cout << B.find_first_of('e')<<endl;
//    cout << endl;
//    
//    cout << B.find_last_of('e')<<endl;
//    cout << endl;
//    
//    B.push_back('c');//we canot use push_back with cout or endl; it is used independently
//    cout << B <<endl;
//    cout << endl;
//    
//    
//    return 0;
//}

//#include<iostream>
//using namespace std;
//void printname(string name){
//    cout << "Hello " << name << endl;
//}
//void printnumber(long int number){
//    cout << "your number is: " << number << endl;
//}
//int main() {
//    string name2;
//    long int phoneNumber;
//    cin >> name2;
//    cin >> phoneNumber;
//    printname(name2);
//    printnumber(phoneNumber);
//    return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class ABC{
//    int s,l,b;
//public:
//    ABC(int side){
//        s=side;
//        cout << "comnstructor called" << endl;
//    }
//    void square(){
//        cout <<"Sq. area: "<<s*s<<endl;
//    }
//    ABC(int len,int width){
//        l=len;
//        b=width;
//    }
//    void recare(){
//        cout << "Rec Area: " << l*b<<endl;
//    }
//};
//int main(){
//    ABC obj(4);
//    ABC t(2,5);
//    obj.square();
//    t.recare();
//}

//file handling
//#include<iostream>
//#include<fstream>
//using namespace std;
//int main(){
//    fstream file("file.txt",ios::in |ios::out | ios::app);
//    string line;
//    if(file.is_open()){
//        file<<"hello World";
//        cout<<"file exists"<<endl;
//        cout<<file.tellg()<<endl;
//        file.seekg(0,ios::beg);
//        cout<<file.tellg()<<endl;
//        while(getline(file,line)){
//            cout<<line<<endl;
//        }
//        if(file.eof()){
//            cout<<"end";}
//        }
//        else{
//        cout<<"error opening file";
//        }
//        file.close();
//}

//

#include<iostream>
using namespace std;
class ABC{
    float m;
public:
    ABC(float x){
        m=x;
    }
    friend float operator++(ABC &obj);
};
float operator++(ABC &obj){
    obj.m=obj.m+5;
    return obj.m;
}
int main(){
    ABC o(3.5);
    float z=++o;
    cout <<z<<endl;
    return 0;
}
