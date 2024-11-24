//
//  Linkedlist.cpp
//  CppSEM3
//
//  Created by Rashik Ghosh on 29/10/24.
//

//#include<iostream>
//using namespace std;
//
//struct node{
//    int data;
//    node*next;
//};
//
//node* initializeHeader(){
//    node*head=new node();
//    head->data=0;
//    head->next=nullptr;
//    return head;
//}
//
//void insertNodeEnd(int data,node*head){
//    node*newnode=new node();
//    newnode->data=data;
//    newnode->next=nullptr;
//    node*temp=head;
//    while (temp->next!=nullptr) {
//        temp=temp->next;
//    }
//    temp->next=newnode;
//    temp->data++;
//}
//
//void insertNodeAtStart(int data,node* &head){
//    node*newnode=new node();
//    newnode->data=data;
//    newnode->next=head;
//    head=newnode;
//}
//
//void insertAtThePosition(node* &head,int data,int key){
//    node*temp=head;
//    int k=1;
//    while (k<key-1) {
//        temp=temp->next;
//        k++;
//    }
//    node*newnode=new node();
//    newnode->data=data;
//    newnode->next=temp->next;
//    temp->next=newnode;
//}
//
//void deleteNode(node *head,int position){
//    
//    if(head->next==nullptr){
//    cout<<"empty";
//    return;
//    }
//    
//    //deleting the node at start
//    if (position==1) {
//        node*temp=head;
//        head=head->next;
//        delete temp;
//    }
//    //deleting at the position or the end..
//    else{
//        node*current=head;
//        node*previous=nullptr;
//        int key=1;
//        while (key<position) {
//            previous=current;
//            current=current->next;
//            key++;
//        }
//        previous->next=current->next;
//        delete current;
//    }
//}
//
//void printList(node* &head){
//    node*temp=head;
//    while (temp->next!=nullptr) {
//        cout << temp->data << " ";
//        temp=temp->next;
//    }
//    cout << endl;
//}
//
//int main(){
//    node*head=initializeHeader();
//    int n;
//    cout << "enter the nuber of node you want to insert: " << endl;
//    cin >> n;
//    int data = 0;
//    for (int i=0; i<n; i++) {
//        cin >> data;
//        insertNodeEnd(data, head);
//    }
//    printList(head);
//    
//    int key,data1;
//    cout << "enter the position where to insert: ";
//    cin >> key;
//    cout << endl;
//    cout << "enter the element to insert: ";
//    cin >> data1;
//    insertAtThePosition(head, data1, key);
//    printList(head);
//    
//    //delete at postion;
//    int pos;
//    cout << "enter position ";
//    cin >> pos;
//    deleteNode(head, pos);
//    printList(head);
//
//}

