#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_node - will creates a binary tree node.
 * @parent: A pointer aiming to the parent of the node to create.
 * @value: The value to put in the new node.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 */


struct binary_tree_node {
    int value;
    struct binary_tree_node* left;
    struct binary_tree_node* right;
};

struct binary_tree_node* binary_tree_node(struct binary_tree_node* parent, int value) {
    struct binary_tree_node* new_node = (struct binary_tree_node*)malloc(sizeof(struct binary_tree_node));
    if (new_node == NULL) {
        // Memory allocation failed
        return NULL;
    }

    new_node->value = value;
    new_node->left = NULL;
    new_node->right = NULL;

    if (parent != NULL) {
        if (value < parent->value) {
            parent->left = new_node;
        } else {
            parent->right = new_node;
        }
    }

    return new_node;
}
