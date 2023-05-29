#include <iostream>
using namespace std;

struct node {
  // properties node
  int data;
  struct node *left, *right;

  // construcotr
  node(int data) {
    this->data = data;
    left = right = NULL;
  }
};

// preorder traversal
void preordertraversal(struct node *node) {
  if (node == NULL)
    return;

  cout << node->data << " "; // nampilin data pertama masuk
  preordertraversal(node->left);
  preordertraversal(node->right);
}

// postorder traversal
void postordertraversal(struct node *node) {
  if (node == NULL)
    return;

  postordertraversal(node->left);
  postordertraversal(node->right);
  cout << node->data << " ";
}

// inorder traversal
void inordertraversal(struct node *node) {
  if (node == NULL)
    return;

  inordertraversal(node->left);
  cout << node->data << " ";
  inordertraversal(node->right);
}

// fungsi utama
int main() {
  struct node *root = new node(18);
  root->left = new node(30);
  root->right = new node(33);
  root->left->left = new node(29);
  root->left->right = new node(32);

  cout << "inorder traversal output" << endl;
  inordertraversal(root);

  cout << "\npreorder traversal output" << endl;
  preordertraversal(root);

  cout << "\npostordrer traversal output" << endl;
  postordertraversal(root);
}