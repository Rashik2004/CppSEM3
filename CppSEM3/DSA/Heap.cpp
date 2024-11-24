//
//  Heap.cpp
//  CppSEM3
//
//  Created by Rashik Ghosh on 04/11/24.
//

//#include <iostream>
//using namespace std;
//
//int heap[100];
//int z=0;
//void insertHeap(int value){
//    z+=1;
//    int current=z;
//    heap[current]=value;
//    while (current>1) {
//        int parent =current/2;
//        if (heap[parent]<heap[current]) {
//            swap(heap[parent], heap[current]);
//            current=parent;
//        }
//        else{
//            break;
//        }
//    }
//}
//
//void deleteHeap(){
//    if (z==0) {
//        cout << "The heap is empty."<<endl;
//        return;
//    }
//    else{
//        heap[1]=heap[z--];
//        int current =1;
//        while (2*current<=z) {
//            int leftchild=2*current;
//            int rightchild=2*current+1;
//            int largest = current;
//            if (leftchild<=z && heap[leftchild]>heap[rightchild]) {
//            }
//        }
//    }
//}
//
//void print(){
//    if (z==0) {
//        cout<< "empty"<<endl;
//    }
//    for (int i=1; i<=z; i++) {
//        cout << heap[i]<< " ";
//    }
//}
//int main(){
//    int choice,value;
//    while (true) {
//        cout << " \nMenu:\n";
//        cout << "1. insert element: \n";
//        cout << "2. Print heap\n";
//        cout << "3. exit\n";
//        cout << "Enter choice";
//        cin >> choice;
//        switch (choice) {
//            case 1:
//                cout << "Enter value to insert: ";
//                cin >> value;
//                insertHeap(value);
//                cout << "inserted "<<value<< " into the heap.";
//                break;
//                
//            case 2:
//                print();
//                break;
//            
//            case 3:
//                cout << "Exiting the heap. " << endl;
//                return 0;
//                
//            default:
//                break;
//        }
//    }
//}


//#include<iostream>
//using namespace std;
//void heapify(int arr[],int size,int i){
//    int left=2*i;
//    int right=2*i+1;
//    int largest=i;
//    if (left<=size && arr[left]<arr[largest]) {
//        largest=left;
//    }
//    if (right<=size && arr[right]<arr[largest]) {
//        largest=right;
//    }
//    if (largest!=i) {
//        swap(arr[largest],arr[i]);
//        heapify(arr, size, largest);
//    }
//}
//
//void heapSort(int arr[],int size){
//    for (int i=size/2; i>=1; i--) {
//        heapify(arr, size, i);
//    }
//    for (int i=size; i>1; i--) {
//        swap(arr[1], arr[i]);
//        heapify(arr, size, i);
//    }
//}
//
//void display(int arr[],int size){
//    if (size==0) {
//        cout<< "empty"<<endl;
//    }
//    for (int i=1; i<=size; i++) {
//        cout << arr[i]<< " ";
//    }
//}
//
//int main(){
//    int arr[101];
//    int size=0;
//    int choice;
//    do {
//        cout << " \nMenu:\n";
//        cout << "1. insert element: \n";
//        cout << "2. Display heap\n";
//        cout << "3. Sort array using heap\n";
//        cout << "4. Exit\n";
//        cin >> choice;
//        switch (choice) {
//            case 1:
//                int element;
//                cin >> element;
//                if (size<100) {
//                    arr[++size]=element;
//                    cout << "Element inserted. \n";
//                }
//                else{
//                    cout << "Array is full"<<endl;
//                }
//                break;
//            
//            case 2:
//                cout << "Array elements"<<endl;
//                display(arr,size);
//                break;
//            
//            case 3:
//                if (size>1) {
//                    heapSort(arr, size);
//                    cout << " Array Sorted elements"<<endl;
//                }
//                break;
//            case 4:
//                cout << " exiting the programe"<<endl;
//                break;
//            default:
//                cout << " invalid choice: , please try again. "<<endl;
//                break;
//        }
//    } while (choice!=4);
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//// Function to heapify a subtree rooted at index i
//void heapify(int arr[], int n, int i) {
//    int smallest = i;          // Initialize smallest as root
//    int left = 2 * i + 1;      // Left child
//    int right = 2 * i + 2;     // Right child
//
//    // Check if left child is smaller than the root
//    if (left < n && arr[left] < arr[smallest])
//        smallest = left;
//
//    // Check if right child is smaller than the smallest so far
//    if (right < n && arr[right] < arr[smallest])
//        smallest = right;
//
//    // If smallest is not the root
//    if (smallest != i) {
//        swap(arr[i], arr[smallest]);
//        heapify(arr, n, smallest); // Recursively heapify the affected subtree
//    }
//}
//
//// Function to build a min-heap from an array
//void buildMinHeap(int arr[], int n) {
//    // Start from the last non-leaf node and move up
//    for (int i = n / 2 - 1; i >= 0; i--) {
//        heapify(arr, n, i);
//    }
//}
//// Function to remove the minimum element from the heap
//void removeMin(int arr[], int &n) {
//    if (n == 0) return;
//
//    // Replace root with the last element
//    arr[0] = arr[n - 1];
//    n--; // Reduce the size of the heap
//
//    // Heapify the root to restore the heap property
//    heapify(arr, n, 0);
//}
//
//int main() {
//    int n;
//    cin >> n;
//
//    int arr[n];
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//
//    // Build the min-heap
//    buildMinHeap(arr, n);
//
//    // Remove the minimum element
//    removeMin(arr, n);
//
//    // Print the updated heap
//    for (int i = 0; i < n; i++) {
//        cout << arr[i];
//        if (i < n - 1) cout << " ";
//    }
//
//    return 0;
//}



