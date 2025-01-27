//
//  Stack.cpp
//  CppSEM3
//
//  Created by Rashik Ghosh on 26/10/24.
//

//#include <iostream>
//using namespace std;
//
//struct node{
//    int data;
//    node*next;
//};
//node*top=nullptr;
//void push(int data){
//    node*newnode = new node();
//    if (newnode==nullptr) {
//        cout << "Overflow"<<endl;
//        return;
//    }
//    newnode->data=data;
//    newnode->next=nullptr;
//    if (top==nullptr) {
//        top=newnode;
//    }
//    else{
//        newnode->next = top;
//        top = newnode;
//    }
//}
//void isEmpty() {
//    if (top == nullptr) {
//        cout << "Stack is empty\n";
//    } else {
//        cout << "Stack is not empty\n";
//    }
//}
//
//void display(){
//    if (top==nullptr) {
//        cout<<"Stack is empty.";
//        return;
//    }
//    node* temp=top;
//    cout<<"elements in stack: ";
//    while (temp!=nullptr) {
//        cout<< temp->data<<" ";
//        temp=temp->next;
//    }
//    cout<<endl;
//}
//
//int main(){
//
//}

//#include<iostream>
//using namespace std;
//
//struct node{
//    int data;
//    node*next;
//};
//
//node* Stack(){
//    return nullptr;
//}
//
//void push(node* &head,int data){
//    node*newnode=new node();
//    newnode->data=data;
//    newnode->next=head;
//    head=newnode;
//}
//
//void deleteNode(node* head,int pos){
//    node*temp=head;
//    for(int i=0;temp!=nullptr&&i<pos-1;i++){
//        temp=temp->next;
//    }
//    node*nodeToDelete=temp->next;
//    temp->next=nodeToDelete->next;
//    delete nodeToDelete;
//}
//
//void printList(node* head){
//    node*temp=head;
//    while(temp!=nullptr){
//        cout<<temp->data<<" ";
//        temp=temp->next;
//    }
//    cout<<endl;
//}
//
//int main(){
//    node*head=Stack();
//    int size = 0;
//    int data=1;
//    while(data<size){
//        push(head,data);
//        data++;
//    }
//    cout << "Initial Stack: ";
//    printList(head);
//    cout << endl;
//    int pos=size/2;
//    deleteNode(head,pos);
//    printList(head);
//    
//}

