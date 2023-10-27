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

void dfs(TreeNode* node) {
    if (node == NULL) return;
    
    cout << node->val << " ";  // 在這裡處理當前節點
    dfs(node->left);          // 遞歸處理左子樹
    dfs(node->right);         // 遞歸處理右子樹
}

void bfs(TreeNode* root) {
    if (root == NULL) return;
    
    queue<TreeNode*> q;
    q.push(root);
    
    while (!q.empty()) {
        TreeNode* node = q.front();
        q.pop();
        
        cout << node->val << " ";  // 在這裡處理當前節點
        
        if (node->left) q.push(node->left);   // 將左子樹節點加入隊列
        if (node->right) q.push(node->right); // 將右子樹節點加入隊列
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
    
    cout << "DFS 遍歷結果：";
    dfs(root);
    cout << endl;
    
    cout << "BFS 遍歷結果：";
    bfs(root);
    cout << endl;
    
    return 0;
}
