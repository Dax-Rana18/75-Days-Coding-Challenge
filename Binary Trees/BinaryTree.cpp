#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node* left;
    node* right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root)
{

    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    { 
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

// void levelOrderTraversal(node *root)
// {
//     queue<node *> q;
//     q.push(root);
//     q.push(NULL);

//     while (!q.empty())
//     {
//         node *temp = q.front();
//         q.pop();

//         if (temp == NULL)
//         {
//             // purana level complete traverse ho chuka hai
//             cout << endl;
//             if (!q.empty())
//             {
//                 // queue still has some child ndoes
//                 q.push(NULL);
//             }
//         }
//         else
//         {
//             cout << temp->data << " ";
//             if (temp->left)
//             {
//                 q.push(temp->left);
//             }

//             if (temp->right)
//             {
//                 q.push(temp->right);
//             }
//         }
//     }
// }

void levelOrder(node* root){
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while(q.empty()){
        node* temp =q.front();
        cout<<temp->data<<endl;
        q.pop();
            
            if(temp->left){
                q.push(temp->left);
            }
            else{
                q.push(temp->right);
            }

        }
    }


void inorder(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

node* buildFromLevelOrder(node *&root)
{
    queue<node *> q;

    cout << "Enter data for root" << endl;
    int data;
    cin >> data;
    root = new node(data);

    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        cout << "Enter left node for: " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if (leftData != -1)
        {
            /*
            temp is a pointer to the current node (the one being processed).
temp->left refers to the left child of the current node.
new node(leftData) creates a new node with the data value specified by leftData.
The newly created node is assigned as the left child of the current node (temp).
In other words, this line of code creates a left child node for the current node and assigns it the value provided by the user (leftData).
            */
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right node for: " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if (rightData != -1)
        {
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}

node* buildfromLevelOrder(node* &root){
    queue<node*> q;
    int data;
    cin >> data;
    root=new node(data);
    q.push(root);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        int leftData;
        cin>>leftData;
        if(leftData!=-1){
            temp->left =new node(leftData);
            q.push(temp->left);
        }

        int rightData;
        cin>>rightData;
        if(rightData!=-1){
            temp->right =new node(rightData);
            q.push(temp->right);
        }
    }

}

int main()
{

    node *root = NULL;

    root = buildfromLevelOrder(root);
    levelOrder(root);
    // cout<<"Printing in order traversal"<<endl;
    // inorder(root);

    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1

    /*
    //creating a Tree
    root = buildTree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    //level order
    cout << "Printing the level order tracersal output " << endl;
    levelOrderTraversal(root);

    cout << "inorder traversal is:  ";
    inorder(root);

    cout << endl << "preorder traversal is:  ";
    preorder(root);

    cout << endl << "postorder traversal is:  ";
    postorder(root);
    */

    return 0;
}