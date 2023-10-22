#include<iostream>
using namespace std;

class node {
public:
int data ;
node* left ;
 node* right;

    node(int d){
    this -> data = d;
    this -> left = NULL;
    this -> right = NULL; 
  } 
};

 node* Create(node* root){
     cout << " ntr the data :";
     int data; 
     cin >> data;

     root = new node (data);

     if (data == -1) {
    return NULL;
     }

cout << "ntr the data for left side " << data << endl;
root->left = Create(root->left);
cout << "ntr the data for right side " << data << endl;
root->right = Create(root->right);
return root;
 }

void Inorder (node* root, int &count){
    if (root == NULL){
        return ;
    }
    Inorder(root->left,count);
    if(root->left == NULL && root->right == NULL) {
        count ++;
    }
    cout << root->data << " ";
    Inorder(root->right,count);
    cout <<endl;
}

int check (node* root){
    int count = 0;
    Inorder(root, count);
    cout <<endl;
    return count;
}

int main(){
int count =0;
node* root = NULL;
root = Create(root);

cout << "printing the Inorder output :" <<endl;
Inorder(root, count);
cout <<check(root) ;
}