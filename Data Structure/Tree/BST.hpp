#ifndef TREE_HPP
#define TREE_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <thread>
#include <mutex>
#include <algorithm>

class BinarySearchTree
{
public:
    // EFFECTS:  Constructs an empty BST.
    BinarySearchTree();

    // EFFECTS:  Constructs a copy of the given tree.
    BinarySearchTree(const BinarySearchTree &other);

    /// EFFECTS:  Replaces the contents of this tree with a copy of the
    ///           given tree.
    BinarySearchTree &operator=(const BinarySearchTree &other);

    /// EFFECTS:  Destructs this tree.
    ~BinarySearchTree();

    /// EFFECTS:  Returns whether this tree is empty.
    bool empty() const;

    /// EFFECTS:  Returns the number of elements in this tree.
    int size() const;

    /// EFFECTS:  Returns whether the given item is contained in this
    ///           tree.
    bool contains(const int &value) const;

    /// REQUIRES: value, and the damn node
    /// EFFECT:  Insert the exact location in the tree
    void insert(const int &value, BinarySearchTree &node);

    /// REQUIRES: value is in this tree, and the damn node
    /// EFFECT:  Removes the given item from this tree.
    void remove(const int &value, BinarySearchTree &node);

    /// EFFECTS:  Prints the contents of this tree, from this nodedown
    void print(BinarySearchTree &node) const;

    /// EFFECTS:  Prints the contents of this tree.
    void print(BinarySearchTree &node, int level) const;

    /// REQUIRES: Node to be copy and the damn node
    /// EFFECTS:  Copies the contents of this tree from the node given to down
    void copy(BinarySearchTree &other, BinarySearchTree &node);

private:
    // Represents a single node of a tree.
    struct Node
    {
        int data;
        Node *left;
        Node *right;
        // INVARIANTS: left and right are either null or pointers to
        //             valid Nodes
        Node(const int &data) : data(data), left(nullptr), right(nullptr) {}
    };

    // The root node of this tree.
    Node *root;
    // INVARIANTS: root is either null or a pointer to a valid Node
};

/// ---------------------- Implementation ---------------------- ///
/// ---------------------- Implementation ---------------------- ///














#endif