#include <iostream>
#include <queue>

using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};
node *buildTree(node *root)
{
    int d;
    cin >> d;

    if (d == -1)
    {
        return NULL;
    }
    else
    {
        node *root = new node(d);
        root->left = buildTree(root->left);
        root->right = buildTree(root->right);
        return root;
    }
}
void preOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}
void postOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        preOrder(root->left);
        preOrder(root->right);
        cout << root->data << " ";
    }
}
void inOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
}
// height of the tree
int h(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        int ls = h(root->left);
        int rs = h(root->right);
        return max(ls, rs) + 1;
    }
}
// BFS
void BFS(node *root)
{
    queue<node *> q;
    q.push(root);

    while (!q.empty())
    {
        node *f = q.front();
        cout << f->data << "\n";
        q.pop();
        if (f->left)
        {
            q.push(f->left);
        }
        if (f->right)
        {
            q.push(f->right);
        }
    }
}
// count of the nodes
int count(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        return 1 + count(root->left) + count(root->right);
    }
}
// sum of  the nodes
int sum(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        return root->data + sum(root->left) + sum(root->right);
    }
}

int main()
{
    node *root = buildTree(root);
    cout << "\n";
    cout << sum(root) << "\n";
    cout << count(root) << "\n";
}
/*8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1*/