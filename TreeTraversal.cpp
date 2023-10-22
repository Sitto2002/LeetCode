#include<iostream>
using namespace std;

class node {
    public:
  int data;
  node* left;
  node* right;
  
    node(int d){
    this -> data = d;
    this -> left = NULL;
    this -> right = NULL; 
  } 
};

void inorder (node* root) {
    if(root == NULL){
        return ;
    } else {
         inorder(root->left);
         cout << root->data << " " ;
         inorder(root->right);
    }
}

void preorder (node* root) {
    if(root == NULL){
        return ;
    } else {
         cout << root->data << " " ;
         inorder(root->left);
         inorder(root->right);
    }
}

void postorder (node* root) {
    if(root == NULL){
        return ;
    } else {
         inorder(root->left);
         inorder(root->right);
         cout << root->data << " " ;
    }
}

node* Create(node* root){
cout << "ntr the data " << endl;
int data;
cin >> data;
root = new node(data);

if (data == -1) {
    return NULL;
}

cout << "ntr the data for left side " << data << endl;
root->left = Create(root->left);
cout << "ntr the data for right side " << data << endl;
root->right = Create(root->right);
return root;
}

int main(){
  node* root = NULL;

    // creating a Tree
    root = Create(root);

    cout << "printing the Inorder :" <<endl;
    inorder(root); cout<<endl;

    cout << "printing the Preorder :" <<endl;
    preorder(root); cout <<endl;

    cout << "printing the Postorder :" <<endl;
    postorder(root); cout <<endl;
     return 0;
}