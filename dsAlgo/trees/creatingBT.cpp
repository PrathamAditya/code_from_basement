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

node *buildTree(node *r)
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
// preOrder
void printPre(node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        cout << root->data << " ";
        printPre(root->left);
        printPre(root->right);
    }
}
// inorder
void printIn(node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        printIn(root->left);
        cout << root->data << " ";
        printIn(root->right);
    }
}
// postOrder
void printPost(node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        // BUILD LEFT SUBtREE
        printPost(root->left);
        // build right sub tree
        printPost(root->right);
        cout << root->data << " ";
    }
}
// heigth of the tree
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
// levelOrder
void printKthLevel(node *root, int k)
{
    if (root == NULL)
    {
        return;
    }
    if (k == 1)
    {
        cout << root->data << " ";
        return;
    }
    printKthLevel(root->left, k - 1);
    printKthLevel(root->right, k - 1);
    return;
}
void levelOrder(node *root)
{
    int heigth = h(root);
    for (int i = 1; i <= heigth; i++)
    {
        printKthLevel(root, i);
        cout << "\n";
    }
    return;
}
void BFS(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *f = q.front();
        if (f == NULL)
        {
            cout << endl;
            q.pop();
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << f->data << " ";
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
    return;
}
void BFSSame(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *f = q.front();
        q.pop();

        if (f == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << f->data << " ";
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
    return;
}
int count(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return 1 + count(root->left) + count(root->right);
}
int sum(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return root->data + sum(root->left) + sum(root->right);
}
// diameter of the tree
int diameter(node *root)
{

    if (root == NULL)
    {
        return 0;
    }
    int h1 = h(root->left);
    int h2 = h(root->right);
    int op1 = h1 + h2;
    int op2 = diameter(root->left);
    int op3 = diameter(root->right);

    return max(op1, max(op2, op3));
}

// diameter of the tree optimized fashion
// you can use the in built pair
class Pair
{
public:
    int heigth;
    int diameter;
};
Pair fastD(node *root)
{
    Pair p;
    if (root == NULL)
    {
        p.diameter = p.heigth = 0;
        return p;
    }
    // otherwise

    Pair left = fastD(root->left);
    Pair right = fastD(root->right);

    p.heigth = max(left.heigth, right.heigth) + 1;
    p.diameter = max(max(left.heigth + right.heigth, left.diameter), right.diameter);
    return p;
}
// replace with the sum of child node

int replaceSum(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return root->data;
    }
    int l = replaceSum(root->left);
    int r = replaceSum(root->right);
    int temp = root->data;
    root->data = l + r;
    return temp + root->data;
}
// is tree is balanced or not
class HB
{
public:
    bool isb;
    int height;
};
HB isHeightBal(node *root)
{
    HB p;
    if (root == NULL)
    {
        p.height = 0;
        p.isb = true;
    }
    // post order res
    HB left = isHeightBal(root->left);
    HB right = isHeightBal(root->right);
    p.height = max(left.height, right.height) + 1;

    if (abs(left.height - right.height) <= 1 && left.isb && right.isb)
    {
        p.isb = true;
    }
    else
    {
        p.isb = false;
    }
    return p;
}
// build a balance tree from  an array
node *buildTreeFromArray(int *a, int s, int e)
{
    // base
    if (s > e)
    {
        return NULL;
    }
    int mid = (s + e) / 2;
    node *root = new node(a[mid]);
    root->left = buildTreeFromArray(a, s, mid - 1);
    root->right = buildTreeFromArray(a, mid + 1, e);
    return root;
}

node *createTreeInPre(int *in, int *pre, int s, int e)
{
    // this static is only insilazie once
    static int i = 0;
    if (s > e)
    {
        return NULL;
    }
    node *root = new node(pre[i]);

    int index = -1;
    for (int j = s; s <= e; j++)
    {
        if (in[j] == pre[i])
        {
            index = j;
            break;
        }
    }
    i++;
    root->left = createTreeInPre(in, pre, s, index - 1);
    root->right = createTreeInPre(in, pre, index + 1, e);
    return root;
}

int main()
{
    int pre[] = {1, 2, 3, 4, 8, 5, 6, 7};
    int in[] = {3, 2, 8, 4, 1, 6, 7, 5};
    int e = 7;
    int s = 0;
    node *root = createTreeInPre(in, pre, s, e);
    BFS(root);
}
