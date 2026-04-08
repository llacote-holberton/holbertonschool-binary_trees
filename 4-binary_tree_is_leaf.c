#include <stddef.h>        /* Required for NULL */
#include <stdlib.h>        /* Required for malloc */
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node has children
 * @node: node to check.
 * Return: nothing.
 *
 * NOTES:
 * Your function must return 1 if node is a leaf, otherwise 0
 * If node is NULL, return 0.
 *
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int is_leaf = -1;

	if (!node)
		return (0);
	/* Node has NO left NOR right children */
	if (!node->left && !node->right)
		is_leaf = 1;
	else
		is_leaf = 0;

	return (is_leaf);
}

