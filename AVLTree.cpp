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
// These three variables acts as a flag to display the tree
// just after addition and deletion of a node
int flag1 = 0;
int flag2 = 0;
int flag3 = 0;
struct Node *new_node(int key)
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
        cout << "The tree is empty!";
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
struct Node *leftrotate(struct Node *a)
{
    struct Node *b = a->right;
    struct Node *temp = b->left;
    a->right = temp;
    b->left = a;
    int leftheight = height(a->left);
    int rightheight = height(a->right);
    if (leftheight > rightheight)
    {
        a->height = leftheight + 1;
    }
    else
    {
        a->height = rightheight + 1;
    }
    leftheight = height(b->left);
    rightheight = height(b->right);
    if (leftheight > rightheight)
    {
        b->height = leftheight + 1;
    }
    else
    {
        b->height = rightheight + 1;
    }
    return b;
}
struct Node *rightrotate(struct Node *a)
{
    struct Node *b = a->left;
    struct Node *temp = b->right;
    a->left = temp;
    b->right = a;
    int leftheight = height(a->left);
    int rightheight = height(a->right);
    if (leftheight > rightheight)
    {
        a->height = leftheight + 1;
    }
    else
    {
        a->height = rightheight + 1;
    }
    leftheight = height(b->left);
    rightheight = height(b->right);
    if (leftheight > rightheight)
    {
        b->height = leftheight + 1;
    }
    else
    {
        b->height = rightheight + 1;
    }
    return b;
}
struct Node *insertnode(struct Node *node, int key)
{
    flag1 = 0;
    if (node == NULL)
    {
        if (flag3 != 1)
        {
            flag1 = 1;
        }
        return new_node(key);
    }
    else if (key < node->roll)
    {
        node->left = insertnode(node->left, key);
    }
    else
    {
        node->right = insertnode(node->right, key);
    }
    if (flag1 == 1)
    {
        cout << "Tree before height balancing\n";
        preorder(root);
        cout << "\n";
        flag1 = 0;
    }
    int leftheight = height(node->left);
    int rightheight = height(node->right);
    if (leftheight > rightheight)
    {
        node->height = leftheight + 1;
    }
    else
    {
        node->height = rightheight + 1;
    }
    int balance = height(node->left) - height(node->right);
    if (balance > 1 && key < node->left->roll)
    {
        return rightrotate(node);
    }
    else if (balance > 1 && key > node->left->roll)
    {
        node->left = leftrotate(node->left);
        return rightrotate(node);
    }
    else if (balance < -1 && key > node->right->roll)
    {
        return leftrotate(node);
    }
    else if (balance < -1 && key < node->right->roll)
    {
        node->right = rightrotate(node->right);
        return leftrotate(node);
    }
    else
    {
        return node;
    }
}
struct Node *deletenode(struct Node *node, int key)
{
    if (root == NULL)
    {
        cout << "The tree is empty, nothing to delete!\n";
        return NULL;
    }
    if (node == NULL)
    {
        cout << "The given roll element dosen't exist in the tree\n";
        flag2 = -1;
        return node;
    }
    else if (key < node->roll)
    {
        node->left = deletenode(node->left, key);
    }
    else if (key > node->roll)
    {
        node->right = deletenode(node->right, key);
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
            node->right = deletenode(node->right, temp->roll);
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
        cout << "Tree before height balancing\n";
        preorder(root);
        cout << "\n";
        flag2 = -1;
    }
    if (node == NULL)
    {
        flag2 = 1;
        return node;
    }
    int leftheight = height(node->left);
    int rightheight = height(node->right);
    if (leftheight > rightheight)
    {
        node->height = leftheight + 1;
    }
    else
    {
        node->height = rightheight + 1;
    }
    int balance = height(node->left) - height(node->right);
    if (balance > 1 && (height(node->left->left) - height(node->left->right)) >= 0)
    {
        return rightrotate(node);
    }
    else if (balance > 1 && (height(node->left->left) - height(node->left->right)) < 0)
    {
        node->left = leftrotate(node->left);
        return rightrotate(node);
    }
    else if (balance < -1 && (height(node->right->left) - height(node->right->right)) <= 0)
    {
        return leftrotate(node);
    }
    else if (balance < -1 && (height(node->right->left) - height(node->right->right)) > 0)
    {
        node->right = rightrotate(node->right);
        return leftrotate(node);
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
void create_tree()
{
    int num_nodes;
    int roll;
    cout << "Enter the no of nodes\n";
    cin >> num_nodes;
    cout << "Enter the space seprated values that you wnat to insert into the binary tree \n";
    for (int i = 0; i < num_nodes; ++i)
    {
        cin >> roll;
        root = insertnode(root, roll);
    }
}
int main()
{
    int choice;
    int roll;
    int option;
    do
    {
        cout << "Tree Operations Menu :-\n";
        cout << "1. Creation of Binary Search Tree\n";
        cout << "2. Display Binary Search Tree in preorder\n";
        cout << "3. Insert new node in Binary Search Tree\n";
        cout << "4. Delete a node from Binary Search Tree\n";
        cin >> option;
        switch (option)
        {
        case 1:
            flag3 = 1;
            create_tree();
            flag3 = 0;
            break;
        case 2:
            cout << "Displaying binary search tree in preorder :- \n";
            preorder(root);
            cout << "\n";
            break;
        case 3:
            cout << "Enter the value you want to insert into the tree ";
            cin >> roll;
            root = insertnode(root, roll);
            cout << "Tree after height balancing\n";
            preorder(root);
            cout << "\n";
            break;
        case 4:
            cout << "Enter the value you want to delete from the tree ";
            cin >> roll;
            flag2 = 0;
            root = deletenode(root, roll);
            if (root != NULL)
                cout << "Tree after height balancing\n";
            preorder(root);
            cout << "\n";
            break;
        default:
            cout << "Please select a valid option\n";
        }
        cout << "Do you want to continue(Press 1 for yes and 0 for no) ? ";
        cin >> choice;
    } while (choice == 1);
}