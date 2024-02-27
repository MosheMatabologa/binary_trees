#include <stdio.h>
#include <stdlib.h>

struct binary_tree_node {
    int value;
    struct binary_tree_node* left;
    struct binary_tree_node* right;
};

// Create a new binary tree node
struct binary_tree_node* binary_tree_node(struct binary_tree_node* parent, int value) {
    // Allocate memory for the new node
    struct binary_tree_node* new_node = (struct binary_tree_node*)malloc(sizeof(struct binary_tree_node));
    if (new_node == NULL) {
        // Memory allocation failed
        return NULL;
    }

    // Initialize the node properties
    new_node->value = value;
    new_node->left = NULL;
    new_node->right = NULL;

    // Set the parent (if provided)
    if (parent != NULL) {
        // Connect the new node to the parent
        // (Assuming the parent already exists in the tree)
        if (value < parent->value) {
            parent->left = new_node;
        } else {
            parent->right = new_node;
        }
    }

    return new_node;
}
