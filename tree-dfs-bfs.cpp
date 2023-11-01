#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


void dfs(TreeNode* node){
    if(node){
        cout << node->val << " ";
        dfs(node->left);
        dfs(node->right);
    }
}


void bfs(TreeNode* node){

    if(node == NULL) return;

    queue<TreeNode*> q;
    q.push(node);

    while( !q.empty() ){
        TreeNode* node = q.front();
        q.pop();

        cout << node->val << " ";

        if(node->left) q.push(node->left);
        if(node->right) q.push(node->right);
    }    

}

void insertNode(TreeNode* root, int val) {
    if (root == NULL) {
        root = new TreeNode(val);
        return;
    }

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* node = q.front();
        q.pop();

        if (node->left == NULL) {
            node->left = new TreeNode(val);
            return;
        } else {
            q.push(node->left);
        }

        if (node->right == NULL) {
            node->right = new TreeNode(val);
            return;
        } else {
            q.push(node->right);
        }
    }
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    /*
            1
          /   \
        2       3
       / \     / \
      4   5   6   7
    
    */

    
    cout << "DFS 遍歷結果：";
    dfs(root);
    cout << endl;
    
    cout << "BFS 遍歷結果：";
    bfs(root);
    cout << endl;


    insertNode(root, 8);
    insertNode(root, 9);
    insertNode(root, 10);
    insertNode(root, 11);
    insertNode(root, 12);
    insertNode(root, 13);
    insertNode(root, 14);
    insertNode(root, 15);
    /*
             1
          /      \
         2         3
       /  \       / \
      4    5     6   7
     / \  / \   / \  / \
    8  9 10 11 12 13 14 15

    */
    cout << "DFS 遍歷結果：";
    dfs(root);
    cout << endl;
    
    cout << "BFS 遍歷結果：";
    bfs(root);
    cout << endl;
    
    return 0;
}
