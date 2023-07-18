#include <iostream>
using namespace std;

struct Node { // struct sama class sama aja
    // Properties Node
    int data;
    struct Node *left, *right;

    // contructor agar suatu kelas dapat di isi nilai
    Node(int data){
      this->data = data;
      left = right = NULL;
    }
};


//preorder traversal
void preorderTraversal(struct Node* node){
  if(node == NULL) return;

  cout << node-> data << " "; // nampilin data pertama masuk 
  preorderTraversal(node->left);
  preorderTraversal(node->right);
}

//postorder Traversal
void postorderTraversal (struct Node* node){
  if(node==NULL) return;

  postorderTraversal(node->left);
  postorderTraversal (node->right);
    cout << node->data << " ";
}

//Inorder Traversal
void inorderTraversal (struct Node* node){
  if(node==NULL) return;

  inorderTraversal(node->left);
    cout << node->data << " ";
    postorderTraversal (node->right);
}

// Fungsi Utama
int main() {
  struct Node* root = new Node(18);
  root -> left = new Node (30);
  root -> right = new Node (33);
  root -> left -> left = new Node(29);
  root -> left -> right = new Node(32);

  cout << "\nInorder traversal output ";
  inorderTraversal(root);

  cout << "\nPostorder traversal output ";
  postorderTraversal(root);
  
  cout << "\nPreorder Traversal Output ";
  preorderTraversal(root);
  
}