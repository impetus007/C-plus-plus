#include <bits/stdc++.h>
using namespace std;
template <typename T>
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
// takeinput level wise
Treenode<int> *takeInputLevelWise()
{
    int rootdata;
    cout << "Enter root data"
         << "\n";
    cin >> rootdata;
    Treenode<int> *root = new Treenode<int>(rootdata);
    queue<Treenode<int> *> pendingNodes;
    pendingNodes.push(root);
    while (pendingNodes.size() != 0)
    {
        Treenode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout << "Enter num of children of" << front->data << "\n";
        int numchild;
        cin >> numchild;
        for (int i = 0; i < numchild; i++)
        {
            int childData;
            cout << "Enter " << i << " th child of " << front->data << "\n";
            cin >> childData;
            Treenode<int> *child = new Treenode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}
Treenode<int> *takeInput()
{
    int rootdata;
    cout << "Enter data"
         << "\n";
    cin >> rootdata;
    Treenode<int> *root = new Treenode<int>(rootdata);
    int n;
    cout << "Enter num of children of " << rootdata << "\n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        Treenode<int> *child = takeInput();
        root->children.push_back(child);
    }
    return root;
}

void printTree(Treenode<int> *root)
{
    // Edge case
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " : ";
    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << ",";
    }
    cout << "\n";
    for (int i = 0; i < root->children.size(); i++)
    {
        printTree(root->children[i]);
    }
}
int main()
{
    // Treenode<int> *root = new Treenode<int>(1);
    // Treenode<int> *node1 = new Treenode<int>(2);
    // Treenode<int> *node2 = new Treenode<int>(3);
    // root->children.push_back(node1);
    // root->children.push_back(node2);

    Treenode<int> *root = takeInputLevelWise();
    printTree(root);
}