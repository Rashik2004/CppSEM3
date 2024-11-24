//
//  Tress.cpp
//  CppSEM3
//
//  Created by Rashik Ghosh on 29/10/24.
//
//binary tree
//#include <iostream>
//using namespace std;
//
//struct node{
//    int data;
//    node*left;
//    node*right;
//    
//    node(int d){
//        data=d;
//        left=nullptr;
//        right=nullptr;
//    }
//};
//
//node* buildBinary(node* &root){
//    cout << "Enter the root :";
//    int data;
//    cin >> data;
//    root=new node(data);
//    if (data==-1) {
//        return NULL;
//    }
//    cout << "enter the element in the left "<<data;
//    root->left=buildBinary(root->left);
//    cout << "enter the element in the right "<<data;
//    root->right=buildBinary(root->right);
//    return root;
//}
//
//
//int main(){
//    node*root=nullptr;
//    root=buildBinary(root);
//}
//


//binary search tree


//#include <iostream>
//using namespace std;
//
//struct Node {
//    int data;
//    Node *left;
//    Node *right;
//
//    // Constructor for the struct
//    Node(int d) {
//        data = d;
//        left = NULL;
//        right = NULL;
//    }
//};
//
//
//void insertion(Node *&root, int d) {
//    if (root == NULL) {
//        root = new Node(d);
//        return;
//    }
//    if (d > root->data) {
//        insertion(root->right, d);
//    } else {
//        insertion(root->left, d);
//    }
//}
//
//void takeinput(Node *&root) {
//    int n;
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        int d;
//        cin >> d;
//        insertion(root, d);
//    }
//}
//
//void inorder(Node *root) {
//    if (root == NULL) {
//        return;
//    }
//    inorder(root->left);
//    cout << root->data << " ";
//    inorder(root->right);
//}
//
//void preorder(Node *root) {
//    if (root == NULL) {
//        return;
//    }
//    cout << root->data << " ";
//    preorder(root->left);
//    preorder(root->right);
//}
//
//void postorder(Node *root) {
//    if (root == NULL) {
//        return;
//    }
//    postorder(root->left);
//    postorder(root->right);
//    cout << root->data << " ";
//}
//
//bool search(Node *&root, int x) {
//    Node *temp = root;
//    while (temp != NULL) {
//        if (temp->data == x) {
//            return true;
//        }
//        if (x > temp->data) {
//            temp = temp->right;
//        } else {
//            temp = temp->left;
//        }
//    }
//    return false; // Element not found
//}
//
//int min(Node *&root) {
//    Node *temp = root;
//    if (temp == NULL) {
//        cout << "NO ELEMENT PRESENT" << endl;
//        return -1; // Indicating no element
//    }
//    while (temp->left != NULL) {
//        temp = temp->left;
//    }
//    cout << "Minimum ELEMENT: " << temp->data << endl;
//    return temp->data;
//}
//
//int max(Node *&root) {
//    Node *temp = root;
//    if (temp == NULL) {
//        cout << "NO ELEMENT PRESENT" << endl;
//        return -1; // Indicating no element
//    }
//    while (temp->right != NULL) {
//        temp = temp->right;
//    }
//    cout << "Maximum ELEMENT: " << temp->data << endl;
//    return temp->data;
//}
//
//int main() {
//    Node *root = NULL;
//    cout << "Enter the number of elements followed by the elements: ";
//    takeinput(root);
//
//    cout << "Preorder Traversal: ";
//    preorder(root);
//    cout << endl;
//
//    cout << "Inorder Traversal: ";
//    inorder(root);
//    cout << endl;
//
//    cout << "Postorder Traversal: ";
//    postorder(root);
//    cout << endl;
//
//    int x;
//    cout << "Enter an element to search: ";
//    cin >> x;
//
//    if (search(root, x)) {
//        cout << x << " is present in the tree" << endl;
//    } else {
//        cout << x << " is not present in the tree" << endl;
//    }
//
//    min(root);
//    max(root);
//
//    return 0;
//}
