//
//  CPP with Love_bubbar.cpp
//  CppSEM3
//
//  Created by Rashik Ghosh on 12/08/24.
//



//#include <iostream>
//using namespace std;
//int main(){
//    int a = 2;
//    int b= a+1;
//    if((a==3)==b){
//        cout << a;
//    }
//    else{
//        cout << a+1 << endl;
//    }
//    return 0;
//}

//              Write a cpp progarame that takes input as a character and distinguish them either they are in uppercase;
//              or either they are in lower case;
//              or they are numeric data types;

//#include<iostream>
//using namespace std;
//int main(){
//    char cti;
//    cin >> cti;
//    if (cti >='a' && cti <= 'z') {
//        cout << "Lowercase character" << endl;
//    }
//    else if (cti >='A' && cti <='Z'){
//        cout << "Uppercase charcter" << endl;
//    }
//    else{
//        cout << "Numeric character" << endl;
//    }
//    return 0;
//}

//-------------------------------------------------Date:13/08/2024-----------------------------------------------------------------
//understanding while loop using simple progame.
//print all the numbers till n;
//#include <iostream>
//using namespace std;
//int main(){
//    int n,i=1;
//    cout<<"Enter the value of n: ";
//    cin >> n;
//    while (i<=n) {
//        cout << i << " ";
//        i++;
//    }
//}

//------------------------------------------------------Find the Sum of all the numbers--------------------------------------------

//#include <iostream>
//using namespace std;
//int main(){
//    int n,i=1,sum=0;
//    cout<<"Enter the value of n: ";
//    cin >> n;
//    while (i<=n) {
//        sum=sum+i;
//        i++;
//    }
//    cout << "The sum of n numbers is: " << sum;
//}

//---------------------------------------Find the sum of all the even numbers upto n---------------------------------------
//#include <iostream>
//using namespace std;
//int main(){
//    int n,i=1,sum=0;
//    cout<<"Enter the value of n: ";
//    cin >> n;
//    while (i<=n){
//        if (i%2==0) {
//            sum=sum+i;
//        }
//        i++;
//    }
//    cout << "The sum of n numbers is: " << sum;
//}

//---------------------------------------Find that the asked or input number is prime or not---------------------------------------
//#include <iostream>
//using namespace std;
//int main(){
//    int n;
//    cout<<"Enter the value of n: ";
//    cin >> n;
//    if (n%2==0) {
//        cout << "The given number is not prime" << endl;
//    }
//    else{
//        cout << " The given number is prime" << endl;
//    }
//}

//---------------------------------------Questions related to patterns---------------------------------------
//Pattern-1(solve using both for loop and while loop)
//using while loop
//#include <iostream>
//using namespace std;
//int main() {
//    int n;
//    cout << "Enter the value of n";
//    cin >> n;
//    int i=1;
//    while (i<=n) {
//        int j=1;
//        while (j<=n) {
//            cout << "*" << " ";
//            j++;
//        }
//        cout << endl;
//        i++;
//    }
//    return 0;
//}

//using for loop
//#include <iostream>
//using namespace std;
//int main() {
//    int rows,colomns;
//    cout << "Enter the no. rows: ";
//    cin >> rows;
//    cout << "Enter the no. colomns: ";
//    cin >> colomns;
//    for (int i=0; i<rows; i++) {
//        for (int j=0; j<colomns; j++) {
//            cout << "*"<< " ";
//        }
//        cout<<endl;
//    }
//    return 0;
//}

//Pattern-2
//#include <iostream>
//using namespace std;
//int main() {
//    int rows,colomns;
//    cout << "Enter the no. rows: ";
//    cin >> rows;
//    cout << "Enter the no. colomns: ";
//    cin >> colomns;
//    for (int i=1; i<=rows; i++) {
//        for (int j=1; j<=colomns;j++) {
//            cout << i<< " ";
//        }
//        cout<<endl;
//    }
//    return 0;
//}
//---------------------------Date: 14/08/2024----------------------------------
//#include <iostream>
//using namespace std;
//int main() {
//    int n;
//    cout << "Enter the value of n";
//    cin >> n;
//    int i=1;
//    while (i<=n) {
//        int j=1;
//        while (j<=n) {
//            cout << j << " ";
//            j++;
//        }
//        cout << endl;
//        i++;
//    }
//    return 0;
//}
//printing the number in decreasing pattern

//#include <iostream>
//using namespace std;
//int main() {
//    int n;
//    cout << "Enter the value of n";
//    cin >> n;
//    int i=1;
//    while (i<=n) {
//        int j=1;
//        while (j<=n) {
//            cout << n-j+1 << " ";
//            j++;
//        }
//        cout << endl;
//        i++;
//    }
//    return 0;
//}

//printing the counting in a matrix pattern
//1 2 3
//4 5 6
//7 8 9

//#include <iostream>
//using namespace std;
//int main() {
//    int n;
//    cout << "Enter the value of n: ";
//    cin >> n;
//    int i=1;
//    int count=1;
//    while (i<=n) {
//        int j=1;
//        while (j<=n) {
//            cout<< count<<" ";
//            count ++;
//            j++;
//        }
//        cout << endl;
//        i++;
//    }
//    return 0;
//}



//printing the triangular pattern with *
//*
//* *
//* * *
//* * * *
//* * * * *

//#include <iostream>
//using namespace std;
//int main() {
//    int n;
//    cout << "Enter the value of n: ";
//    cin >> n;
//    int i=1;
//    while (i<=n) {
//        int j=1;
//        while (j<=i) {
//            cout<< "*"<<" ";
//            j++;
//        }
//        cout << endl;
//        i++;
//    }
//    return 0;
//}


//printing the following pattern;
//1
//2 2
//3 3 3
//4 4 4 4
//5 5 5 5 5

//#include <iostream>
//using namespace std;
//int main() {
//    int n;
//    cout << "Enter the value of n: ";
//    cin >> n;
//    int i=1;
//    while (i<=n) {
//        int j=1;
//        while (j<=i) {
//            cout<< i <<" ";
//            j++;
//        }
//        cout << endl;
//        i++;
//    }
//    return 0;
//}

//printing number incrementing in each step
//1
//2 3
//3 4 5
//4 5 6 7

//#include <iostream>
//using namespace std;
//int main() {
//    int n;
//    cout << "Enter the value of n: ";
//    cin >> n;
//    int i=1;
//    while (i<=n) {
//        int count =i;
//        int j=1;
//        while (j<=i) {
//            cout<< count <<" ";
//            count++;
//            j++;
//        }
//        cout << endl;
//        i++;
//    }
//    return 0;
//}
//----------------------------------------------------------HOMEWORK---------------------------------------------------











//------------------------------------Solve the above question without using the count-----------------------------

//printing number incrementing in each step
//1
//2 3
//4 5 6
//7 8 9 10

//#include <iostream>
//using namespace std;
//int main() {
//    int n;
//    cout << "Enter the value of n: ";
//    cin >> n;
//    int i=1;
//    int count =1;
//    while (i<=n) {
//        int j=1;
//        while (j<=i) {
//            cout<< count <<" ";
//            count++;
//            j++;
//        }
//        cout << endl;
//        i++;
//    }
//    return 0;
//}

//-----------------------------------------------------__DATE__:15/08/2024----------------------------------------------------
//print the pattern wghich prints the trangular pattern which include the numbers in decreasing order in each row...
//1
//2 1
//3 2 1
//4 3 2 1

//#include <iostream>
//using namespace std;
//int main() {
//    int n;
//    cout << "Enter the value of n: ";
//    cin >> n;
//    int i=1;
//    while (i<=n) {
//        int j=1;
//        while (j<=i) {
//            cout<< (i-j+1) <<" ";
//            j++;
//        }
//        cout << endl;
//        i++;
//    }
//    return 0;
//}
//solve using for loop
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    cout << "Enter the value of n: ";
//    cin >> n;
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= i; j++)
// {
//            cout << (i - j + 1) << " ";
//        }
//        cout << endl;
//    }
//
//    return 0;
//}

//-----------------------------------------------------__DATE__:16/08/2024----------------------------------------------------
//Write a programe to print the given pattern...
//AAAAA
//BBBBB
//CCCCC
//DDDDD
//EEEEE
//#include <iostream>
//using namespace std;
//int main(){
//    int n;
//    cout << "Enter the length of matrix: ";
//    cin >> n;
//    int row=1;
//    while (row <= n) {
//        int col=1;
//        while (col<=n) {
//            char ch= 'A'+row -1;
//            cout << ch;
//            col ++;
//        }
//        cout << endl;
//        row++;
//    }
//}
//----------------------------------------------------------------------------------------------------------_-------------------------------------------
//Write a programe to print the given pattern...
//ABC
//ABC
//ABC
//ABC

//#include <iostream>
//using namespace std;
//int main(){
//    int n;
//    cout << "Enter the length of matrix: ";
//    cin >> n;
//    int row=1;
//    while (row <= n) {
//        int col=1;
//        while (col<=n) {
//            char ch= 'A'+ col -1;
//            cout << ch;
//            col ++;
//        }
//        cout << endl;
//        row++;
//    }
//}
//-----------------------------------------------------_-----------------------------------------------------_-------------------------------------------
//write a programe to print the given pattern...
//ababab
//abcbac
//abcdabcd

//#include <iostream>
//using namespace std;
//int main(){
//    int n;
//    cin >> n;
//    for (int i=1; i<=n; i++) {
//        for(int j=1;j<=n;j++){
//            for (char ch = 'A'; ch < 'A' + i; ch++) {
//                            cout << ch << " ";
//                        }
//        }
//        cout << endl;
//    }
//}
//-----------------------------------------------------_-----------------------------------------------------_-------------------------------------------
//write a programe to print the given pattern...
//ABC
//ABC
//ABC

//#include <iostream>
//using namespace std;
//int main(){
//    int row;
//    cin >> row;
//    for (int i=1; i<=row; i++) {
//        for (int j=1; j<=row; j++) {
//            char ch= 'A'+ j -1;
//            cout << ch;
//        }
//        cout << endl;
//    }
//}
//-----------------------------------------------------_-----------------------------------------------------_-------------------------------------------
//write a programe to print the given pattern...
//ABC
//DEF
//GHI
//#include <iostream>
//using namespace std;
//int main(){
//    int row;
//    cin >> row;
//    char letter ='A';
//    for (int i=1; i<=row; i++) {
//        char ch;
//        for (int j=1; j<=row; j++) {
//            cout << letter <<" ";
//            letter ++;
//        }
//        cout << endl;
//    }
//}
//-----------------------------------------------------_-----------------------------------------------------_-----------------------------------------

//write a programe to print the following pattern...
//A B C
//B C D
//C D E
//#include <iostream>
//using namespace std;
//int main(){
//    int row;
//    cin >> row;
//    char letter ='A';
//    for (int i=1; i<=row; i++) {
//        char ch;
//        for (int j=1; j<=row; j++) {
//            cout << letter <<" ";
//            letter ++;
//        }
//        letter =letter - 2;
//        cout << endl;
//    }
//}
//-------------------------------------New approach-------------------------------------------------------------------------------------_
//#include <iostream>
//using namespace std;
//int main(){
//    int row;
//    cout << "Enter the value of row: ";
//    cin >> row;
//    char letter ='A';
//    for (int i=1; i<=row; i++) {
//        char ch;
//        for (int j=1; j<=row; j++) {
//            char ch='A' + i + j -2;
//            cout << ch;
//        }
//        cout << endl;
//    }
//    return 0;
//}

//-----------------------------------------------------_-----------------Date: 25/08/2024--------------------_-------------------------------------------

//write a programe to get the following pattern;
//A
//BB
//CCC
//#include<iostream>
//using namespace std;
//struct var{
//    int rows;
//    char letter='A';
//}c;
//int main(){
//    cout << "Enter the value of rows: ";
//    cin >> c.rows;
//    for (int i=1; i<= c.rows; i++) {
//        for (int j=1; j<=i; j++) {
//            cout << c.letter << " ";;
//        }
//        c.letter ++;
//        cout << endl;
//    }
//    
//}
//solving the above programe using while loop;
//#include<iostream>
//using namespace std;
//int main(){
//    int n;
//    cout << "Enter the value of n: ";
//    cin >> n;
//    int row=1;
//    while (row<=n) {
//        int col=1;
//        while (col<=row) {
//            char ch='A'+row-1;
//            cout << ch << " ";
//            col++;
//        }
//        cout << endl;
//        row++;
//    }
//    return 0;
//}
//-----------------------------------------------------_-----------------------------------------------------_-------------------------------------------
//write a programe to print the following pattern;
//A
//B C
//C D E
//E F G H
//#include<iostream>
//using namespace std;
//struct var{
//    int rows;
//    char letter='A';
//}c;
//int main(){
//    cout << "Enter the value of rows: ";
//    cin >> c.rows;
//    for (int i=1; i<= c.rows; i++) {
//        for (int j=1; j<=i; j++) {
//            cout << c.letter << " ";
//            c.letter ++;
//        }
//        cout << endl;
//    }
//}

//-----------------------------------------------------_-----------------------------------------------------_-------------------------------------------
//write a programe to print the following pattern;
//A
//B C
//C D E
//D E F G

//#include <iostream>
//using namespace std;
//int main(){
//    int row;
//    cout << "Enter the values of row";
//    cin >> row;
//    char letter ='A';
//    for (int i=1; i<=row; i++) {
//        for (int j=1; j<=i; j++) {
//            char ch=('A'+i+j-2);
//            cout << ch << " ";
//        }
//        cout << endl;
//    }
//}

//using while loop
//#include <iostream>
//using namespace std;
//int main(){
//    int n;
//    cout << "Enter the value of n";
//    cin >> n;
//    int row =1;
//    while (row<=n) {
//        int col=1;
//        while (col<=row) {
//            char ch=('A'+row+col-2);
//            cout << ch << " ";
//            col++;
//        }
//        cout << endl;
//        row++;
//    }
//    return 0;
//}

//-----------------------------------------------------_-----------------------------------------------------_-------------------------------------------
//write a programe to print the following pattern;
//D
//C D
//B C D
//A B C D
//
//#include <iostream>
//using namespace std;
//int main(){
//    int n;
//    cout << "Enter the value of n: ";
//    cin >> n;
//    int row =1;
//    while(row <=n){
//        int col=1;
//        char start='A'+n-row;
//        while (col<=row) {
//            cout << start;
//            start++;
//            col++;
//        }
//        cout << endl;
//        row++;
//    }
//    return 0;
//}

//write a programe that prints the following patterns
//    *
//   **
//  ***
// ****
//*****
//#include<iostream>
//using namespace std;
//int main(){
//    int n;
//    cout << "Enter the value of n: ";
//    cin >> n;
//    int row =1;
//    while (row<=n) {
//        int space=n-row;
//        while(space){
//            cout << " ";
//            space--;
//        }
//        
//        int col=1;
//        while (col<=row) {
//            cout<<"*";
//            col++;
//        }
//        cout << endl;
//        row++;
//    }
//    return 0;
//}

//write a programe to print this..
//    *
//   * *
//  * * *
// * * * *
//* * * * *

//#include<iostream>
//using namespace std;
//int main(){
//    int n;
//    cout << "Enter the value of n: ";
//    cin >> n;
//    int row =1;
//    while (row<=n) {
//        int space=n-row;
//        while(space){
//            cout << " ";
//            space--;
//        }
//        
//        int col=1;
//        while (col<=row) {
//            cout<<"*";
//            col++;
//        }
//        cout << endl;
//        row++;
//    }
//    return 0;
//}
//-----------------------BITWISE__OPERATOR---------------------

//-----------Programme explaining all the bitwise operator-----------
//#include<iostream>
//using namespace std;
//int main(){
//    int a;
//    cout << "Enter the value of a: ";
//    cin >> a;
//    int b;
//    cout << "Enter the value of b: ";
//    cin >> b;
//    cout << "a & b = "<< (a&b) << endl;
//    cout << "a | b = "<< (a|b) << endl;
//    cout << " ~a = "<< ~a << endl;
//    cout << "a ^ b = "<< (a^b) << endl;
//    //shift operator left shift right shift
//    cout << "a << b = "<< (a<<b) << endl;
//    cout << "a >> b = "<< (a>>b) << endl;
//}

//The coversion of decimal numbers to binary conversion
//#include<iostream>
//#include <math.h>
//using namespace std;
//int main(){
//    int n;
//    cout << "enter the value of a: ";
//    cin >> n;
//    int i=0;
//    int ans=0;
//    while (n!=0) {
//        int bit = n & 1;
//        ans=bit * (pow(10,i))+ans;
//        n=n>>1;
//        i++;
//    }
//    cout << ans << endl;
//}
//The coversion of binary to decimal numbers conversion

//#include <iostream>
//#include <math.h>
//using namespace std;
//int main(){
//    int n;
//    cout << "enter the value of n:" ;
//    cin >> n;
//    int ans=0;
//    int i=0;
//    while (n!=0) {
//        int digit=n%10;
//        if (digit == 1) {
//            ans=ans + pow(2, i);
//        }
//        n=n/10;
//        i++;
//    }
//    cout  << "The binary conversion of decimal is: " << ans;
//}

//Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside
//the signed 32-bit integer range [-2^31, 2^31 - 1], then return 0...

//#include <iostream>
//using namespace std;
//int main(){
//    int n;
//    cout << "enter the value of n: " ;
//    cin >> n;
//    int ans=0;
//    int i=0;
//    while (n != 0) {
//        int digit=n%10;
//        ans= (ans*10) + digit;
//        n=n/10;
//    }
//    cout << ans << endl;
//}

//covert the decimal into binary and binary into decimal
//#include <iostream>
//using namespace std;
//int main(){
//    int n;//number
//    
//}

//#include <iostream>
//using namespace std;
//int main(){
//    int num;
//    cout << "Enter the day number: ";
//    cin >> num;
//    switch (num) {
//        case 1:
//            cout << "Today is Sunday. "<<endl;
//            break;
//        case 2:
//            cout << "Today is monday. " << endl;
//            break;
//        case 3:
//            cout << "Today is Tuesday. " << endl;
//            break;
//        case 4:
//            cout << "Today is Wednesday. " << endl;
//            break;
//        case 5:
//            cout << "Today is Thrusday. " << endl;
//            break;
//        case 6:
//            cout << "Today is Friday. " << endl;
//            break;
//        case 7:
//            cout << "Today is Saturday. " << endl;
//            break;
//        default:
//            cout << "Enter a valid day number between 1-7.";
//            break;
//    }
//
//}

//making basic calculator:
//#include <iostream>
//using namespace std;
//int main(){
//    int operation;
//    cout <<"1 = to use operator +"<<endl;
//    cout <<"2  = to use operator -"<<endl;
//    cout <<"3 = to use operator *"<<endl;
//    cout <<"4 = to use operator /"<<endl;
//    cin >> operation;
//    int a,b;
//    cout << "enter the value of a: ";
//    cin >> a;
//    cout << "enter the value of b: ";
//    cin >> b;
//    switch (operation) {
//        case 1:
//            cout << a+b << endl;
//            break;
//        case 2:
//            cout << a-b << endl;
//            break;
//        case 3:
//            cout << a*b << endl;
//            break;
//        case 4:
//            if (b==0) {
//                cout <<"zero based error.";
//                break;
//            }
//            else{
//                cout << a/b <<endl;
//            }
//            break;
//        default:
//            break;
//    }
//}

//finding the nCr ...
//#include <iostream>
//using namespace std;
//
//int factorial(int a){
//    int fact = 1;
//    while (a>0) {
//        fact*=a;
//        a--;
//    }
//    return fact;
//}
//
//int main(){
//    int n,r;
//    cout << "Enter the value of n: ";
//    cin >> n;
//    cout << "Enter the value of r: ";
//    cin >> r;
//    cout << "Factoorial of a number is: " << factorial(n) << endl;
//    int ncr=(factorial(n))/(factorial(r)*(factorial(n-r)));
//    cout << "The value of ncr: " <<ncr << endl;
//}

//fibonaci series
//#include <iostream>
//using namespace std;
//int fibonachi(int n){
//    int a=0;
//    int b=1;
//    cout <<a<<endl;
//    cout << b <<endl;
//    for(int i=0; i<n;i++){
//        int c=a+b;
//        cout << c << endl;
//        a=b;
//        b=c;
//    }
//    return a;
//}
//int main(){
//    int n;
//    cin >> n;
//    cout << fibonachi(n);
//}
