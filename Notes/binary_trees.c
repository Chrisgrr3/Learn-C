#include <stdio.h>
#include <stdlib.h>
// A binary tree is a data structure where each node has at most two children (A left and a right child). They're used to implement binary search trees and binary heaps, and are useful for efficient searching and sorting.
// A binary tree is a special case of a K-ary tree, where k=2. Common operations include insertion, deletion, and traversal.
// The difficulty of performing these varies if the tree is balanced and also whether the nodes leaf nodes or branch nodes.
// For a balanced tree, the depth of the left and right subtrees of every node differ by one or less, allowing for a predictable depth also known as the height.
// The height is the measure of a node from root to leaf, where the root is 0 and the subsequent nodes are (1,2..n). This can be expressed by the integer part of log_2(n), where n is the number of nodes in the tree.

// The operation on trees require one of two main ways:
// Depth-first search(DFS) - This is an algorithm for traversing or searching tree or graph data structures. You start at the root and explore as far as possible along each branch before backtracking. The three types of depth first search traversal are:
//// pre-order visit, left, right
//// in-order left, visit, right
//// post-order left, right, visit
// Breadth-first search (BFS) - This is an algorithm for traversing or searching tree or graph structures. In level-order where we visit every node on a level before going to a lower level.
typedef struct node
{
    int val;
    // This is a pointer to the left side of the tree
    struct node *left;
    // This a pointer to the right side of the tree
    struct node *right;
} node_t;
void insert(node_t *tree, int val);
void print_tree(node_t *current);
void printDFS(node_t *current);
int main()
{
    node_t *tree = (node_t *)malloc(sizeof(node_t));
    // Let's set values explicitly
    tree->val = 0;
    tree->left = NULL;
    tree->right = NULL;
    insert(tree, 5);
    insert(tree, 8);
    insert(tree, 4);
    insert(tree, 3);

    printDFS(tree);
    printf("\n");
}
void insert(node_t *tree, int val)
{
    if (tree->val == 0)
    {
        // This means our tree is empty and we set the current position to the given value
        tree->val = val;
    }
    // Our else condition is hit if our tree is not empty(root is not 0)
    else
    {
        // If the given value is less than the node value
        if (val < tree->val)
        {
            // Then we'll recursively insert the new node to the left branch of the current node
            // The if statement checks to see if a left node already exists. If if does exist, we will move to that left node and repeat the insert.
            if (tree->left != NULL)
            {
                insert(tree->left, val);
            }
            else
            {
                tree->left = (node_t *)malloc(sizeof(node_t));
                tree->left->val = val;
                tree->left->left = NULL;
                tree->left->right = NULL;
            }
        }
        else
        {
            if (val >= tree->val)
            {
                if (tree->right != NULL)
                {
                    insert(tree->right, val);
                }
                else
                {
                    tree->right = (node_t *)malloc(sizeof(node_t));
                    tree->right->val = val;
                    tree->right->left = NULL;
                    tree->right->right = NULL;
                }
            }
        }
    }
}
void printDFS(node_t *current)
{
    if (current == NULL)
        return;
    if (current != NULL)
    {
        printf("%d ", current->val);
    }
    if (current->left != NULL)
    {
        printDFS(current->left);
    }
    if (current->right != NULL)
    {
        printDFS(current->right);
    }
}