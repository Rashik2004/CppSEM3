//
//  ClassworkCPP.cpp
//  CppSEM3
//
//  Created by Rashik Ghosh on 13/08/24.

// creating an array of user choice size;

//#include<iostream>
//using namespace std;
//int main(){
//    int cap,n;
//    cout << "enter the capacity";
//    cin >> cap;
//    cout << "Enter the size of the array";
//    cin >> n;
//    int a[cap];
//    for(int i=0;i<n;i++){
//        cin >> a[i];
//    }
//    for(int i=0;i<n;i++){
//        cout << a[i] << " ";
//    }
//
//    return 0;
//}

// insertion at the end;

//#include<iostream>
//using namespace std;
//int main(){
//    int cap,n;
//    cout << "enter the capacity";
//    cin >> cap;
//    cout << "Enter the size of the array";
//    cin >> n;
//    int a[cap];
//    for(int i=0;i<n;i++){
//        cin >> a[i];
//    }
//    for(int i=0;i<n;i++){
//        cout << a[i] << " ";
//    }
//    //insertion at the end
//    int key;
//    cin >> key;
//    a[n]=key;
//    for(int i=0;i<=n;i++){
//        cout << a[i]<<" ";
//    }
//    return 0;
//}

//printing an array in reverse order

//#include <iostream>
//using namespace std;
//int main() {
//    int size;
//    cout<<"Enter the size of array: ";
//    cin >> size;
//    char arr[size];
//    for(int i=0;i<size;i++){
//            cin >> arr[i];
//        }
//    // Print array in reverse order
//    for (int i = size - 1; i >= 0; i--) {
//        cout << arr[i] << " ";
//    }
//
//    return 0;
//}

//deletion of an array which has 0 in any of its index

//#include <iostream>
//using namespace std;
//int main() {
//    int size;
//    cout<<"Enter the size of array: ";
//    cin >> size;
//    char arr[size];
//    for(int i=0;i<size;i++){
//            cin >> arr[i];
//        }
//    int del;
//    // finding the 0 indexes
//    for (int i = 0; i <size; i++) {
//        if(arr[i]==0){
//            del=i;
//        }
//    }
//    for (int i= del; i<size-1; i++) {
//        arr[i]=arr[i+1];
//    }
//    size--;
//    for (int i=0; i<size; i++) {
//        cout << arr[i] << " ";
//    }
//
//    return 0;
//}
//-------------------------------------------Date:20/08/2024-------------------------------------------
//merging of an array
//#include <iostream>
//using namespace std;
//void merge_array(int array1[], int n1, int array2[], int n2){
//    int merge_array[n1+n2];
//    for (int i=0; i<n1; i++) {
//        merge_array[i] = array1[i];
//    }
//    for (int i=0; i<n2; i++) {
//        merge_array[n1+i] = array2[i];
//    }
//    for (int i=0; i< (n1+n2); i++) {
//        cout << merge_array[i] << " ";
//    }
//}
//int main(){
//    int n1,n2;
//    n1=5;
//    n2=5;
//    int array1[5]={1,2,3,4,5};
//    int array2[5]={5,4,3,2,1};
//    merge_array(array1, n1, array2, n2);
//    return  0;
//}

//searching of an element in an array;
//linear searching
//#include <iostream>
//using namespace std;
//int main(){
//    int n=6;
//    int arr[6]={1,2,3,4,5};
//    int key=8;
//    int flag=0;
//    for (int i=0; i<n; i++) {
//        if (key==arr[i]) {
//            flag=1;
//            cout << "element" << i << "found in the list";
//            break;
//        }
//    }
//    if (flag == 0) {
//        cout << "element not found";
//    }
//    return 0;
//}
//binary searching

//#include <iostream>
//using namespace std;
//void binary_search(int arr[], int n, int key){
//    int start=0;
//    int last=n-1;
//    while (start<= last) {
//        int mid=(start+ last)/2;
//        if (arr[mid]==key) {
//            cout << "element found";
//            return 1;
//        }
//        else if (arr[mid]<key){
//            start=mid +1;
//        }
//        else{
//            last=mid-1;
//        }
//    }
//}
//int main(){
//    int n=10;
//    int arr[10]={1,2,3,4,5,23,26,60,12,33};
//    int key;
//    cout << "enter the key to be searched: ";
//    cin >> key;
//    binary_search(arr, n, key);
//    return 0;
//}

//#include <iostream>
//using namespace std;
//int main(){
//    int n1 = 3;
//    int arr1[] = {1,4,5};
//    int n2 = 5;
//    int arr2[] = {2,3,7,9,10};
//    int arr3[n1+n2];
//    int i = 0;
//    int j = 0;
//    int k = 0;
//    while(k < n1+n2)
//    {
//        if(arr1[])
//    }
//}
//

//binary searching array...
//#include <iostream>
//using namespace std;
//int main(){
//    int n;
//    cin >> n;
//    int a[n];
//    for (int i=0; i<n; i++) {
//        cin >> a[i];
//    }
//    int key;
//    cin >> key;
//    int low=0;
//    int high=n-1;
//    int counter=0;
//    while (low<=high) {
//        int mid=(low+high)/2;
//        if (a[mid]==key) {
//            cout << "key found at " << mid << endl;
//            counter =1;
//            break;
//        }
//        else if(a[mid]<key){
//            low= mid+1;
//        }
//        else{
//            high=mid-1;
//        }
//    }
//    if (counter==0) {
//        cout<<"Element not found"<< endl;
//    }
//    return 0;
//}

//bubble sorting using for loop...

//#include <iostream>
//using namespace std;
//int main(){
//    int n;
//    cout << "enter the value of n: ";
//    cin >>n;
//    int a[n];
//    cout << "enter the elements of array: ";
//    for (int i=0; i<n; i++) {
//        cin >> a[i];
//    }
//    for (int i=0; i<n-1; i++) {
//        for (int j=0; j<n-i-1; j++) {
//            if (a[j]>a[j+1]) {
//                int temp=a[j];
//                a[j]=a[j+1];
//                a[j+1]=temp;
//            }
//        }
//    }
//    for (int i=0; i<n; i++) {
//        cout << a[i] << " ";
//    }
//}
//------------------------------------------------seaarching of array-----------------------------------------------
//#include <iostream>
//using namespace std;
//
//// Function to find the number of elements less than or equal to k
//int countElementsLessThanOrEqual(int arr[], int n, int k) {
//    int low = 0, high = n - 1;
//    int result = -1;
//    
//    // Perform binary search
//    while (low <= high) {
//        int mid = low + (high - low) / 2;
//        // Check if the middle element is less than or equal to the key
//        if (arr[mid] <= k) {
//            // Update result to the current mid (potential answer)
//            result = mid;
//            low = mid + 1;  // Look for a higher index
//        } else {
//            high = mid - 1;  // Look for a smaller index
//        }
//    }
//    
//    // Result will contain the index of the largest element <= k
//    return result + 1;  // +1 because index starts at 0
//}
//
//int main() {
//    int n, k;
//    
//    // Input size of the array
//    cout << "Enter the size of the array: ";
//    cin >> n;
//    
//    int arr[n];
//    
//    // Input the sorted array elements
//    cout << "Enter the elements of the sorted array: ";
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//    
//    // Input the key
//    cout << "Enter the value of k: ";
//    cin >> k;
//    
//    // Find and print the count of elements less than or equal to k
//    int count = countElementsLessThanOrEqual(arr, n, k);
//    cout << "Count of elements less than or equal to " << k << ": " << count << endl;
//    
//    return 0;
//}

//------------------------------------------------insertion sort of array-----------------------------------------------
//#include <iostream>
//using namespace std;
//int main(){
//    int size;
//    cout << "Enter the size of array: ";
//    cin >> size;
//    int arr[size];
//    cout << "Enter the elements of array: ";
//    for (int i=0; i<size; i++) {
//        cin >> arr[i];
//    }
//    
//    //insertion sort
//    for (int i=1; i<size; i++) {
//        int tempt= arr[i];
//        int j=i-1;
//        while (j>=0 && arr[j]>tempt) {
//            arr[j+1]=arr[j];
//            j--;
//        }
//        arr[j+1]=tempt;
//    }
//    cout << "The sorted elements of array: ";
//    for (int i=0; i<size; i++) {
//        cout << arr[i] << " ";
//    }
//    return 0;
//}

//------------------------------------------------selection sort of array-----------------------------------------------
//#include <iostream>
//using namespace std;
//int main(){
//    int size;
//    cout << "Enter the size of array: ";
//    cin >> size;
//    int arr[size];
//    cout << "Enter the elements of array: ";
//    for (int i=0; i<size; i++) {
//        cin >> arr[i];
//    }
//
//    //selection sort
//    for (int i=0; i<=size; i++) {
//        int min=i;
//        for (int j=i+1; j<size; j++) {
//            if (arr[j]<arr[min]) {
//                min=j;
//            }
//        }
//        if (min!=i) {
//            int temp=arr[min];
//            arr[min]=arr[i];
//            arr[i]=temp;
//        }
//    }
//    cout << "The sorted elements of array: ";
//    for (int i=0; i<size; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//    return 0;
//}

//----------------------------to find frequency of occuring of unique elements  in ana array----------------------------

//#include <iostream>
//using namespace std;
//int main(){
//    int size;
//    cout << "Enter the size of array: ";
//    cin >> size;
//    int arr[size];
//    cout << "Enter the elements of array: ";
//    for (int i=0; i<size; i++) {
//        cin >> arr[i];
//    }
//
//    //selection sort
//    for (int i=0; i<=size; i++) {
//        if (arr[i]==i) {
//            continue;
//        }
//        int count =1;
//        for (int j=i+1; j<size; j++) {
//            if (arr[j]==arr[i]) {
//                arr[j]=-1;
//                count++;
//            }
//        }
//        cout << arr[i]<<": "<<count;
//    }
//    cout << "The sorted elements of array: ";
//    for (int i=0; i<size; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//    return 0;
//}

//#include <iostream>
//using namespace std;
//int main(){
//    string str;
//    cout << "enter the string: ";
//    getline(cin, str);
//    int counter=0;
//    for (int i=0; i<str.length(); i++) {
//        bool flag = false;
//        if (str[i]==' '|| str[i]=='\t' || str[i]=='\n'){
//            flag=false;
//        }
//        else{
//            if (!flag){
//                counter++;
//                flag=true;
//            }
//        }
//    }
//    cout << "the number of word in the sentence: " <<counter<<endl;
//}

//#include <iostream>
//using namespace std;
//long factorial (long a){
//    if (a > 1){
//        return (a * factorial (a - 1));
//    }
//    else{
//        return 1;
//    }
//}
//int main () {
//    long num = 3;
//    cout << num << "! = " << factorial ( num );
//    return 0;
//}

//concept of linklist and pointers
#include <iostream>
using namespace std;
int square1(int n){
    cout << "Address of methord 1: " << &n << endl;
    n=n*n;
    cout << "Address of methord 1: " << &n << endl;
    return n;
}
int square2(int *n){
    cout << "Address of methord 2: " << &n << endl;
    *n=*n * *n;
    cout << "Address of methord 2: " << &n << endl;
    return *n;
}
int square3(int &n){
    cout << "Address of methord 3: " << &n << endl;
    n=n * n;
    cout << "Address of methord 3: " << &n << endl;
    return n;
}
int main(){
    int n1=5;
    cout << "The address of the n1 is: " << &n1 << endl;
    cout << square1(n1);
    int n2=2;
    cout << "The address of the n2 is: " << &n2 << endl;
    cout << square2(&n2);
    int n3=8;
    cout << "The address of the n3 is: " << &n3 << endl;
    cout << square3(n3);
    
}
