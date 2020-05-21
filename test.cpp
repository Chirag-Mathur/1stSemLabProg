#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int roll;
    struct Node *left;
    struct Node *right;
    int height;
};
struct Node *root = NULL;

int flag1 = 0;
int flag2 = 0;
int flag3 = 0;
struct Node *NewNode(int key)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->roll = key;
    temp->left = NULL;
    temp->right = NULL;
    temp->height = 1;
    return temp;
}
void preorder(struct Node *node)
{
    if (root != NULL)
    {
        if (node != NULL)
        {
            cout << node->roll << " ";
            preorder(node->left);
            preorder(node->right);
        }
    }
    else
    {
        cout << "EMPTY TREE";
    }
}
int height(struct Node *a)
{
    if (a == NULL)
    {
        return 0;
    }
    else
    {
        return a->height;
    }
}
struct Node *LRotate(struct Node *a)
{
    struct Node *b = a->right;
    struct Node *temp = b->left;
    a->right = temp;
    b->left = a;
    int LHeight = height(a->left);
    int RHeight = height(a->right);
    if (LHeight > RHeight)
    {
        a->height = LHeight + 1;
    }
    else
    {
        a->height = RHeight + 1;
    }
    LHeight = height(b->left);
    RHeight = height(b->right);
    if (LHeight > RHeight)
    {
        b->height = LHeight + 1;
    }
    else
    {
        b->height = RHeight + 1;
    }
    return b;
}
struct Node *RRotate(struct Node *a)
{
    struct Node *b = a->left;
    struct Node *temp = b->right;
    a->left = temp;
    b->right = a;
    int LHeight = height(a->left);
    int RHeight = height(a->right);
    if (LHeight > RHeight)
    {
        a->height = LHeight + 1;
    }
    else
    {
        a->height = RHeight + 1;
    }
    LHeight = height(b->left);
    RHeight = height(b->right);
    if (LHeight > RHeight)
    {
        b->height = LHeight + 1;
    }
    else
    {
        b->height = RHeight + 1;
    }
    return b;
}
struct Node *InNode(struct Node *node, int key)
{
    flag1 = 0;
    if (node == NULL)
    {
        if (flag3 != 1)
        {
            flag1 = 1;
        }
        return NewNode(key);
    }
    else if (key < node->roll)
    {
        node->left = InNode(node->left, key);
    }
    else
    {
        node->right = InNode(node->right, key);
    }
    if (flag1 == 1)
    {
        cout << "Before Height Balancing\n";
        preorder(root);
        cout << "\n";
        flag1 = 0;
    }
    int LHeight = height(node->left);
    int RHeight = height(node->right);
    if (LHeight > RHeight)
    {
        node->height = LHeight + 1;
    }
    else
    {
        node->height = RHeight + 1;
    }
    int Bal = height(node->left) - height(node->right);
    if (Bal > 1 && key < node->left->roll)
    {
        return RRotate(node);
    }
    else if (Bal > 1 && key > node->left->roll)
    {
        node->left = LRotate(node->left);
        return RRotate(node);
    }
    else if (Bal < -1 && key > node->right->roll)
    {
        return LRotate(node);
    }
    else if (Bal < -1 && key < node->right->roll)
    {
        node->right = RRotate(node->right);
        return LRotate(node);
    }
    else
    {
        return node;
    }
}
struct Node *DelNode(struct Node *node, int key)
{
    if (root == NULL)
    {
        cout << "EMPTY TREE\n";
        return NULL;
    }
    if (node == NULL)
    {
        cout << "Element does not exist\n";
        flag2 = -1;
        return node;
    }
    else if (key < node->roll)
    {
        node->left = DelNode(node->left, key);
    }
    else if (key > node->roll)
    {
        node->right = DelNode(node->right, key);
    }
    else
    {
        if (node->right != NULL && node->left != NULL)
        {
            struct Node *temp = node->right;
            while (temp && temp->left != NULL)
            {
                temp = temp->left;
            }
            node->roll = temp->roll;
            node->right = DelNode(node->right, temp->roll);
        }
        else
        {
            if (node->left == NULL && node->right == NULL)
            {
                struct Node *temp = node;
                node = NULL;
                free(temp);
            }
            else if (node->left != NULL)
            {
                struct Node *temp = node;
                node = node->left;
                free(temp);
            }
            else
            {
                struct Node *temp = node;
                node = node->right;
                free(temp);
            }
        }
    }
    if (flag2 == 1)
    {
        cout << "Before Height Balancing\n";
        preorder(root);
        cout << "\n";
        flag2 = -1;
    }
    if (node == NULL)
    {
        flag2 = 1;
        return node;
    }
    int LHeight = height(node->left);
    int RHeight = height(node->right);
    if (LHeight > RHeight)
    {
        node->height = LHeight + 1;
    }
    else
    {
        node->height = RHeight + 1;
    }
    int Bal = height(node->left) - height(node->right);
    if (Bal > 1 && (height(node->left->left) - height(node->left->right)) >= 0)
    {
        return RRotate(node);
    }
    else if (Bal > 1 && (height(node->left->left) - height(node->left->right)) < 0)
    {
        node->left = LRotate(node->left);
        return RRotate(node);
    }
    else if (Bal < -1 && (height(node->right->left) - height(node->right->right)) <= 0)
    {
        return LRotate(node);
    }
    else if (Bal < -1 && (height(node->right->left) - height(node->right->right)) > 0)
    {
        node->right = RRotate(node->right);
        return LRotate(node);
    }
    else
    {
        if (flag2 == 0)
        {
            flag2 = 1;
        }
        return node;
    }
}
void createTree()
{
    int nodes;
    int roll;
    cout << "Enter the no of nodes\n";
    cin >> nodes;
    cout << "Enter the values you want to insert\n";
    for (int i = 0; i < nodes; ++i)
    {
        cin >> roll;
        root = InNode(root, roll);
    }
}





int main()
{
    int choice;
    int roll;
    int option;
    int x=1;
    while(x!=0)
    {
       
        cout<<"Press\n 1.Create\n 2.Display\n 3.Insert New Node\n 4.Delete a node\n 0.Exit\n";
        cin >> x;
        switch (x)
        {
        case 1:
            flag3 = 1;
            createTree();
            flag3 = 0;
            break;
        case 2:
            cout << "Preorder Display\n";
            preorder(root);
            cout << "\n";
            break;
        case 3:
            cout << "Enter the value you want to insert\n ";
            cin >> roll;
            root = InNode(root, roll);
            cout << "Tree after height balancing\n";
            preorder(root);
            cout << "\n";
            break;
        case 4:
            cout << "Enter the value you want to delete\n";
            cin >> roll;
            flag2 = 0;
            root = DelNode(root, roll);
            if (root != NULL)
                cout << "Tree after height balancing\n";
            preorder(root);
            cout << "\n";
            break;
        case 0:
        break;
        }
        
    } 
}