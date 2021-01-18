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
