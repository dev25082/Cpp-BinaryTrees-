// Cpp Implementation of Postorder traversal

#include <bits/stdc++.h>
 using namespace std; 

struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void postorder(Node* root) {
    if (root == NULL)
        return;
    
    postorder(root->left);
    
    postorder(root->right);
    
     cout << root->data << " "; 
}

int main() {

    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

   
    postorder(root);

    return 0;
}
/*
output: 4 5 2 6 7 3 1 

      1
     / \
    2   3
   / \ / \
  4  5 6  7

*/

// Time complexity  : O(n)
// Space complexity : O(n)
