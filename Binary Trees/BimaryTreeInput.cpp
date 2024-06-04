#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Definition of a binary tree node.
class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Function to build the tree from a level order array.
TreeNode* buildTree(const vector<int>& arr) {
    if (arr.empty()) return nullptr;

    queue<TreeNode*> nodeQueue;
    TreeNode* root = new TreeNode(arr[0]);
    nodeQueue.push(root);

    int i = 1;
    while (!nodeQueue.empty() && i < arr.size()) {
        TreeNode* node = nodeQueue.front();
        nodeQueue.pop();

        // If the left child is not null, create it and add to the queue.
        if (i < arr.size() && arr[i] != -1) {
            node->left = new TreeNode(arr[i]);
            nodeQueue.push(node->left);
        }
        i++;

        // If the right child is not null, create it and add to the queue.
        if (i < arr.size() && arr[i] != -1) {
            node->right = new TreeNode(arr[i]);
            nodeQueue.push(node->right);
        }
        i++;
    }

    return root;
}

// Function to display the tree in level order.
void displayTree(TreeNode* root) {
    if (!root) return;

    queue<TreeNode*> nodeQueue;
    nodeQueue.push(root);

    while (!nodeQueue.empty()) {
        TreeNode* node = nodeQueue.front();
        nodeQueue.pop();

        cout << node->val << " ";

        if (node->left) nodeQueue.push(node->left);
        if (node->right) nodeQueue.push(node->right);
    }
}
void inorder(TreeNode* root){
    if(!root)
    return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);

    // return root;
}
int main() {
    // Example input: [1, 2, 3, 4, 5, -1, 6]
    vector<int> arr = {1, 2, 3, 4, 5, -1, 6};

    TreeNode* root = buildTree(arr);
    cout << "Level order traversal of the binary tree:" << endl;
    inorder(root);

    // Don't forget to delete the allocated memory for the tree.
    // This part is omitted for simplicity.
    return 0;
}
