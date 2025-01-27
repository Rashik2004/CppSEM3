//
//  Arrays.cpp
//  CppSEM3
//
//  Created by Rashik Ghosh on 19/08/24.

//--------------------------------Taking array input from user and printing it-------------------------------
//#include <iostream>
//using namespace std;
//int main(){
//    int array1[]={1,2,3,4,5,6,7,8};
//    int size=sizeof(array1)/sizeof(array1[0]);
//    for(int i=0;i<size;i++){
//        cout << array1[i] << " ";
//    }
//    cout << endl;
//}

//wap to take an user input array;



//-----------------------------------------------------------------------------------------------------------------
// correct code
//#include <iostream>
//using namespace std;
//int main(){
//    int n;
//    cin >> n;
//    int arr1[n];
//    int m;
//    cin >> m;
//    int arr2[m];
//    
//    //taking input of first array
//    for(int i=0;i<n;i++){
//        cin >> arr1[i];
//    }
//    //taking input of second array
//    for(int i=0;i<m;i++){
//        cin >> arr2[i];
//    }
//    // adding the elements of first array with second array;
//    for(int i=0;i<m;i++){
//        arr1[i] += arr2[i];
//    }
//    //printing the array in reverse order;
//    for(int i=m+1;i>=0;i--){
//        cout << arr1[i] << " ";
//    }
//    return 0;
//}
//----------------------------------------------------other method------------------------------------------

//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    cout << "enter the size of 1st array: " << endl;
//    cin >> n;
//    int arr1[n];
//    
//    int m;
//    cout << "enter the size of 2nd array: " << endl;
//    cin >> m;
//    int arr2[m];
//    
//    // Taking input for first array
//    cout << "enter the elements of 1st array: " << endl;
//    for (int i = 0; i < n; i++) {
//        cin >> arr1[i];
//    }
//    
//    // Taking input for second array
//    cout << "enter the elements of 2nd array: " << endl;
//    for (int i = 0; i < m; i++) {
//        cin >> arr2[i];
//    }
//    
//    // Adding elements of arr1 to arr2
//    // Ensure we only loop over the minimum size to avoid out-of-bounds errors
//    int minSize = (n > m) ? n : m;
//    for (int i = 0; i < minSize; i++) {
//        arr2[i] += arr1[i];
//    }
//    
//    // Printing the second array in reverse order
//    for (int i = minSize + 1; i >= 0; i--) {
//        cout << arr2[i] << " ";
//    }
//    return 0;
//}

//_________________________________taking two array from user and merge them_____________________________
//#include <iostream>
//using namespace std;
//int main(){
//    //first array...
//    int n1;
//    cout << "enter the size of first array: ";
//    cin >> n1;
//    int arr1[n1];
//    for (int i=0; i<n1; i++) {
//        cin >> arr1[i];
//    }
//    //second array...
//    int n2;
//    cout << "enter the size of second array: ";
//    cin >> n2;
//    int arr2[n2];
//    for (int i=0; i<n2; i++) {
//        cin >> arr2[i];
//    }
//    //copying arr1 elements to mergearr...
//    int n3=n1+n2;
//    int merge_array[n3];
//    for (int i=0; i<n1; i++) {
//        merge_array[i]=arr1[i];
//    }
//    //copying elements of second array
//    for(int i=0;i<n2;i++){
//        merge_array[n1+i]=arr2[i];
//    }
//    //printing the merged Array...
//    for (int i=0; i<n3; i++) {
//        cout << merge_array[i] << " ";
//    }
//    cout << endl;
//    cout << n3 << endl;
//    if (n3%2==0) {
//        float median=(merge_array[n3/2] +merge_array[(n3/2)+1])/2;
//        cout << median;
//    }
//    else{
//        float median=merge_array[(n3+1)/2];
//        cout << median;
//    }
//    return 0;
//}


//------------------------------sorting of array-------------------------------------------------
//#include <iostream>
//using namespace std;
//
//void sort(int array[], int size) {
//    for (int i = 0; i < size; i++) {
//        for (int j = i + 1; j < size; j++) {
//            if (array[i] > array[j]) {
//                int temp = array[i];
//                array[i] = array[j];
//                array[j] = temp;
//            }
//        }
//    }
//}
//int main() {
//    int n;
//    cout << "Enter the value of n: ";
//    cin >> n;
//    int arr1[n];  // Dynamic allocation for array
//    cout << "Enter the elements of arr1: ";
//    for (int i = 0; i < n; i++) {
//        cin >> arr1[i];
//    }
//
//    int m;
//    cout << "Enter the value of m: ";
//    cin >> m;
//    int arr2[m];  // Dynamic allocation for array
//    cout << "Enter the elements of arr2: ";
//    for (int i = 0; i < m; i++) {
//        cin >> arr2[i];
//    }
//
//    int size = m + n;
//    int array [size];  // Dynamic allocation for merged array
//
//    for (int i = 0; i < n; i++) {
//        array[i] = arr1[i];
//    }
//
//    for (int i = 0; i < m; i++) {
//        array[i + n] = arr2[i];
//    }
//
//    // Sort the merged array
//    sort(array, size);
//
//    // Print the sorted array
//    cout << "Sorted merged array: ";
//    for (int i = 0; i < size; i++) {
//        cout << array[i] << " ";
//    }
//    cout << endl;
//    for(int i=0; i<n; i++){
//        cout << array[i];
//    }
//    cout << endl;
//    for(int i=0; i<m; i++){
//        cout << array[n+i];
//    }
//    cout << endl;
//
//    return 0;
//}



//-------------Reverse the array----------
//#include <iostream>
//using namespace std;
//int main(){
//    int n;
//    cout << "enter the value of n: ";
//    cin >> n;
//    int array[n];
//    for (int i=0; i<n; i++) {
//        cin >> array[i];
//    }
//    for (int i=n-1; i>=0; i--) {
//        cout << array[i] << " ";
//    }
//}
//---------------find the maximun and minimun element in an array------

//#include<iostream>
//using namespace std;
//int main(){
//    int n;
//    cout << "enter the value of n: ";
//    cin >> n;
//    int array[n];
//    for (int i=0; i<n; i++) {
//        cin >> array[i];
//    }
//    int min=array[0];
//    int max=array[0];
//    for (int i=0; i<n; i++) {
//        if (array[i]<min) {
//            min=array[i];
//        }
//        else if (array[i]>max){
//            max=array[i];
//        }
//    }
//    cout <<"The minimum number in an array is: " << min << endl;
//    cout << "The maximum number in an array is: " << max << endl;
//    return 0;
//}

//--------------Find the "Kth" max and min element of an array-----------

//#include<iostream>
//using namespace std;
//
//void bubbleSort(int n, int arr[]){
//   for (int i = 0; i < n; i++)
//   {
//       for (int j = 0; j < n-i; j++)
//       {
//           if (arr[j]>) {
//
//           }
//       }
//   }
//   
//}
//
////function to display sorted array.
//void display(int arr[],int size){
//   for (int i = 0; i < size; i++)
//   {
//       cout << arr[i] << " ";
//   }
//}
////function to take input array.
//void input_arr(int arr[],int size){
//   for (int i = 0; i < size; i++)
//   {
//       cin >> arr[i];
//   }
//}
//
//int main(){
//   int size;
//   cout << "Enter the size of the array.";
//   cin >> size;
//   int array[size];
//   input_arr(array,size);//function call
//    bubbleSort(size, array);
//   display(array,size);
//   return 0;
//}


#include <iostream>
using namespace std;

void push(int stack[], int &top, int max, int x){
    if(top>=max-1){
        cout<<"stack is overflow";
    }else{
        top++;
        stack[top]=x;
        cout<<x<<" pushed"<<endl;
    }
    
}
void pop(int stack[], int &top){
    if(top<0){
        cout<<"underflow";
    }
    else{
        int x = stack[top];
        top--;
        cout<<x<<"popped"<<endl;
    }
}
void display(int stack[], int &top){
    if(top<0){
        cout<<"underflow";
    }
    for(int i=top;i>=0;i--){
        cout<<stack[i]<<" ";
    }
}
void peek(int stack[],int &top){
    if(top<0){
        cout<<"stack empty";
    }
    else{
        cout<<"peek element"<< stack[top];
    }
}
void isEmpty(int &top){
    if(top<0){
        cout<<"true";
    }
    else{
        cout<<"not empty";
    }
}

int main(){
    cout<<"enter the max number of elements ";
    int max;
    cin>>max;
    int stack[max];
    int choice;
    int value;int top=-1;
    do{
        cout<<"enter your choice "<<endl;
        cout<<"1. push"<<endl;
        cout<<"2. pop"<<endl;
        cout<<"3. display"<<endl;
        cout<<"4. peek"<<endl;
        cout<<"5. check if empty"<<endl;
        cout<<"6. exit"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"enter value ";
                cin>>value;
                push(stack,top,max,value);
                cout<<endl;
                break;
            case 2:
                pop(stack,top);
                cout<<endl;
                break;
            case 3:
                display(stack,top);
                cout<<endl;
                break;
            case 4:
                peek(stack,top);
                cout<<endl;
                cout<<endl;
                break;
            case 5:
                isEmpty(top);
                cout<<endl;
                break;
            case 6:
                cout<<"you chose to exit ";
                display(stack,top);
                cout<<endl;
                break;
            default:
                cout<<"invalid";
                cout<<endl;
                display(stack,top);
                cout<<endl;
                break;
        }
        
    }
    while(choice==1 || choice==2 || choice==3|| choice==4 || choice==5);
    
    return 0;
}
