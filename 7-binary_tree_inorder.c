#include "binary_trees.h"

/**
* binary_tree_inorder - Goes through a binary tree using in-order traversal
*
* @tree: Pointer to the root node of the tree to traverse
* @func: Pointer to a function to call for each node
*
* Description: The value in each node is passed as a parameter to the
* function func. If tree or func is NULL, nothing happens.
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;

/* Traverse the left subtree */
binary_tree_inorder(tree->left, func);

/* Apply the function to the current node */
func(tree->n);

/* Traverse the right subtree */
binary_tree_inorder(tree->right, func);
}
