//
//  Recursion.cpp
//  CppSEM3
//
//  Created by Rashik Ghosh on 24/11/24.
//

//recursive call for strings .

//write a programe for reverseing the given string;
//#include <iostream>
//#include <algorithm>
//#include <string>
//using namespace std;
//
//void Reverse(int start,int end ,string s){
//    cout << s << endl;
//    if (start > end) {
//        return;
//    }
//    swap(s[start],s[end]);
//    start++;
//    end--;
//    Reverse(start, end, s);
//}
//
//int main(){
//    string name;
//    cout << "enter the string " << endl;
//    cin >> name;
//    int start=0;
//    int end=(int)name.length();
//    cout << name<< endl;
//    cout <<end << endl;
//    Reverse(start, end-1, name);
//    
//}

//check for palindrome words
//#include <iostream>
//using namespace std;
//
//bool palindrome(int start, int end, const string &s) {
//    // Base case: when the pointers cross or meet
//    if (start >= end) {
//        return true;
//    }
//    // Check if the characters at the current pointers match
//    if (s[start] != s[end]) {
//        return false;
//    }
//    // Recursive case: move the pointers inward
//    return palindrome(start + 1, end - 1, s);
//}
//
//int main() {
//    string name;
//    cout << "Enter a string: ";
//    cin >> name;
//    int start = 0;
//    int end = (int)name.length() - 1;
//
//    if (palindrome(start, end, name)) {
//        cout << "The given string is a palindrome." << endl;
//    } else {
//        cout << "The given string is not a palindrome." << endl;
//    }
//
//    return 0;
//}
//

//#include <iostream>
//using namespace std;
//int main(){
//    
//}
