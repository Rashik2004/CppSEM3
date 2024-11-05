//
//  Heap.cpp
//  CppSEM3
//
//  Created by Rashik Ghosh on 04/11/24.
//

#include <iostream>
using namespace std;

int heap[100];
int z=0;
void insertHeap(int value){
    //heap[++z];
    int current=z;
    while (current>1) {
        int parent =current/2;
        if (heap[parent]<heap[current]) {
            swap(heap[parent], heap[current]);
            current=parent;
        }
        else{
            break;
        }
    }
}

void deleteHeap(){
    if (z==0) {
        cout << "The heap is empty."<<endl;
        return;
    }
    else{
        heap[1]=heap[z--];
        int current =1;
        while (2*current<=z) {
            int leftchild=2*current;
            int rightchild=2*current+1;
            int largest = current;
            if (leftchild<=z && heap[leftchild]>heap[rightchild]) {
                <#statements#>
            }
        }
    }
}

void print(){
    if (z==0) {
        cout<< "empty"<<endl;
    }
    for (int i=1; i<=z; i++) {
        cout << heap[i]<< " ";
    }
}
int main(){
    int choice,value;
    while (true) {
        cout << " \nMenu:\n";
        cout << "1. insert element: \n";
        cout << "2. Print heap\n";
        cout << "3. exit\n";
        cout << "Enter choice";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                insertHeap(value);
                cout << "inserted "<<value<< " into the heap.";
                break;
                
            case 2:
                print();
                break;
            
            case 3:
                cout << "Exiting the heap. " << endl;
                return 0;
                
            default:
                break;
        }
    }
}
