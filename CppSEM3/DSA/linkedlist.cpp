//
//  linkedlist.cpp
//  CppSEM3
//
//  Created by Rashik Ghosh on 14/10/24.
//

//starting with singly linked list(basics)
//bits/stdc++.h

// #include<iostream>
// #include <vector>
// using namespace std;
// struct node
// {
//     public:
//     int data;
//     node* next;

//     public:
//     node(int data1, node* next1){
//         data=data1;
//         next=next1;
//     }
// };

// int main(){
//     int arr[4]={2, 5, 8, 7};
//     node* y = new node(arr[0], nullptr);
//     cout << y << endl;
//     cout << y->data << endl;
//     cout << y->next << endl;
// }

// #include<iostream>
// #include <vector>
// using namespace std;
// struct node
// {
//     public:
//     int data;
//     node* next;

//     public:
//     node(int data1, node* next1){
//         data=data1;
//         next=nullptr;
//     }
// };
// node* convertall(int &arr){
//     new* node* head = new node arr[0];
//     node* mover = head;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         node* temp
//     }
    
// }
// int main(){
//     int arr[4]={2, 5, 8, 7};
//     node* y = new node(arr[0], nullptr);
//     cout << y << endl;
//     cout << y->data << endl;
//     cout << y->next << endl;
// }

//Insertion in a linked list

// #include <iostream>
// using namespace std;

// struct node {
// int data;
// node* next;
// };

// // Function to append node at the end of the list
// void appendNode(node*& head, int data) {
// node* newNode = new node();
// newNode->data = data;
// newNode->next = nullptr;
// if (head == nullptr) {
// head = newNode;
// } else {
// node* temp = head;
// while (temp->next != nullptr) {
// temp = temp->next;
// }
// temp->next = newNode;
// }
// }

// // Function to append node at the beginning of the list
// void appendNodeAtBeginning(node*& head, int data) {
// node* newNode = new node();
// newNode->data = data;
// newNode->next = head; // Corrected this line
// head = newNode;
// }

// // Function to append node at a specific position
// void appendNodeAtChoice(node*& head, int data, int pos) {
// if (pos <= 0) {
// cout << "Invalid position!" << endl;
// return;
// }

// node* newNode = new node();
// newNode->data = data;

// if (pos == 1) {
// newNode->next = head;
// head = newNode;
// return;
// }

// node* temp = head;
// for (int i = 1; i < pos - 1 && temp != nullptr; i++) {
// temp = temp->next;
// }

// if (temp == nullptr) {
// cout << "Position out of range!" << endl;
// delete newNode; // Free the memory as the position is invalid
// return;
// }

// newNode->next = temp->next;
// temp->next = newNode;
// }

// // Function to print the linked list
// void printlist(node* head) {
// node* temp = head;
// cout << "Updated list: ";
// while (temp != nullptr) {
// cout << temp->data << " ";
// temp = temp->next;
// }
// cout << endl;
// }

// int main() {
// int n;
// cout << "Enter how many elements you want to enter: ";
// cin >> n;

// node* head = nullptr;
// int data;

// for (int i = 0; i < n; i++) {
// cout << "Enter the data element: ";
// cin >> data;
// appendNode(head, data);
// }

// printlist(head);

// cout << "Enter the element to insert at the beginning: ";
// int key;
// cin >> key;
// appendNodeAtBeginning(head, key);
// printlist(head);

// int k, pos;
// cout << "Enter the position in which you want to insert: ";
// cin >> pos;
// cout << "Enter the element which you want to insert: ";
// cin >> k;
// appendNodeAtChoice(head, k, pos);
// printlist(head);

// return 0;
// }

//deletion of node in a linked list

// #include <iostream>
// using namespace std;
// struct node {
// int data;
// node* next;
// };
// node*temp = nullptr;
// void deletenode(node*& head) {
//     temp=head;
//     while(temp->next != nullptr) {
//         temp=temp->next;
//     }
//     delete(temp->next);
//     temp->next=nullptr;
// }
// void deletefromBeginning(node* &head){
//     temp=head;
//     head=head->next;
//     delete temp;
// }
// void deletefromchoice(node* &head, int pos){
//     temp=head;
//     for (int i = 0; i < pos-1; i++)
//     {
//         temp=temp->next;
//     }
//     node* temp2=temp->next;
//     temp->next=temp->next->next;
//     delete temp2;
// }

//linked list

// #include<iostream>
// using namespace std;

// struct node{
//     int data;
//     node* next;
// };

// node* initaializeHeader(){
//     node*header=new node();
//     header->data=0;
//     header->next=nullptr;
//     return header;
// }
// void appendNode(node*header,int data){
//     node*newnode=new node();
//     newnode->data=data;
//     newnode->next=nullptr;
//     node*temp=header;
//     while(temp->next!=nullptr){
//         temp=temp->next;
//     }
//     temp->next=newnode;
//     header->data++;
// }

// void appendAtBeggening(node*header,int data){
//     node*newnode=new node();
//     newnode->data=data;
//     newnode->next=header->next;
//     header->next=newnode;
//     header->data++;
// }

// void appendAtChoice(node*header,int pos,int data){
//     node*newnode=new node();
//     newnode->data=data;
//     newnode->next=nullptr;
//     node*temp=header->next;
// }

// void printList(node*header){
//     node*temp=header;
//     while (temp!=nullptr)
//     {
//         cout<< temp->data << " ";
//         temp=temp->next;
//     }
// }

// int main(){
//     node*header=initaializeHeader();
//     int n;
//     cout << "Enter the no. of nodes you want to enter: ";
//     cin >> n;
//     int data;
//     for(int i=0;i<n;i++){
//         cin>>data;
//         appendNode(header,data);
//     }
//     printList(header);

//     int value;
//     cin >> value;
//     appendAtBeggening(header,value);
//     printList(header);
// }

//#include<iostream>
//using namespace std;
//
//struct node{
//    int data;
//    node* next;
//};
//node* initializeHead(){
//    node*head=new node();
//    head->data=0;
//    head->next=nullptr;
//    return head;
//}
//void appendAtEnd(node* head,int data){
//    node* newnode=new node();
//    newnode->data=data;
//    newnode->next=nullptr;
//    node*temp=head;
//    while (temp->next!=nullptr) {
//        temp=temp->next;
//    }
//    temp->next=newnode;
//    head->data++;
//}
//
//void printList(node* head){
//    node*temp=head;
//    while (temp->next!=nullptr) {
//        cout << temp->data << " ";
//        temp=temp->next;
//    }
//}
//int main(){
//    node*head=initializeHead();
//    int n;
//    cout << "Enter the no. of nodes you want to enter: ";
//    cin >> n;
//    int data;
//    for(int i=0;i<n;i++){
//        cin>>data;
//        appendAtEnd(head,data);
//    }
//    printList(header);
//}


//#include <iostream>
//using namespace std;
//
//// Structure for a node in the linked list
//struct node {
//    int data; // Data stored in the node
//    node* next; // Pointer to the next node
//};
//node*top = nullptr;
//
//
//// Function to push an element onto the stack
//void push(int x) {
//    // Create a new node
//    node* newNode = new node();
//    if (newNode==nullptr) {
//        cout << "Stack Overflow\n";
//        return;
//    }
//    newNode->data = x;
//    newNode->next =nullptr;
//    if(top==nullptr){
//        top = newNode;
//    }
//    else{
//        newNode->next = top; // Make the new node point to the current top
//        top = newNode; // Update the top to be the new node
//        cout << x << " pushed into stack\n";
//    }
//}
//
//// Function to pop the top element from the stack
//void pop() {
//    if (top == nullptr) {
//        cout << "Stack Underflow\n";
//        return;
//    }
//    
//    node* temp = top; // Store the current top node
//    cout << temp->data << " popped from stack\n";
//    top = top->next; // Update the top to the next node
//    delete temp; // Delete the old top node
//}
//
//// Function to return the top element (peek)
//void peek() {
//    if (top == nullptr) {
//        cout << "Stack is empty\n";
//    } else {
//        cout << "Top element is " << top->data << "\n";
//    }
//}
//
//// Function to check if the stack is empty
//void isEmpty() {
//    if (top == nullptr) {
//        cout << "Stack is empty\n";
//    } else {
//        cout << "Stack is not empty\n";
//    }
//}
//
//// Function to display the stack elements
//void displayStack() {
//    if (top == nullptr) {
//        cout << "Stack is empty\n";
//        return;
//    }
//    
//    node* temp = top;
//    cout << "Stack elements are:\n";
//    while (temp != nullptr) {
//        cout << temp->data << " "; // Print data of each node
//        temp = temp->next; // Move to the next node
//    }
//    cout << "\n";
//}
//
//// Main function with a menu-driven interface
//int main() {
//    int choice, value;
//    do {
//        
//        cout << "1. Push"<<endl;
//        cout << "2. Pop"<<endl;
//        cout << "3. Peek"<<endl;
//        cout << "4. Check if Stack is Empty"<<endl;
//        cout << "5. Display Stack"<<endl;
//        cout << "6. Exit"<<endl;
//        cout << "Enter your choice: "<<endl;
//        cin >> choice;
//        
//        switch (choice) {
//            case 1:
//                cout << "Enter value to push: ";
//                cin >> value;
//                push(value);
//                break;
//                
//            case 2:
//                pop();
//                break;
//                
//            case 3:
//                peek();
//                break;
//                
//            case 4:
//                isEmpty();
//                break;
//                
//            case 5:
//                displayStack();
//                break;
//                
//            case 6:
//                cout << "Exiting...";
//                displayStack();
//                break;
//                
//            default:
//                cout << "Invalid choice";
//                displayStack();
//        }
//    } while (choice>=1 && choice<6);
//    
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//struct node {
//    int data;
//    node* next;
//};
//
//// Insert a node at the end
//void insertNodeEnd(int data, node*& head) {
//    node* newnode = new node();
//    newnode->data = data;
//    newnode->next = nullptr;
//
//    if (head == nullptr) {
//        head = newnode;
//        return;
//    }
//
//    node* temp = head;
//    while (temp->next != nullptr) {
//        temp = temp->next;
//    }
//    temp->next = newnode;
//}
//
//// Insert a node at the start
//void insertNodeAtStart(int data, node*& head) {
//    node* newnode = new node();
//    newnode->data = data;
//    newnode->next = head;
//    head = newnode;
//}
//
//// Insert a node at a specific position
//void insertAtThePosition(node*& head, int data, int key) {
//    if (key <= 0) {
//        cout << "Invalid position!" << endl;
//        return;
//    }
//
//    if (key == 1) {
//        insertNodeAtStart(data, head);
//        return;
//    }
//
//    node* temp = head;
//    int currentPosition = 1;
//
//    while (temp != nullptr && currentPosition < key - 1) {
//        temp = temp->next;
//        currentPosition++;
//    }
//
//    if (temp == nullptr) {
//        cout << "Position out of bounds!" << endl;
//        return;
//    }
//
//    node* newnode = new node();
//    newnode->data = data;
//    newnode->next = temp->next;
//    temp->next = newnode;
//}
//
//// Print the linked list
//void printList(node* head) {
//    node* temp = head;
//    while (temp != nullptr) {
//        cout << temp->data << " ";
//        temp = temp->next;
//    }
//    cout << endl;
//}
//
//int main() {
//    node* head = nullptr;
//    int n;
//
//    cout << "Enter the number of nodes you want to insert: ";
//    cin >> n;
//
//    cout << "Enter the elements to insert: ";
//    for (int i = 0; i < n; i++) {
//        int data;
//        cin >> data;
//        insertNodeEnd(data, head);
//    }
//
//    cout << "Created Linked List: ";
//    printList(head);
//
//    int key, data1;
//    cout << "Enter the position where to insert: ";
//    cin >> key;
//
//    cout << "Enter the element to insert: ";
//    cin >> data1;
//
//    insertAtThePosition(head, data1, key);
//
//    cout << "Updated Linked List: ";
//    printList(head);
//
//    return 0;
//}
