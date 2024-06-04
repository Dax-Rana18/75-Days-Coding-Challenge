#include<bits/stdc++.h>
// #include <iostream>
// #include <vector>
// #include <queue>

using namespace std;

// Definition of a binary tree node.
class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int d) 
    {
        this->val=d;
        this->left=NULL;
        this->right=NULL;
    }
};

//using level order traversal
TreeNode* buildTree(vector<int> &arr){
    if(arr.empty()){
        return nullptr;
    }
    queue<TreeNode*> q;
    TreeNode* curr=new TreeNode(arr[0]);
    q.push(curr);
    int i=1;
    while(!q.empty() && i<arr.size()){
        TreeNode* node=q.front();
        q.pop();

        if(arr[i]!=-1 && i<arr.size()){
            node->left=new TreeNode(arr[i]);
            q.push(node->left);
        }
        i++;
        if(arr[i]!=-1 && i<arr.size()){
            node->right=new TreeNode(arr[i]);
            q.push(node->right);
        }
        i++;
    }
    return curr;
}
// using level order traversal 
void printTree(TreeNode* root){
    if(!root){
        return ;
    }
    queue<TreeNode* > q;
    // TreeNode* node=root;
    q.push(root);
    while(!q.empty()){
        TreeNode* curr=q.front();
        q.pop();

        cout<<curr->val<<" ";
        if(curr->left) q.push(curr->left);
        if(curr->right) q.push(curr->right);
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
//Now i will find height of binary tree
int heightOfTree(TreeNode* root){
    if(root==NULL) return 0;
    int left=heightOfTree(root->left);
    int right=heightOfTree(root->right);
    int ans =max(right,left)+1;
    return ans;
}
int diameterOfTree(TreeNode* root){
    if(root==NULL) return 0;
    int op1=diameterOfTree(root->left);
    int op2=diameterOfTree(root->right);
    int op3=heightOfTree(root->left)+heightOfTree(root->right)+1;
    int ans=max(op1,max(op2,op3));
    return ans;
}
bool checkIfBalanced(TreeNode* root){
    if(root==NULL) return true;
    bool left=checkIfBalanced(root->left);
    bool right=checkIfBalanced(root->right);
    bool diff=abs(heightOfTree(root->left)-heightOfTree(root->right))<=1;
    if(left && right && diff){
        return 1;
    }
    else{
        return false;
    }
}
int calPathSum(TreeNode* root,int pathsum){ //let pathsum passed initially is 0
    if(root==NULL) return 0;
    pathsum=pathsum*10+ root->val;
    if(root->left==NULL && root->right==NULL){
        return pathsum;
    }
    return calPathSum(root->left,pathsum)+calPathSum(root->right,pathsum);
}
int findPathSum(TreeNode* root){
    return calPathSum(root,0);
}

//finding lowest common ancestor
TreeNode* lca(TreeNode* root,int n1,int n2){
    if(root==NULL){
        return NULL;
    }
    if(root-> val==n1 || root->val== n2){
        return root;
    }
    TreeNode* leftAns=lca(root->left,n1,n2);
    TreeNode* rightAns=lca(root->right,n1,n2);

    if(leftAns!= NULL && rightAns!=NULL){
        return root;
    }
    else if(leftAns!=NULL && rightAns==NULL){
        return leftAns;
    }
    else if(leftAns==NULL && rightAns!=NULL){
        return rightAns;
    }
    else{
        return NULL;
    }

}
vector<int> TopView(TreeNode* root){
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    map <int,int> topNode;
    queue<pair<TreeNode*,int>> q;
    q.push(make_pair(root,0));
    while(q.empty()){
        pair<TreeNode*,int> temp=q.front();
        q.pop();
        TreeNode* frontNode=temp.first;
        int hd=temp.second;

    //if one value is present for hd then do nothing 
        if(topNode.find(hd)==topNode.end()){
            topNode[hd]=frontNode->val;
        }
        if(frontNode->left){
            q.push(make_pair(frontNode->left,hd-1));
        }
        if(frontNode->right){
            q.push(make_pair(frontNode->right,hd+1));
        }
    }
    for(auto i:topNode){
        ans.push_back(i.second);
        // cout<<i.second<<" ";
    }
    return ans;
}
int main(){
    // vector<int> arr={1,2,3,4,5,6,-1,7,-1,-1,-1,-1,-1,8,-1};
    // TreeNode* root=buildTree(arr);
    // inorder(root);
    // cout<<endl;
    // int height=heightOfTree(root);
    // cout<<"Height of Tree is:"<<height<<endl;
    // int diam=diameterOfTree(root);
    // cout<<"Diameter Of Tree is:"<<diam<<endl;
    // printTree(root);

    //check if tree is balanced or not
    // bool balanced=checkIfBalanced(root);
    // if(!balanced) cout<<"Tree is not Balanced";
    // else cout<<"Tree is balanced";
    // vector<int> arr={1,2,3,-1,-1,-1,-1};
    // TreeNode* root=buildTree(arr);
    // int pathsum=findPathSum(root);
    // cout<<"Path Sum is:"<<pathsum<<endl;

    // now finding the lowest common ancestor
    vector<int> arr={1,2,3,6,-1,4,5,-1,8,-1,-1,21,-1};
    TreeNode* root=buildTree(arr);
    // int n1=4 ,n2=21;
    // TreeNode* ans=lca(root,n1,n2);
    // cout<<"Lowest common ancestor of "<<n1<<" and "<<n2<<"is: "<<ans->val<<endl;

    //finding top view of binary tree
    vector<int> topView = TopView(root);
    
    // Print the values
    for (int val : topView) {
        cout << val << " ";
    }
    }
