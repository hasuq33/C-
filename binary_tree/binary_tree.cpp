#include<iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x): val(x), left(nullptr),right(nullptr) {}
};

class BinaryTree{
    public:
        TreeNode* insert(TreeNode *root, int value){
            if(!root){
                return new TreeNode(value);
            }
            if(value < root->val){
                root->left = insert(root->left, value);
            }else{
                root->right = insert(root->right, value);
            }
            return root;
        }
        void inOrderTraversal(TreeNode *root){
            if(root){
                inOrderTraversal(root->left);
                cout << root->val << endl;
                inOrderTraversal(root->right); //
            }
        }
};

int main(){
    BinaryTree tree;
    TreeNode *root = nullptr;

    root = tree.insert(root,10);
    root = tree.insert(root,5);
    root = tree.insert(root,20);
    root = tree.insert(root,3);
    root = tree.insert(root,7);
    root = tree.insert(root,15);
    root = tree.insert(root,30);
    
}