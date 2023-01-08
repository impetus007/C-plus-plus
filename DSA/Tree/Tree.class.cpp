#include <bits/stdc++.h>
using namespace std;
template <typename T>
// Tree class
class Treenode
{
public:
    T data;
    vector<Treenode<T> *> children;
    Treenode(T data)
    {
        this->data = data;
    }
};

// Print Tree
void printTree(Treenode<int> *root)
{
    if (root == NULL)
    {
        return; // Base Case
    }
    cout << root->data << ":";
    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << ",";
    }
    cout << endl;
    for (int i = 0; i < root->children.size(); i++)
    {
        printTree(root->children[i]);
    }
}

// Take Input
Treenode<int> *takeinput()
{
    int rootData;
    cout << "Enter data" << endl;
    cin >> rootData;
    Treenode<int> *root = new Treenode<int>(rootData);
    int n;
    cout << "Enter num of children of " << rootData << endl;
    cin>>n;
    for(int i=0;i<n;i++){
        Treenode<int>*child=takeinput();1
        root->children.push_back(child);
    }
    return root;
}

int main()
{
    Treenode<int> *root = takeinput();
    // Treenode<int> *node1 = new Treenode<int>(2);
    // Treenode<int> *node2 = new Treenode<int>(3);
    // root->children.push_back(node1);
    // root->children.push_back(node2);
    printTree(root);
}